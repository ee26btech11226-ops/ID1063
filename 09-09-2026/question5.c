//code by saksham sawant
//date :- 09-09-2026
#include <stdio.h>
#include <string.h>//to use strlen

int main() {
    char str[100];

    // Read the string input
    printf("Input : ");
    scanf("%s", str);

    int len = strlen(str); //finding the length of string

    int isPalindrome = 1; // 1 for true, 0 for false
           
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // Found a mismatch
            break;            // Exiting loop
        }
    }

    // Output the result
    if (isPalindrome == 1) {
        printf("Output : Palindrome\n");
    } else {
        printf("Output : Not a Palindrome\n");
    }

    return 0;
}

