//
// Created by Admin on 10.02.2023.
//
#include "IsomorphismTree.h"

//преобразовываем массив в список смежности
vector<vector<int>> arrConvertToList(vector<int>& tree){
    vector<vector<int>> adjList(tree.size());
    for(int i = 1; i < tree.size(); i++){
        adjList[tree[i]].push_back(i);
        adjList[i].push_back(tree[i]);
    }
    return adjList;
}

//поиск цетра(ов) дерева
vector<int> findTreeCenter(vector<vector<int>>& tree){
    int nodes_count = tree.size();
    vector<int> degree (nodes_count,0);
    vector<int> leaves;

    for(int i = 0; i < nodes_count; i++){
        degree[i] = tree[i].size();
        if(degree[i] == 0 || degree[i] == 1){
            leaves.push_back(i);
            degree[i] = 0;
        }
    }
    int leaves_count = leaves.size();
    while(leaves_count < nodes_count){
        vector<int> new_leaves;
        for(int i : leaves){
            for(int j : tree[i]){
                degree[j] = degree[j] - 1;
                if(degree[j] == 1){
                    new_leaves.push_back(j);
                }
            }
            degree[i] = 0;
        }
        leaves_count += new_leaves.size();
        leaves = new_leaves;
    }
    return leaves;
}

//сериализация дерева
string encodeAHU(vector<vector<int>>& tree, int& vertex, vector<bool>& visit){

    if(visit[vertex]){
        return "";
    }
    visit[vertex] = true;
    if(tree[vertex].size() == 1){
        return "()";
    }
    vector<string> label;
    for(int i : tree[vertex]){
        label.push_back(encodeAHU(tree, i, visit));
    }
    sort(label.begin(),label.end());

    string result = "";
    for(string l: label){
        result += l;
    }
    return "(" + result + ")";
}


bool treesAreIsomorphic(vector<int>& tree1, vector<int>& tree2){
    if(tree1.size() == 0 && tree2.size() == 0){
        return 1;
    }
    if(tree1.size() != tree2.size()){
        return false;
    }

    vector<vector<int>> t1 = arrConvertToList(tree1);
    vector<vector<int>> t2 = arrConvertToList(tree2);

    vector<int> centerT1 = findTreeCenter(t1);
    vector<int> centerT2 = findTreeCenter(t2);

    if(centerT1.size() != centerT2.size()){
        return false;
    }else if(centerT2.size() == 1){
        vector<bool> visitT1 (tree1.size(),0);
        vector<bool> visitT2 (tree2.size(),0);

        string encodeT1 = encodeAHU(t1, centerT1[0], visitT1);
        string encodeT2 = encodeAHU(t2, centerT2[0], visitT2);

        if( encodeT1 == encodeT2){
            return true;
        }
    }else{
        vector<bool> visitT11 (tree1.size(),0);
        vector<bool> visitT12 (tree1.size(),0);

        vector<bool> visitT21 (tree2.size(),0);
        vector<bool> visitT22 (tree2.size(),0);

        visitT11[centerT1[1]] = 1;
        visitT12[centerT1[0]] = 1;

        visitT21[centerT2[1]] = 1;
        visitT22[centerT2[0]] = 1;

        string encodeT11 = encodeAHU(t1, centerT1[0], visitT11);
        string encodeT12 = encodeAHU(t1, centerT1[1], visitT12);

        string encodeT21 = encodeAHU(t2, centerT2[0], visitT21);
        string encodeT22 = encodeAHU(t2, centerT2[1], visitT22);

       // cout << encodeT1 << " " << encodeT12 << endl;
        if(encodeT11 == encodeT21 && encodeT12 == encodeT22){
            return true;
        }else if(encodeT11 == encodeT22 && encodeT21 == encodeT12){
            return true;
        }
    }
    return false;
}