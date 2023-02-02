#include<stdio.h>
int main()
{
int i,n;
printf("print all odd numbers till:");
scanf("%d",&n);
printf("odd numbers for 1 to %d are:\n", n);
for (i=0; i<=n; i++)
{
if(i%2 == 1)
{
printf("%d\n", i);
}
}
return 0;
}
