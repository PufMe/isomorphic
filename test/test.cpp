//
// Created by Admin on 03.02.2023.
//
#include "test.h"
#include "IsomorphismTree.h"

//Один центр, 1
void Test1(){
    std::vector<int> tree1 = {-1, 0, 1, 2, 3, 3};
    std::vector<int> tree2 = {-1, 0, 0, 0, 1, 4};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test1: isomorphic" << endl;
    }else{
        cout << "Test1: not isomorphic" << endl;
    }
}
//Один центр, 0
void Test2(){
    std::vector<int> tree1 = {-1, 0, 1, 2, 3, 3};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 4};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test2: isomorphic" << endl;
    }else{
        cout << "Test2: not isomorphic" << endl;
    }
}
//Два центра, 1
void Test3(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};
    std::vector<int> tree2 = {-1, 0, 0, 0, 3, 2, 5, 6, 6, 8};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test3: isomorphic" << endl;
    }else{
        cout << "Test3: not isomorphic" << endl;
    }
}
//Два центра, 0, одно поддерево изоморфно, другое нет
void Test4(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};
    std::vector<int> tree2 = {-1, 0, 0, 0, 3, 2, 5, 6, 7, 8};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test4: isomorphic" << endl;
    }else{
        cout << "Test4: not isomorphic" << endl;
    }
}
//Два центра, 0, оба поддерева не изоморфны
void Test5(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 2, 5, 6, 7, 8};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test5: isomorphic" << endl;
    }else{
        cout << "Test5: not isomorphic" << endl;
    }
}
//1
void Test6(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 3, 1, 5, 2, 2, 8, 7};
    std::vector<int> tree2 = {-1, 0, 0, 1, 3, 1, 5, 2, 2, 8, 7};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test6: isomorphic" << endl;
    }else{
        cout << "Test6: not isomorphic" << endl;
    }
}
//Разное количество центров, 0
void Test7(){
    std::vector<int> tree1 = {-1, 0, 0, 1, 3, 1, 5, 2, 2, 8, 7};
    std::vector<int> tree2 = {-1, 0, 0, 1, 3, 4, 1, 2, 2, 8, 7};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test7: isomorphic" << endl;
    }else{
        cout << "Test7: not isomorphic" << endl;
    }
}

//Пустые вектора, 1
void Test8() {
    std::vector<int> tree1(0);
    std::vector<int> tree2(0);

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test8: isomorphic" << endl;
    }else{
        cout << "Test8: not isomorphic" << endl;
    }
}
//Единичные, 1
void Test9() {
    std::vector<int> tree1 = {-1};
    std::vector<int> tree2 = {-1};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test9: isomorphic" << endl;
    }else{
        cout << "Test9: not isomorphic" << endl;
    }
}
//Разное количество вершин + сравнение с нулевым, 0
void Test10() {
    std::vector<int> tree1 = {-1};
    std::vector<int> tree2 = {};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test10: isomorphic" << endl;
    }else{
        cout << "Test10: not isomorphic" << endl;
    }
}
//Разное количество вершин, 0
void Test11() {
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8, 4};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test11: isomorphic" << endl;
    }else{
        cout << "Test11: not isomorphic" << endl;
    }
}
//тростник, 1
void Test12() {
    std::vector<int> tree1 = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    std::vector<int> tree2 = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 12, 13, 14, 15, 16, 17, 18, 19};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test12: isomorphic" << endl;
    }else{
        cout << "Test12: not isomorphic" << endl;
    }
}
//Бинарное, 1
void Test13() {
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test13: isomorphic" << endl;
    }else{
        cout << "Test13: not isomorphic" << endl;
    }
}

//Бинарное, 0, разное кол-во вершин
void Test14() {
    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    std::vector<int> tree2 = {-1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test14: isomorphic" << endl;
    }else{
        cout << "Test14: not isomorphic" << endl;
    }
}
//Множество вершин, 1
void Test15() {
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 0, 0, 0, 0};
    std::vector<int> tree2 = {-1, 0, 1, 1, 1, 1, 1, 1, 1};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test15: isomorphic" << endl;
    }else{
        cout << "Test15: not isomorphic" << endl;
    }
}
//Множество вершин, 0
void Test16() {
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 0, 0, 0, 0};
    std::vector<int> tree2 = {-1, 0, 1, 1, 1, 1, 1, 1, 2};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test16: isomorphic" << endl;
    }else{
        cout << "Test16: not isomorphic" << endl;
    }
}
//Большое дерево, 1
void Test17() {
    std::vector<int> tree1 = {-1,0, 0, 0, 1, 0, 0, 1, 1, 2, 3, 9, 9, 10, 9, 5, 4, 15, 6, 7, 19, 20, 20, 2, 8, 8, 18, 18, 27, 27, 28, 28, 16, 32, 32, 11, 11, 12, 2, 21, 21, 22, 17, 17, 17, 13, 34, 33, 34, 33, 14};
    std::vector<int> tree2 = {-1,0, 0, 0, 1, 0, 0, 1, 1, 2, 3, 9, 9, 10, 9, 5, 4, 15, 6, 7, 19, 20, 20, 2, 8, 8, 18, 18, 27, 27, 28, 28, 16, 32, 32, 11, 11, 12, 2, 21, 21, 22, 17, 17, 17, 13, 34, 33, 34, 33, 14};


    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test17: isomorphic" << endl;
    }else{
        cout << "Test17: not isomorphic" << endl;
    }
}

//Большое уменьшающееся дерево, 1
void Test18() {
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    std::vector<int> tree2 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test18: isomorphic" << endl;
    }else{
        cout << "Test18: not isomorphic" << endl;
    }
}
//Большое уменьшающееся дерево, 1
void Test19() {
    std::vector<int> tree1 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    std::vector<int> tree2 = {-1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 11, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test19: isomorphic" << endl;
    }else{
        cout << "Test19: not isomorphic" << endl;
    }
}
//Расширяющееся дерево, 1
void Test20() {
    std::vector<int> tree1 = {-1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9};
    std::vector<int> tree2 = {-1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9};

    if(treesAreIsomorphic(tree1,tree2)){
        cout << "Test20: isomorphic" << endl;
    }else{
        cout << "Test20: not isomorphic" << endl;
    }
}

void RunTests() {
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
    Test13();
    Test14();
    Test15();
    Test16();
    Test17();
    Test18();
    Test19();
    Test20();
}

