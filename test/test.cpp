//
// Created by Admin on 03.02.2023.
//
#include "test.h"
#include "../algorithm/IsomorphismTree.h"


void ZeroNode() {
    std::vector<int> tree1(0);
    std::vector<int> tree2(0);

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

void RunTests() {
    ZeroNode();
}
