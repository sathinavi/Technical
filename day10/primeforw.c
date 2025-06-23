#include <stdio.h>

int main() {
    int n,rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int val=n;
    while(val>0) {
        rev = rev*10+val%10;
        val/= 10;
    }

        while(rev>0) {
        int digit=rev%10;
        int Prime=1;

        if(digit<=1) {
            Prime=0;
        } else 
        {
            for (int i=2;i<digit;i++) {
                if (digit%i==0) {
                    Prime=0;
                    break;
                }
            }
        }

        if(Prime) {
            printf("Prime Digits: %d ",digit);
        }
        rev/= 10;
    }

    return 0;
}
