/* C Programming Assignment - Question 01 */
#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    // A remainder of zero means the number is even.
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    return 0;
}
