//
//  ArrayDemo.c
//  
//
//  Created by Varun on 27/03/17.
//
//

#include <stdio.h>
/*
int main() {
    
    int arr[9];
    int i = 0;
    
    printf("Enter 8 elements: ");
    
    for (i = 0; i < 9; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Displaying Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}


int main() {
    
    int arr[2];
    int j=0;
    char nm
    printf("Enter roll no.: ");
       printf("enter name.: ");
    printf("enter marks.: ");
    
    for (j = 0; j < 2; j++) {
        
        scanf("%d",&arr[j]);}
    printf("Display roll no.: ");
   // gets(nm);
    
//    printf("Name: %s\n",nm);
       // puts(nm);}
    
    return 0;
}
*/

int main() {

    char arrCh[20];
    int i = 0;
    printf("Enter string: ");
    gets(arrCh);
    
    printf("String is: ");

    for (i = 0; arrCh[i] != '\0'; i++) {
        
        if (arrCh[i] == 'c') {
            continue;
        }
        printf("%c\n",arrCh[i]);
    }
    
    return 0;
}





























