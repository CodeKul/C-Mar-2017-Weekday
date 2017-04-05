//
//  ReverseString.c
//  
//
//  Created by Varun on 29/03/17.
//
//

#include <stdio.h>


int main() {
    
    char str[20];
    int i = 0;
    int length = 0;
    int ls = 0, rs = 0;
    char temp;
    
    printf("Enter string: ");
    gets(str);
    
    printf("String before: ");
    puts(str);
    
    // abcdef
    
    // fedcba
    
    while (str[i] != '\0') {
        
        length++;
        i++;
    }
    
    rs = length - 1;
    
    while (ls < rs) {
        
        temp = str[ls];
        str[ls] = str[rs];
        str[rs] = temp;
        
        ls++;
        rs--;
    }
    
    printf("String After: ");
    puts(str);

    return 0;
}











