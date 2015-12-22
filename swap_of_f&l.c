#include<stdio.h>
void main()
{
    int a,n1,n2,n3,swap;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    n1=a%10;
    n2=(a/100)%10;
    n3=(a/10)%10;
    swap=n1;
    n1=n2;
    n2=swap;
    printf("Required number is:%d%d%d\n",n2,n3,n1);
}
