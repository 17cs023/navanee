#include <stdio.h>
int main()
{
    double number;

    printf("input: ");
    scanf("%lf", &input);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("zero");
        else
            printf(" negative ");
    }
    else
        printf(" positive");
    return 0;
}
