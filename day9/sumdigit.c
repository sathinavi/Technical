#include <stdio.h>

int main()
{
    int val=234,sum=0;
    while(val>0){
        sum=sum+val%10;
        val/=10;
    }
    printf("%d",sum);

    return 0;
}
