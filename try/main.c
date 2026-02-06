#include <stdio.h>
#include <stdlib.h>
#if 0
int main()
{
    printf("Hello world!\n");
    return 0;
}

#endif // 1
#if 1
#include <stdio.h>

int main() {
    char ch;        // Correct: For a single character.
    char s[50];     // Correct: For a word, declare a character array. Size 50 is a safe assumption.
    char sen[100];  // Correct: For a sentence, declare a character array. Size 100 is a safe assumption.

    // 1. Read and print a single character
    // The `scanf(" %c", ...)` with a leading space is important to consume any leftover
    // newline characters from previous input operations.
    scanf(" %c", &ch);
    printf("%c\n", ch);

    // 2. Read and print a single word
    // Add a leading space to consume any newline character left in the input buffer.
    // The `&` is not needed when using `%s` with an array name.
    scanf(" %s", s);
    printf("%s\n", s);

    // 3. Read and print a sentence
    // The `scanf("%[^\n]%*c", ...)` reads all characters until a newline is found
    // and then discards the newline character, leaving a clean buffer for the next input.
    // No leading space is needed here.
    scanf(" %[^\n]%*c", sen);
    printf("%s\n", sen);

    return 0;
}


#endif // 1
