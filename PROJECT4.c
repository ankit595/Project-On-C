#include <stdio.h> 
#include "Header.h" 
int main() 
{ 
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    multiply(a,b);
    divide(a,b);
    modulus(a,b);
    printf("THANK YOU!!!"); 
    return 0; 
} 
