#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=7;i++){
        printf("%*d ",9-i,i);
        for(int j=2;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}


  
