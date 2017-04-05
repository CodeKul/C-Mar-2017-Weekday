//
//  UnionDemo.c
//  
//
//  Created by Varun on 05/04/17.
//
//

#include <stdio.h>

union Student {
    
    char name[13];
    
    int rno;
    
    float marks;
};

int main() {
    
    union Student stu;
    
    stu.rno = 10;
    
    printf("RNO : %d\n", stu.rno);

    stu.marks = 10.45;

    gets(stu.name);
    
    printf("Marks: %f\n",stu.marks);

    printf("Name: %s\n",stu.name);

    printf("%ld\n",sizeof(stu));
    
    return 0;
}
