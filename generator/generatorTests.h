//
// Created by Admin on 13.02.2023.
//

#ifndef ISO_GENERATORTESTS_H
#define ISO_GENERATORTESTS_H


#include <bits/stdc++.h>
#include <random>
#include <chrono>
using namespace std;

int RandomNumber(int a, int b);
vector<int> GeneratorTree(int nodes_count);
void TimeIsom();
vector<int> GeneratorTreeWithKey(int nodes_count, int key);
vector<int> GenerateBamboo(int nodes_count);

#endif