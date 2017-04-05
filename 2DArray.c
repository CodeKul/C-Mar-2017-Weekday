//
//  2DArray.c
//  
//
//  Created by Varun on 03/04/17.
//
//

#include <stdio.h>

int main() {
    
    int arr[5][3];
    int i = 0, j = 0;

    printf("Enter Matrix:\n");
    
    for (i = 0; i < 5; i++) {
        
        for (j = 0; j < 3; j++) {
            
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Matrix:\n");
    
    for (i = 0; i < 5; i++) {
        
        for (j = 0; j < 3; j++) {
            
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
