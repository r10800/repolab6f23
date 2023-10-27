/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
         for (int i = 0; input[i] != '0'; i++)
        {
            char c =input[i];
            if ((c >='A' && c <='Z') || (c >= 'a' && c <= 'z'))
            {
                if (c>='a'&&c<= 'z')
                {
                    c -= 32;
                }
                letterCount[c - 'A']++;
            }
        }
    }
    printf("distribution of letters:\n");
    for (int i = 0; i < 26; i++)
    {
        char letter = 'A' + i;
        printf("%c: %d ", letter, letterCount[i]);
    }
    printf("\n");
    return 0;
}