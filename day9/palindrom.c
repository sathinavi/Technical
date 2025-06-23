// #include <stdio.h>

// int Palindrom(int n){
//     int rev = 0, original = n;
//     while (n > 0) {
//         rev = rev * 10 + (n % 10);
//         n= n/ 10;
//     }
//     return rev == original;
// }

// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     Palindrom();

//     return 0;
// }
#include <stdio.h>

int palindrome(int num) {
    int original = num;
    int rev = 0, digit;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev) return 1;
    else return 0;
}

int NPalindrome(int n) {
    int low = n - 1;
    int high = n + 1;

    while (1) {
        low--;
        if (palindrome(low)) {
            return low;
        }
        high++;
        if (palindrome(high)) {
            return high;
        }
        // low--;
        // high++;
    }
}
int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n)) {
        printf("The number itself is a palindrome: %d\n", n);
    } else {
        result = NPalindrome(n);
        printf("Nearest palindrome is: %d\n", result);
    }

    return 0;
}
