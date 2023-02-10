//
// Created by Admin on 10.02.2023.
//

#ifndef ISOMORPHIZM_TREE_ISOMORPHISMTREE_H
#define ISOMORPHIZM_TREE_ISOMORPHISMTREE_H

#endif //ISOMORPHIZM_TREE_ISOMORPHISMTREE_H
#include <bits/stdc++.h>
using namespace std;
struct node{
    int id;
    node* parent;
    vector<node> children;
    node(int id, node* parent);
    node(int data);

    void addChildren(const vector<node>& nodes);
};

bool treesAreIsomorphic(vector<int>& tree1, vector<int>& tree2);