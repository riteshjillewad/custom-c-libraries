// <--- mydigitlib.h --->

#ifndef MYDIGITLIB_H
#define MYDIGITLIB_H

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>

void displayDigits(int num);
int sumDigits(int num);
int countDigits(int num);
int countEvenDigits(int num);
int countOddDigits(int num);
int productDigits(int num);
int reverseNumber(int num);
bool isPalindrome(int num);
int digitFrequency(int num);
void findDigit(int num, int target);
void displayPrimeDigits(int num);
bool checkHarshad(int num);
bool checkStrong(int num);
int power(int base, int exponent);
bool checkArmstrong(int num);
bool checkAutomorphic(int num);
int getSmallestDigit(int num);
int getLargestDigit(int num);
bool digitAnagrams(int num1, int num2);

#endif
