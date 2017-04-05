//
//  ComplexNumbers.c
//  
//
//  Created by Varun on 05/04/17.
//
//

#include <stdio.h>

// (12 + 13i)

struct Complex {
    
    int real;
    int imaginary;
    
};

void display(struct Complex comp) {
    
    printf("(%d + %di)\n",comp.real, comp.imaginary);
    
    return;
}

void add(struct Complex com1, struct Complex com2) {
    
    struct Complex comRes;
    
    comRes.real = com1.real + com2.real;
    comRes.imaginary = com1.imaginary + com2.imaginary;
    
    display(comRes);
}

int main() {
    
    struct Complex comp1;
    struct Complex comp2;
    
    printf("Enter real: ");
    scanf("%d",&comp1.real);

    printf("Enter imaginary: ");
    scanf("%d",&comp1.imaginary);

    printf("Enter real: ");
    scanf("%d",&comp2.real);

    printf("Enter imaginary: ");
    scanf("%d",&comp2.imaginary);

    printf("comp1: ");
    display(comp1);
    
    printf("comp2: ");
    display(comp2);
    
    add(comp1, comp2);
    
    return 0;
}

