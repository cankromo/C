#include <stdio.h>
/**/
int main() {
    int num1, num2;
    int sum, diff, product, remainder;
    float quotient;
    /*
    * Input two numbers from user
    */
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient =(float)num1 / num2;
    remainder = num1 % num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Quotient = %f\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

