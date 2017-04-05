//
//  ConcatenateStrings.c
//  
//
//  Created by Varun on 29/03/17.
//
//

#include <stdio.h>

int main() {
    
    char str1[20];
    char str2[20];
    char strRes[40];
    
    // abc
    
    // def
    
    // abcdef
    /*
     
     i 0 1 2 3 4 5 6
     
     j 0 1 2 3
     */
    
    
    int i = 0, j = 0;
    
    printf("Enter string1");
    gets(str1);
    
    printf("Enter string2");
    gets(str2);
    
    while (str1[i] != 0) {
        
        strRes[i] = str1[i];
        i++;
    }
    
    while (str2[j] != 0) {
        
        strRes[i] = str2[j];
        i++;
        j++;
    }
    
    strRes[i] = str2[j];
    
    printf("After: ");
    puts(strRes);
    
    return 0;
}









