#include <stdio.h>
int main ()
{
	int n,i,x[1000]={1,2,3,4,5,6,8,9,10},y=12;
    scanf("%d",&n);
    for(i=9;i<1000;y++)
    {
        if(y/10==0)
        {
            if(y%2==0)
            {
                x[i]=y;
                i++; 
            }
            else if(y%3==0)
            {
                x[i]=y;
                i++;
            }
            else if(y%5==0)
            {
                x[i]=y;
                i++;
            }
        }
        else
        {
            if(y%2==0&&y%3==0)
            {
                x[i]=y;
                i++;
            }
            else if(y%2==0&&y%5==0)
            {
                x[i]=y;
                i++;
            }
            else if(y%3==0&&y%5==0)
            {
                x[i]=y;
                i++;
            }
            else if(y%3==0&&y%5==0&&y%2==0)
            {
                x[i]=y;
                i++;
            }
        }
    }
    for(i=0;i<1000;i++)
    {
        if(n==i+1)
        {
            printf("%d",x[i]);
        }
    }
    return 0;
}
