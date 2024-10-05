#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' || ch >= 'z')
    {
        printf("%c is lowercase letter.", ch);
    }
    else if (ch >= 'A' || ch >= 'Z')
    {
        printf("%c is Uppercase letter.", ch);
    }
    else
    {
        printf("%d is not a letter.");
    }

    // if (ch >= 65 && ch <= 90)
    // {
    //     printf("Character is Uppercase letter.");
    // }
    // else if (ch >= 97 && ch <= 122)
    // {
    //     printf("Character is lowercase letter.");
    // }
    // else
    // {
    //     printf("Not a Number");
    // }
    return 0;
}