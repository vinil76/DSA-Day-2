#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("*\n");
        i++;
    }
    return 0;
}