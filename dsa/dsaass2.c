#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int arr[x][y];
    for (i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    int que;
    int ans=0;
    scanf("%d",&que);
    for(i=0;i<y;i++)
    {
        ans+=arr[que][i];

    }
    printf("%d\n",ans);
    return 0;
}