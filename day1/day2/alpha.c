#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch); 
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("number");
    }
    else{
        printf("symbol");
    }
    return 0;
}
