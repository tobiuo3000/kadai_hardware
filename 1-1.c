#define NULL 0
#include<stdio.h>

int main()void{
    struct NODE{
        struct NODE *next;
        int val;
    };
    struct NODE* root;
    struct NODE node1;
    struct NODE node1;

    root = &node1;
    node1.next = &node2;
    node1.val =  100;
    node2.next = NULL;
    node2.val =  200;
    
    printf("size of int =%d size of pointer =%d\n",
        sizeof(int), sizeof(struct NODE*));

}