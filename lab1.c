
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Use fgets to safely read input and handle newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline if present

    len = strlen(str);

    // Capitalize lowercase letters
    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    // Print the capitalized string
    printf("The capitalized string is: %s\n", str);

    // Reverse the string
    for (i = 0, len = strlen(str); i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Print the reversed string
    printf("The reversed string is: %s\n", str);

    return 0;
}
