#include<stdio.h>
#include<math.h>

int power(int, int);

int main(void)
{
    int x, n;
    printf("Enter a number and power you wish to raise it to: ");
    scanf("%d %d", &x, &n);
    printf("Result: %d\n", power(x, n));
    return 0;
}

int power(int x, int n)
{
    int m;
    if (n == 0) return 1;
    if (n % 2 == 0)
    {
        m = power(x, n / 2);
        return m * m;
    }
    else return x * power(x, n - 1);
}
