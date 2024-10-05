#include <stdio.h>
int main()
{
    int n;
    printf("Enter the element : ");
    scanf("%d", &n);

    if (n == 1 || n <= 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        for (int i = 2; i <= (n - 1); i++)
        {
            if (n % i == 0)
            {
                printf("%d is non prime number \n", n);
                break;
            }
            else
            {
                printf("%d is a prime number\n", n);
                break;
            }
        }
    }
    return 0;
}