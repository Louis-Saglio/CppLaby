#include <iostream>
#include <vector>
#include "module.h"
using namespace std;


int main() {
    vector<vector<char>> matrice;
    matrice = createMatrice(5, 7, '*');
    printMatrice(matrice);
    vector<char> values(3, '*');
    cout << getMatchingValuesNextCaseNumber(matrice, 2, 3, values);
    return 0;
}