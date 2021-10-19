#pragma once

#ifndef MY_HEADER_H
#define MY_HEADER_H

int add(int a, int b); //dodawanie
int substract(int a, int b); //odejmowanie
double volume(int a, int b, int h, int H); //objętość
void help(); //dokumentacja
void error_argc();
void error_negative();
void error_lack_of_option();

#endif
