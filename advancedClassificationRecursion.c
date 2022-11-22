#include <math.h>
#include "NumClass.h"


int isArmstrong(int num) {
    if (num == Armstrong(num, numOfDigits(num))) {
        return 1;
    }
    return 0;
}

int Armstrong(int x, int size) {
    if (x > 0) {
        return (pow(x % 10, size) + Armstrong(x / 10, size));
    } else {
        return 0;
    }
}

int numOfDigits(int num) {
    int result = 0;
    while (num > 0) {
        num = num / 10;
        result++;
    }
    return result;
}

int isPalindrome(int num) {
    if (num == reverse(num)) {
        return 1;
    }
    return 0;
}

int reverse(int num) {
    int digit = (int) log10(num);
    if (num == 0) {
        return 0;
    }
    return ((num % 10 * pow(10, digit)) + reverse(num / 10));
}
