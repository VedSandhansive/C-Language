#include <stdio.h>
int main()
{

    int i = 0;
    int num;
    int j = 0;
    int sign;
    printf("If you want to ignore loop then click 0 otherwise click any number\n");
    scanf("%d\n", &num);

    if (num == 0)
    {
        goto end;
    }

    while (j < 7)
    {
        printf("%d\n", j);

        j++;

        do
        {

            i++;

            printf("%d\n", i++);

            for (sign = 12; sign > 0; sign--)
            {

                printf("%d\n", sign);
            }
        } while (i < 10);
    }
end:
    printf("you are outside the loops\n");
    return 0;
}