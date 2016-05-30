#include <stdio.h>


int main()
{
    char symbol,
         str[24];

    int  number1 = 0,
         number2 = 0;

    printf("Entering a symbol: ");
    scanf("%c", &symbol);
    printf("Your symbol: %c\n", symbol);

    printf("\n------------------\n");

    printf("Entering a string: ");
    scanf("%s", &str);
    printf("Your string: %s", str);

    printf("\n------------------\n");

    printf("Entering a positiv number: ");
    scanf("%d", &number1);
    printf("Entering a negotiv number: ");
    scanf("%d", &number2);

    printf("Your numbers is decimal: %d, %d\n"
           "is hex: #%x, #%x", number1, number2, number1, number2);

    return 0;
}
