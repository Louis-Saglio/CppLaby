//
// Created by louis on 20/09/17.
//

#ifndef APPRENDRE_CPP_MODULE_H
#define APPRENDRE_CPP_MODULE_H

#include <iostream>
#include <vector>

//std::vector<char> createLigne(int size, char remplissage);
std::vector<std::vector<char>> createMatrice(int hauteur, int largeur, char remplissage);
//void printLigne(std::vector<char> ligne);
void printMatrice(std::vector<std::vector<char>> matrice);
int getMatchingValuesNextCaseNumber(std::vector<std::vector<char>> const& matrice, int h, int l, std::vector<char> const& values);

#endif //APPRENDRE_CPP_MODULE_H
