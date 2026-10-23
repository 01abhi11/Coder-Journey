#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    switch (ch) {
        // Vowels (both lowercase and uppercase)
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("'%c' is a Vowel.\n", ch);
            break;

        // Digits 0-9
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("'%c' is a Digit.\n", ch);
            break;

        // Everything else: distinguish consonants from special characters
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("'%c' is a Consonant.\n", ch);
            } else {
                printf("'%c' is a Special Character.\n", ch);
            }
            break;
    }

    return 0;
}
