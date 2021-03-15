#include <stdio.h>
int main()
{
    long long w,h,sum=0,i,j,max,f,s;
    scanf("%lld %lld",&w,&h);
    long long ground[h][w];
    for(i=0;i<h;i++)
    {
        for(j=0;i<w;j++)
        {
            scanf("%lld",&ground[i][j]);
        }
    }
    max = ground[0][0];
    for(i=0;i<h;i++)
    {
        for(j=0;i<w;j++)
        {
            sum += ground[i][j];
        }
    }
    f = sum;
    s = sum;
    while(1)
    {
        if(f%(w*h)==0)
        {
            break;
        }
        else
        {
            sum++;
            f = sum;
        }
    }
    printf("%lld",f-s);
}