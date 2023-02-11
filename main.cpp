#include "IsomorphismTree.h"
#include "test.h"

int main() {
//    RunTests();

//    vector<int> tree = {-1, 0, 0, 1, 1, 2};
//    vector<vector<int>> treeC = arrConvert(tree);
//
//    for(int i = 0; i < treeC.size(); i++){
//        cout << i << ' ';
//        for(int j = 0; j < treeC[i].size(); j++){
//            cout << treeC[i][j];
//        }
//        cout << endl;
//    }


    std::vector<int> tree1 = {-1, 0, 0, 1, 1, 3, 2, 6, 6, 8};;
    std::vector<int> tree2 = {-1, 0, 0, 0, 3, 2, 5, 6, 6, 8};

    vector<vector<int>> t1 = arrConvert(tree1);
    vector<vector<int>> t2 = arrConvert(tree2);

    vector<int> centerT1 = findTreeCenter(t1);
    vector<int> centerT2 = findTreeCenter(t2);

    node rootedT1 = rootTree(t1, centerT1[0]);
    string encodeT1 = encode(rootedT1);

    cout << encodeT1 << endl;
    /*if(centerT1.size() == 1){
        node rootedT1 = rootTree(t1, centerT1[0]);
        string encodeT1 = encode(rootedT1);

        node rootedT2 = rootTree(t2,centerT2[0]);
        string encodeT2 = encode(rootedT2);
        cout << encodeT1 << " " << encodeT2;
    }else{
        node rootedT1 = rootTree(t1, centerT1[0]);
        string encodeT1 = encode(rootedT1);

        node rootedT12 = rootTree(t1, centerT1[1]);
        string encodeT12 = encode(rootedT12);

        node rootedT2 = rootTree(t2,centerT2[0]);
        string encodeT2 = encode(rootedT2);

        node rootedT22 = rootTree(t2,centerT2[1]);
        string encodeT22 = encode(rootedT22);

        cout << encodeT1 << " " << encodeT12 << " " << encodeT2 << " " << encodeT22;

    }*/
    cout << treesAreIsomorphic(tree2,tree1);
}