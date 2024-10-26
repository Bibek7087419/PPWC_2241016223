#include<stdio.h>
int main()
{
    printf("enter a number");
    int a=scanf("%d",&a);
    int count =0;

    for(int i=1;i<a;i++)
    {
        if (a%2==0)
        {
            count++;
        }
    }
    if(a==1)
    {
        printf("neither prime nor composite");
    }
    else{
        
    }
    if(count>=0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}