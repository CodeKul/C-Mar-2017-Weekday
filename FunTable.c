//
//  FunTable.c
//  
//
//  Created by Varun on 19/03/17.
//
//

#include <stdio.h>

int main()
{
    int a;
    
    void table(int a);
    
    printf("Enter no:");
    scanf("%d", &a);
    
    table(a);
    
    return 0;
}

void table(int x)
{
    int z,y;
    for( y=1; y<=10; y++)
    {
        z=x*y;
        
        printf("%d\n",z);
    }
    return;
}
