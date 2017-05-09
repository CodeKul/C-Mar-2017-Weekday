//
//  DAMDemo.c
//  
//
//  Created by Varun on 16/09/16.
//
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,i;
    
//    arr = (int *)malloc(10 * sizeof(int));
    arr = (int *)calloc(10 , sizeof(int));

    arr = realloc(arr , 20 * sizeof(int));
    
    
    
    for (i = 0; i < 10; i++) {
        
        arr[i] = i+1;
        printf("Value: %d\n",arr[i]);
    }
    
    
    for (i = 0; i < 10; i++) {
        printf("Value: %d\n",arr[i]);
    }

    free(arr);

    return 0;
}
