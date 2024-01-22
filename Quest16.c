#include<stdio.h>
#include<conio.h>
int sum(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int div(int x, int y);
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
sum(a,b);
sub(a,b);
mult(a,b);
div(a,b);
return 0;
}
int sum(int x,int y)
{
printf("sum=%d\n",x+y);
}
int sub(int x,int y)
{
printf("difference=%d\n",x-y);
}
int mult(int x,int y)
{
printf("product=%d\n",x*y);
}
int div(int x,int y)
{
printf("quotient=%f\n",(float)x/y);
}