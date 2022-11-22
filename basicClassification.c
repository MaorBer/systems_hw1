#include <math.h>
#include "NumClass.h"

int isStrong(int num1) {
    int sum = 0, curr , num = num1;
    while (num > 0) {
        curr = num % 10;
        sum += factorial(curr);
        num /= 10;
    }
    if (num1 == sum) {
        return 1;
    } else {
        return 0;
    }
}

int factorial(int num) { return (num == 1 || num == 0) ? 1 : num * factorial(num - 1); }

int isPrime(int num) {
    if ((num <= 1) || (num % 2 == 0 && num > 2)) {
        return 0;
    }
    for (int i = 3; i < num / 2; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}