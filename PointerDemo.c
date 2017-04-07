//
//  PointerDemo.c
//  
//
//  Created by Varun on 07/04/17.
//
//

#include <stdio.h>

void input(int *x, int *y) {
    
    printf("Enter value of a: ");
    scanf("%d",x);
    
    printf("Enter value of b: ");
    scanf("%d",y);
}

int add(int x, int y) {
    
    x = 40;
    y = 50;
    
    return x + y;
}

int main() {
    
    int a = 0;
    int b = 0;
    int res;
    
    input(&a, &b);          // call by paasing reference
    
    res = add(a, b);        // call by passing values
    
    printf("a: %d\nb: %d\n",a,b);
    
    printf("Result : %d\n",res);
    
    return 0;
}
