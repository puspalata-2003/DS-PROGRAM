#include<stdio.h>
int main()
{
    int i, n,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        printf("%d is a prime number\n",n);
        else
        printf("%d is not a prime number\n",n);

        return 0;
    }