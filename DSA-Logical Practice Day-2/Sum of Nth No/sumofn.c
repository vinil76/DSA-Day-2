#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d : %d", num, sum);
    return 0;
}