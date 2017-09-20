//
// Created by louis on 20/09/17.
//

#include "module.h"
using namespace std;

vector<char> createLigne(int size, char remplissage){
    vector<char> ligne;
    for (int i = 0; i < size; ++i) {
        ligne.push_back(remplissage);
    }
    return ligne;
}

vector<vector<char>> createMatrice(int hauteur, int largeur, char remplissage){
    vector<vector<char>> matrice;
    for (int i = 0; i < hauteur; ++i) {
        matrice.push_back(createLigne(largeur, remplissage));
    }
    return matrice;
}

void printLigne(vector<char> ligne){
    for (char i : ligne) {
        cout << " " << i << " ";
    }
    cout << endl;
}

void printMatrice(vector<vector<char>> matrice){
    for (const vector<char> &ligne : matrice){
        printLigne(ligne);
    }
}

bool isBordure(vector<vector<char>> const& matrice, int h, int l){
    if (h == 0 or l == 0){
        return false;
    }
    if (h == matrice.size() or l == matrice[0].size()){
        return false;
    }
}

vector<char> getNextCases(vector<vector<char>> const& matrice, int h, int l){
    vector<char> rep;
    rep.push_back(matrice[h-1][l]); // haut
    rep.push_back(matrice[h+1][l]); // bas
    rep.push_back(matrice[h][l-1]); // gauche
    rep.push_back(matrice[h][l+1]); // droite
    return rep;
}

int getMatchingValueNextCaseNumber(vector<vector<char>> const& matrice, int h, int l, char value){
    int rep = 0;
    for (char myCase : getNextCases(matrice, h, l)){
        if (myCase == value){
            rep += 1;
        }
    }
    return rep;
}

int getMatchingValuesNextCaseNumber(vector<vector<char>> const& matrice, int h, int l, vector<char> const& values){
    // todo: s'assurer que values ne contient pas de doublons
    int rep =0;
    for (char value : values){
        rep += getMatchingValueNextCaseNumber(matrice, h, l, value);
    }
    return rep;
}