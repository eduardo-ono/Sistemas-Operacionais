
int strLen(char str[])
{
    int cont = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        cont++;
        if (str[i] < 0)
            i++;
    }

    return cont;
}

//---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", strLen("")); // 0
    printf("%d\n", strLen("caju")); // 4
    printf("%d\n", strLen("maçã")); // 4
    printf("%d\n", strLen("micro-ondas")); // 11
    printf("%d\n", strLen("banana terra")); // 12
    printf("%d\n", strLen("marca d'água")); // 12
    printf("%d\n", strLen("Ainda que eu falasse a língua dos homens")); // 40

    return 0;
}
