//
//  SwitchCaseDemo.c
//
//
//  Created by Varun on 23/03/17.
//
//

/*
 1) Write a program to convert number into words
 
 eg: no = 1234
 output = one two three four
 
 ******************** -- Homework -- ********************
 
 2) Write a program to reverse the number
 
 eg: no = 1234
 reverse = 4321
 
 3) Write a program to calculate sum of digits in number
 
 eg: no = 1234
 sum = 1+2+3+4 = 10

 4) Write a program to print fibonacci series up to 1000

 eg: 0 1 1 2 3 5 8 13 21 ..... 987
 
 */


#include <stdio.h>

int main() {
    
    int opt = 0;
    int digit = 0;
    int multiplier = 1;
    int temp = 0;
    printf("Enter number: ");
    scanf("%d",&opt);
    
    temp = opt;
    
    while (1) {
        
        temp /= 10;
        if (temp == 0) {
            break;
        }
        multiplier *= 10;
    }
    
    while (multiplier > 0) {
        
        digit = opt / multiplier;
        opt -= (digit * multiplier);
        multiplier /= 10;
        
        switch (digit) {
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            case 0:
                printf("Zero ");
                break;
                
            default:
                printf("Enter correct option\n");
                break;
        }
    }
    printf("\n");

    
    return 0;
}
