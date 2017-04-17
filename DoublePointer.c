//
//  DoublePointer.c
//  
//
//  Created by Varun on 17/04/17.
//
//

#include <stdio.h>

struct Stu {
    
    int rno;
    
    float marks;
};


void setData(struct Stu **stu1)
{
    (*stu1)->rno = 1;
    (*stu1)->marks = 99.99;
    
    return;
}

void display(struct Stu stu) {
    
    printf("Roll no: %d\n", stu.rno);
    printf("Marks: %f\n", stu.marks);
    
    return;
}

int main () {
    
    struct Stu mainStu;
    struct Stu *pointer = &mainStu;
    struct Stu **dPointer = &pointer;
    
    setData(dPointer);
    
    display(mainStu);
    
    return 0;

}
