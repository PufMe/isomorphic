//
// Created by Admin on 03.02.2023.
//
#include "test.h"
#include "IsomorphismTree.h"

//Пустые вектора, 1
void ZeroNode() {
    std::vector<int> tree1(0);
    std::vector<int> tree2(0);

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

//Два центра, 1
void Test1(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};;
    std::vector<int> tree2 = {-1, 0, 0, 0, 3, 2, 5, 6, 6, 8};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

//Разная длина, 0
void Test2(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8, 9};
    std::vector<int> tree2 = {-1, 0, 0, 0, 3, 2, 5, 6, 6, 8};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//0
void Test3(){
    std::vector<int> tree1 = {-1};
    std::vector<int> tree2 = {};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

//Единичные, 1
void Test4(){
    std::vector<int> tree1 = {-1};
    std::vector<int> tree2 = {-1};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

//1
void Test5(){
    std::vector<int> tree1 = {-1, 0, 0, 0, 1, 1, 2, 2, 3, 5};
    std::vector<int> tree2 = {-1, 0, 0, 0, 1, 1, 4, 5, 5, 3};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//1
void Test6(){
    std::vector<int> tree1 = {-1,0, 0, 0, 1, 0, 0, 1, 1, 2, 3, 9, 9, 10, 9, 5, 4, 15, 6, 7, 19, 20, 20, 2, 8, 8, 18, 18, 27, 27, 28, 28, 16, 32, 32, 11, 11, 12, 2, 21, 21, 22, 17, 17, 17, 13, 34, 33, 34, 33, 14};
    std::vector<int> tree2 = {-1,0, 0, 0, 1, 0, 0, 1, 1, 2, 3, 9, 9, 10, 9, 5, 4, 15, 6, 7, 19, 20, 20, 2, 8, 8, 18, 18, 27, 27, 28, 28, 16, 32, 32, 11, 11, 12, 2, 21, 21, 22, 17, 17, 17, 13, 34, 33, 34, 33, 14};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

//бамбук, 1
void Test7(){
    std::vector<int> tree1 = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::vector<int> tree2 = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//бинарное, 1
void Test8(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//0
void Test9(){
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4};
    std::vector<int> tree2 = {-1, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 5};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//0
void Test10(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 3, 1, 5, 2, 2, 8, 7};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 4, 5, 2, 2, 2, 2};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
//0
void Test11(){
    std::vector<int> tree1 = {-1, 0, 0, 0, 0};
    std::vector<int> tree2 = {-1, 0, 0, 0, 3};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}

void Test12(){
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    std::vector<int> tree2 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 11, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    if (treesAreIsomorphic(tree1, tree2))
        std::cout << "OneNode OK" << std::endl;
    else
        std::cout << "OneNode ne OK" << std::endl;
}
void RunTests() {
    ZeroNode();
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();
    Test7();
    Test8();
    Test9();
    Test10();
    Test11();
    Test12();
}

