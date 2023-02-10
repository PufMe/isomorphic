//
// Created by Admin on 10.02.2023.
//

#include "IsomorphismTree.h"

node::node(int id, node *parent) {
    this->id = id;
    this->parent = parent;
}

node::node(int data) : node(data, nullptr){};

void node::addChildren(const vector<node> &nodes) {
    for (auto node : nodes){
        children.push_back(node);
    }
}

node createNode(vector<vector<int>>& tree, node& vertex){
    for(int i: tree[vertex.id]){
        if(vertex.parent != nullptr && i == vertex.parent->id){
            continue;
        }
        node* child = new node(i, &vertex);
        vertex.addChildren({*child});

        createNode(tree,*child);
    }
    return vertex;
}


node rootTree(vector<vector<int>>& tree, int rootId){
    node* root = new node(rootId);
    return createNode(tree, *root);
}

vector<vector<int>> arrConvert(vector<int>& tree){
    vector<vector<int>> arr(tree.size());
    for(int i = 0; i < tree.size(); i++){
        if(tree[i] != -1){
            arr[tree[i]].push_back(i);
            arr[i].push_back(tree[i]);
        }
    }
    return arr;
}


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

string encode(node& vertex){
    if (&vertex == nullptr){
        return "";
    }

    vector<string> labels;
    for (node child : vertex.children){
        labels.push_back(encode(child));
    }

    sort(labels.begin(),labels.end());

    string result = "";
    for(string l: labels){
        result += l;
    }
    return '(' + result + ')';
}

bool treesAreIsomorphic(vector<int>& tree1, vector<int>& tree2){
    if(tree1.size() == 0 && tree2.size() == 0){
        return 1;
    }
    if(tree1.size() != tree2.size()){
        return false;
    }

    vector<vector<int>> t1 = arrConvert(tree1);
    vector<vector<int>> t2 = arrConvert(tree2);

    vector<int> centerT1 = findTreeCenter(t1);
    vector<int> centerT2 = findTreeCenter(t2);

    if(centerT2.size() == 1){
        node rootedT1 = rootTree(t1, centerT1[0]);
        string encodeT1 = encode(rootedT1);

        node rootedT2 = rootTree(t2,centerT2[0]);
        string encodeT2 = encode(rootedT2);
        if( encodeT1 == encodeT2){
            return true;
        }
    }else{
        node rootedT1 = rootTree(t1, centerT1[0]);
        string encodeT1 = encode(rootedT1);

        node rootedT12 = rootTree(t1, centerT1[1]);
        string encodeT12 = encode(rootedT12);

        node rootedT2 = rootTree(t2,centerT2[0]);
        string encodeT2 = encode(rootedT2);

        node rootedT22 = rootTree(t2,centerT2[1]);
        string encodeT22 = encode(rootedT22);



        if(encodeT1 == encodeT2 && encodeT12 == encodeT22){
            return true;
        }else if(encodeT1 == encodeT22 && encodeT2 == encodeT12){
            return true;
        }

    }
    return false;
}