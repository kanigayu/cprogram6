#include<stdio.h>
int main()
{
int n;
printf("Enter the year");
scanf("d",&n);
if(n%4==0)
{
printf("This is leap year");
}
else
{
printf("no leap year");
}
return 0;
}
