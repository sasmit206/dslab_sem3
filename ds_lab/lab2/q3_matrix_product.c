/*
Implement a C program to read, display, and find the product of two matrices using
functions with appropriate parameters.
• The matrices must be created using dynamic memory allocation (malloc or
calloc).
• Access matrix elements using array dereferencing (i.e., *(*(mat + i) + j)
style)
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    printf("enter no of rows and columns fors 1st matrix : \n ");
    scanf("%d",&m);
    scanf("%d",&n);
    int* arr= (int*)(malloc(m*n*sizeof(int)));
    
}