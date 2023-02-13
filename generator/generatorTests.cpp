#include <bits/stdc++.h>
#include "generatorTests.h"
#include "IsomorphismTree.h"
#include <random>
#include <chrono>

using namespace std;

random_device rd;
mt19937 gen(rd());

int RandomNumber(int a, int b){
    uniform_int_distribution<> dist(a,b);
    return dist(gen);
}

vector<int> GeneratorTree(int nodes_count){
    vector<int> tree(nodes_count);
    tree[0] = -1;
    for(int i = 1; i < nodes_count; i++){
        int parent = RandomNumber(0, i-1);
        tree[i] = parent;
    }
    return tree;
}

void TimeIsom(){

    for (int i = 1000; i < 1000000; i += 10000) {
        vector<int> tree1 = GeneratorTree(i);
        vector<int> tree2 = GeneratorTree(i);
        auto start = chrono::steady_clock::now();
        treesAreIsomorphic(tree1,tree2);
        auto end = chrono::steady_clock::now();
        cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << endl;
    }

}
