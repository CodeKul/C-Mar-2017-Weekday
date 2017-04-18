//
//  HeaderFilesDemo.c
//  
//
//  Created by Varun on 18/04/17.
//
//

#include "HeaderFilesDemo.h"

#define MAX 10

#define ARR_SIZE 10   //MACRO


int main() {
    
    int i = 0;
    display();
    
    int arr[ARR_SIZE];
    
    for (i = 0; i < ARR_SIZE; i++) {
        
        arr[i] = i + 1;
    }
    
    for (i = 0; i < ARR_SIZE; i++) {
        printf("Arr[%d]: %d\n",i,arr[i]);
    }
    
    return 0;
}

