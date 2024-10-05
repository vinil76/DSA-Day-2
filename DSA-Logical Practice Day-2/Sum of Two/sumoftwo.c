#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    printf("Enter the first element :");
    scanf("%d", &a);
    printf("Enter the second element :");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of two numbers is %d", sum);
    return 0;
}