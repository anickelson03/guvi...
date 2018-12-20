#include <stdio.h>
#include<conio.h>
int main()
{
int n, i, sum = 0;
clrscr();
printf("Enter a natural num: ");
scanf("%d",&n);
for(i=1; i <= n; ++i)
{
sum += i;  
}
printf("Sum = %d",sum);
return 0;
}
