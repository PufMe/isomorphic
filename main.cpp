#include "IsomorphismTree.h"
#include "test.h"
#include "generatorTests.h"

int main() {
    RunTests();

    vector<int> tree = GeneratorTreeWithKey(19, 19);
    for (int i = 0; i < 19; ++i) {
        cout << tree[i] << " ";
    }

//    vector<int> tree1 = GenerateBamboo(19);
//    for(int i = 0; i < 19; ++i){
//        cout << tree1[i] << " ";
//    }
}