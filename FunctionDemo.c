//
//  FunctionDemo.c
//  
//
//  Created by Varun on 04/04/17.
//
//

/*
 
 1) Write a program to demonstrate calculator with menu
 
 
 
 Menu:
 1) Addition
 2) Sunstraction
 3) Multiplication
 4) Division
 5) Enter values
 0) Exit
 
 Option:
 
 addition(int,int)
 substraction(int,int)
 multiplication(int,int)
 division(int,int)
 display(int)
 
 
 */

#include <stdio.h>

int main() {
    
    int addition(int, int);        //Declaration
    int a = 0, b = 0;
    int add = 0;

    printf("Enter values: ");
    scanf("%d",&a);
    scanf("%d",&b);

    add = addition(a, b);             //Call
    
    printf("Result: %d\n",add);
    
    return 0;
}

// Defination
int addition(int x, int y) {
    
    int res = 0;

    res = x + y;
    
    return res;
}
