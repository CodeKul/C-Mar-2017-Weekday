//
//  Loops.c
//  
//
//  Created by Varun on 21/03/17.
//
//

#include <stdio.h>

/*
 1) while
 
    while(condition) {
        statements;
        incr/decr;
    }
 
 2) do while
 
    do {
        statements;
        incr/decr;
 
    }while(condition);
 
 3) for
 
    for (initialisation; condition; incr/decr) {
 
        statements;
    }
 */

int main() {
    
    int i = 0, j = 0;
    
    /*
    while (i < 10) {
        
        if (i == 5) {
            printf("C C++\n");
        }
        printf("%d) CodeKul\n",i);
        
        i++;
    }
    
    do {
        printf("%d) CodeKul\n",++i);
        
    } while(i < 10);
    
    
    
    for (i = 0; i < 10; i++) {
        
        if (i % 2 == 0) {
            printf("MeLayer\n");
        }
        else {
            printf("CodeKul\n");
        }
    }
    */
    
    
    for (i = 0; i < 5; i++) {
        
        for (j = 0; j < i + 1; j++) {
            
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}



/*
 
 
 i      j
 0      0
 1      1
 2      2
 3      3
 4      4
 5      5
 
 
 
 *
 **
 ***
 ****
 *****
 
 
 
 1)
    *
    **
    ***
    ****
    *****
 
 2) *****
    ****
    ***
    **
    *
 
 3)
    *****
    *
    *
    *
    *****
 
 4)
    *****
    *
    *****
    *
    *****
 
 5)
    *****
    *
    ***
    *
    *
 
 */
























