#include <iostream>
#include "functions.cpp"

int main() {

    srand(unsigned(time(NULL)));

    int *t;
    create(t,10,1,10);
    cout<<"початковий : "<<endl;
    print(t , 10);

    cout << "\nsum : ";
    cout << findSum(t,10);


    delete []t;
    return 0;

}