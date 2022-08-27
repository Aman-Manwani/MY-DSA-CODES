#include<stdio.h>
int main ()
{
    int i,num,j,tin;
    printf("enter the number for which you want to get prime factor=");
    scanf("%d",&num);
    printf("prime factors of %d=\n",num);
    for(i=2;i<=num;i=i++)
    {
        if(num%i==0)
        {
            tin=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    tin=0;
                    break;
                }
            }
            if(tin==1)
            {
                printf("%d,",i);
            }
        }
    }
return 0;
}
