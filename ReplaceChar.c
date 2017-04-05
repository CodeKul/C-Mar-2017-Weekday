//
//  ReplaceChar.c
//  
//
//  Created by Varun on 29/03/17.
//
//

#include <stdio.h>

/*
 
 1) Write a program to replace <space> char in string with underscore <_>
 
 eg: 
    input : Codekul is the best software training institute
    output : Codekul_is_the_best_software_training_institute
 */


int main() {
    
    char str[40];
    
    int i = 0;
    
    printf("Enter string: ");
    gets(str);
    
    while (str[i] != 0) {
        
        if (str[i] == ' ') {
            
            str[i] = '_';
        }
        i++;
    }
    
    printf("After replacing: ");
    puts(str);
    
    return 0;
}
