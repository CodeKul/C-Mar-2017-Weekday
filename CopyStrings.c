//
//  CopyStrings.c
//  
//
//  Created by Varun on 29/03/17.
//
//

#include <stdio.h>

int main() {
    
    char str1[20];
    char str2[20];
    int i = 0;
    
    printf("Enter String: ");
    gets(str1);
    
    while (str1[i] != '\0') {
        
        str2[i] = str1[i];
        
        i++;
    }
    
    printf("String after: ");
    puts(str2);
    
    return 0;
}
