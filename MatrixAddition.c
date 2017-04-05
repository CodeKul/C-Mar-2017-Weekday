
//
//  MatrixAddition.c
//  
//
//  Created by Varun on 03/04/17.
//
//

#include <stdio.h>

int main() {
    
    int arr1[3][3], arr2[3][3], res[3][3];
    int i = 0, j = 0;
    
    printf("Enter Matrix1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Matrix2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n+\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n=\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
