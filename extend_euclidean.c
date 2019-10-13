/*
 * @Author: Michael dos Santos
*/

#include<stdio.h>
#include<stdlib.h>

typedef long long int NUMBER;

/*
 * Calculate modular inverse of gdc(a, b)
 * 
 * @params a - First number
 * @params b - Second number
 * @returns Greatest modular inverse of a mod b
*/
NUMBER extended_euclidean(NUMBER a, NUMBER b) {
    NUMBER remainder1, remainder2, s, t, s1, s2, t1, t2, quotient, aux;
    int i;

    remainder1 = a;
    remainder2 = b;
    s1 = 1;
    s2 = 0;
    t1 = 0;
    t2 = 1;
    i = 0;

    do {
        quotient = remainder1 / remainder2;
        aux = remainder1 % remainder2;
        remainder1 = remainder2;
        remainder2 = aux;
        
        s = s1 - quotient * s2;
        s1 = s2;
        s2 = s;
        t = t1 - quotient * t2;
        t1 = t2;
        t2 = t;

    } while(remainder2 != 0);
    
    return t1;
}

int main()
{
    NUMBER number1, number2;

    scanf("%lld", &number1);
    scanf("%lld", &number2);

    printf("%lld\n", extended_euclidean(number1, number2));

    return 0;
}
