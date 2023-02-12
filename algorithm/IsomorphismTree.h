//
// Created by Admin on 10.02.2023.
//

#ifndef ISOMORPHIZM_TREE_ISOMORPHISMTREE_H
#define ISOMORPHIZM_TREE_ISOMORPHISMTREE_H

#endif //ISOMORPHIZM_TREE_ISOMORPHISMTREE_H
#include <bits/stdc++.h>
using namespace std;

bool treesAreIsomorphic(vector<int>& tree1, vector<int>& tree2);

string encode(vector<vector<int>>& tree, int& vertex, vector<bool>& visit);
vector<int> findTreeCenter(vector<vector<int>>& tree);
vector<vector<int>> arrConvert(vector<int>& tree);