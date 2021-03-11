#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    char x[n][((n-1)/2)*2+1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<((n-1)/2)*2+1;j++)
        {
            x[i][j]= '_';
        }
    }
    for (i=0;i<(n+1)/2;i++)
    {
        x[i][(n-1)/2+i]= '*';
        x[i][(n-1)/2-i]= '*';
        x[n-1-i][(n-1)/2+i]= '*';
        x[n-1-i][(n-1)/2-i]= '*';
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<((n-1)/2)*2+1;j++)
        {
            printf("%c",x[i][j]);
    	}
        printf("\n");
    }
}

