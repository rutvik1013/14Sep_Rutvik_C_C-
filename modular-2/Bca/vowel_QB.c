// write a program to find entered word is vowel or not.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single Word:\n ");
    scanf(" %c", &ch);  

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
        printf( "'%c' is a Vowel\n", ch);
    } else {
        printf("'%c' is not a Vowel\n", ch);
    }

    return 0;
}

