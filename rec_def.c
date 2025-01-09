#include <stdio.h>

int f(int x)
{
    if (x <= 0)
    {
        return 0;
    }
    else
    {
        return f(x - 1) + 2;
    }
}

int main()
{
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("f(%d) = %d\n", x, f(x));

    return 0;
}