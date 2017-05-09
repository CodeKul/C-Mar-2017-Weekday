//
//  ConstructorDestructorDemo.cpp
//  
//
//  Created by Varun on 08/05/17.
//
//

#include <iostream>

using namespace std;

class MyClass {
    
public:
    MyClass();          // Default Constructor declaration
    MyClass(int);       // Paramerterized Constructor declaration
    MyClass(MyClass &);   // Copy Constructor declaration
    ~MyClass();         // Destructor: declaration
    
    void display();
    void setData(int);
    
private:
    int myVar;
    
};

MyClass :: MyClass() {
    cout << "Default constructor" << endl;
    myVar = 0;
}

MyClass :: MyClass(int myVar) {
    cout << "Parameterized constructor" << endl;
    this->myVar = myVar;
}

MyClass :: MyClass(MyClass &m) {
    cout << "Copy constructor" << endl;
    this->myVar = m.myVar;
}

MyClass :: ~MyClass() {
    cout << "Destructor" << myVar << endl;
}

void MyClass :: display() {
    cout << "Value of myVar: "<< myVar << endl;
}

void MyClass :: setData(int myVar) {
    
    this->myVar = myVar;
}

int main( ) {
    
    MyClass m1;
    m1.display();
    
    MyClass m2(15);
    m2.display();
    
    MyClass m3 = m2;
    m3.setData(10);
    m3.display();
    
    return 0;
}
