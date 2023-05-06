#include <stdio.h>

void name(void)
{
    printf("name: Akbar (E30C)\n\n");
}

void func_multiply(void)
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("%d * %d = %d    \n", i,j, i*j);
        printf("\n");
    }
}

float func_return_result(float *x)
{
    return *x = *x * 4.0;
}

int func_increasing_value(int *B)
{
    return *B = *B + 10;
}

int main(void)
{
    int A = 5;
    int *B = &A;
    float x = 4;

    name();
    func_multiply();
    func_return_result(&x);
    func_increasing_value(B);

    printf("Addres of A: %p \nAddress of B: %p\n", &A, &B);
    printf("Value of A: %d\n\n", A);
    printf("Value of x: %.2f\n", x);
}