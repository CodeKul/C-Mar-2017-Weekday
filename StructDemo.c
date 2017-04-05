//
//  StructDemo.c
//  
//
//  Created by Varun on 05/04/17.
//
//

#include <stdio.h>

struct Student {
    
    int rno;
    char name[20];
    float marks;
};

void display(struct Student stu) {
    
    printf("RollNo: %d\n",stu.rno);
    printf("Name: %s\n",stu.name);
    printf("Marks: %f\n",stu.marks);

    return;
}

int main() {

    struct Student stu1;
    
    printf("%ld\n",sizeof(stu1));

    printf("Enter name: ");
    gets(stu1.name);

    printf("Enter Rno: ");
    scanf("%d",&stu1.rno);
    
    printf("Enter Marks: ");
    scanf("%f",&stu1.marks);
    
    display(stu1);
    
    return 0;
}
