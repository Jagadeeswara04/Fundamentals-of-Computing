#include<stdio.h>
#include<math.h>

int main()
{
    long int octal,deci=0;
    int i=0;
    
    printf("enter an octal number; ");
    scanf("%d",&octal);
    while(octal !=0)
    {
        deci+=(octal % 10)*pow(8,i++);
        octal/=10;
    }
    printf("the decimal value is: %1d",deci);
    return 0;
 }
