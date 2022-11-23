#include <math.h>
#include "NumClass.h"


int isArmstrong(int num1) {
    int sum = 0, num = num1, Digits = numOfDigits(num1),curr;
    while (num > 0) {
        curr =num %10;
        sum += (int) pow(curr, Digits);
        num /= 10;
    }
    if (num1 == sum) {
        return 1;
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
    int num1 = num, reverse = 0;
    while (num1 > 0) {
        reverse = (reverse * 10) + (num1 % 10);
        num1 /= 10;
    }
    if (num == reverse) {
        return 1;
    } else {
        return 0;
    }
}