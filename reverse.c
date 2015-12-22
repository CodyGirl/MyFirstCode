#include<stdio.h>
void main()
{
    int a,n1,n2,n3;
    printf("Enter your three digit number\n");
    scanf("%d",&a);
    n1=a%10;
    n2=(a/10)%10;
    n3=(a/100)%10;
    printf("Reverse of the number is:%d%d%d\n",n1,n2,n3);
}


// This is correction from Shubham 
// There is no addition to code, only comments'