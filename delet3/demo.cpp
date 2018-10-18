#include <stdio.h>
int main()
{
    int a,b,min;
    int gys;

    scanf("%d%d",&a,&b );

    if(a<b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for(int i = 1;i<min;i++)
        if(a%i==0)
        {
            if(b%i==0)
                gys = i;
        }
    printf("%d\n",gys);
    return 0;
}
