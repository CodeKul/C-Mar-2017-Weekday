//
//  ComplexNumber.cpp
//  
//
//  Created by Varun on 04/05/17.
//
//

#include <iostream>
using namespace std;

class ComplexNumber {

public:
    int real;
    int imag;
    
};

void display(ComplexNumber c) {
    
    cout << c.real <<"+" << c.imag <<"i"<<endl;
    
}

int main() {
    
    ComplexNumber c1;
    
    ComplexNumber c2;
    
    c1.real = 10;
    c1.imag = 20;
    
    c2.real = 5;
    c2.imag = 8;
    
    display(c1);
    
    return 0;
}








