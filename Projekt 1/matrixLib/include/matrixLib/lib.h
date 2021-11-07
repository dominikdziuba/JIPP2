#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

#pragma once
#include <iostream>
#include <cmath>
using namespace std;

void addMatrix(int** a, int** b, int r, int c);
void subtractMatrix(int** a, int** b, int r, int c);
void multiplyMatrix(int** a, int** b, int r, int c, int r2);
void multiplyByScalar(int** a, int r, int c, int scalar);
void transpozeMatrix(int** a, int r, int c);
void powerMatrix(int** a, int r, int c, unsigned int power);
int determinantMatrix(int** a, int r, int c);
bool matrixIsDiagonal(int** a, int r, int c);
void swap(int* a, int* b);
void sortRow(int* a, int n);
void sortRowsInMatrix(int** a, int r, int c);
void addMatrix(double** a, double** b, int r, int c);
void subtractMatrix(double** a, double** b, int r, int c);
void multiplyMatrix(double** a, double** b, int r, int c, int r2);
void multiplyByScalar(double** a, int r, int c, int scalar);
void transpozeMatrix(double** a, int r, int c);
void powerMatrix(double** a, int r, int c, unsigned int power);
double determinantMatrix(double** a, int r, int c);
bool matrixIsDiagonal(double** a, int r, int c);
void swap(double* a, int* b);
void sortRow(double* a, int n);
void sortRowsInMatrix(double** a, int r, int c);

void ShowDocs();

#endif //JIPP2_LIB_H
