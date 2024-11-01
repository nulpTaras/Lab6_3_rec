//
// Created by Taras Neridnyi on 31.10.2024.

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void create(int* &a, const int size , const int Low , const int High , int i=0) {

    if(i == 0) {
        a = new int[size];
    }

    a[i] = Low + rand() % (High-Low+1);
    if (i < size-1) {
        create(a, size, Low , High, i+1);
    }else
        return ;
}

void print(int* &a, const int size , int i=0) {
    cout << setw(4) << a[i] << " ";
    if (i < size-1) {
        print(a, size, i+1);
    }else
        cout << endl;
}

int findSum(int* a, const int size, int sum = 0, int i = 0)
{
    if (i >= size) return sum;
    return findSum(a, size, sum + pow(a[i], 2), i + 1);
}





