//
//  StructStudent.c
//  
//
//  Created by Varun on 07/04/17.
//
//

#include <stdio.h>
#include <stdlib.h>

struct Student {
    
    int rno;
    char *name;  //[][][][][][][][][][][][][][][][][][][][]
    float marks;
};

void input(struct Student *stu) {
    
    stu->name = malloc(20);
    
    printf("Enter name: ");
    gets(stu->name);
    
    printf("Enter rno: ");
    scanf("%d",&(stu->rno));
    
    printf("Enter marks: ");
    scanf("%f",&(stu->marks));
    
    return;
}

void display(struct Student stu) {
    
    printf("********************\n");
    printf("name: ");
    puts(stu.name);
    printf("rno: %d\n",stu.rno);
    printf("marks: %f\n",stu.marks);
    printf("********************\n");

    return;
}

int main() {
    
    struct Student stu1;
    
    input(&stu1);
    
    display(stu1);
    
    return 0;
}




