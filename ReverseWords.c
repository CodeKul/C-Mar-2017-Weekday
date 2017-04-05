//
//  ReverseWords.c
//  
//
//  Created by Varun on 03/04/17.
//
//

#include <stdio.h>

int main() {
    
    char str[20], temp;
    int i = 0, j = 0, k = 0, w_start = 0, length = 0;
    
    printf("Enter String: ");
    gets(str);
    
    while (str[length] != 0) {
        length++;
    }

    for (i = 0, j = length - 1; i < j ; i++,j--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
 
    while (1) {
        
        if (str[k] == 32 || str[k] == 0) {
            
            for (i = w_start, j = k - 1; i < j; i++,j--) {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
            if (str[k] == 0) {
                break;
            }
            w_start = k + 1;
        }
        k++;
    }

    printf("Rversed words: ");
    puts(str);
    
    return 0;
}
