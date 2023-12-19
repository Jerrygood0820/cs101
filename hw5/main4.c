#include <stdio.h>

int main()
{
    int n=12345;
    {
    n=n-2*1000+5*1000-5+2;
    printf("%d\n",n);
    }
    n=12345;
    n=n/100;
    printf("%d\n",n);
    n=(n-1*100+3*100-2*10+1*10-3+2)*10;
    printf("%d\n",n);
    n=(n-3*1000)/10;
    n=n-2+2*1000;
    printf("%d\n",n);
    n=(n-10)/2;
    printf("%d",n);
}
