/*
 * @Author: Michael dos Santos
*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long int NUMBER;

/*
 * Calculate greatest divisor common of two numbers
 * 
 * @params a - First number
 * @params b - Second number
 * @returns Greatest divisor common of a and b
*/
NUMBER extended_euclidean(NUMBER a, NUMBER b) {
    NUMBER remainder1, remainder2, quotient, aux;

    remainder1 = a;
    remainder2 = b;

    do {
        quotient = remainder1 / remainder2;
        aux = remainder1 % remainder2;
        remainder1 = remainder2;
        remainder2 = aux;

        if (remainder2 == 0) return quotient;
    } while(remainder2 != 0);
    
    return 0;
}

int main()
{
    NUMBER number1, number2;

    scanf("%llu", &number1, &number2);

    printf("%llu\n", extended_euclidean(42, 38));

    return 0;
}
