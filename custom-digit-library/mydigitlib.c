#include "mydigitlib.h"

// <--- Function to display the digits from the number --->
void displayDigits(int num)
{
    int digit = 0;

    printf("The digits are: \n");
    while(num != 0)
    {
        digit = num % 10;
        printf("%d\n", digit);
        num = num / 10;
    }
}

// <--- Function to find the sum of digits from number --->
int sumDigits(int num)
{
    int sum = 0;

    while(num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    return sum;
}


// <--- Function to count digits from the number --->
int countDigit(int num)
{
    int count = 0;

    while(num != 0)
    {
        count++;
        num = num / 10;
    }

    return count;
}


// <--- Function to count even digits --->
int countEvenDigits(int num)
{
    int countEven = 0;

    while(num != 0)
    {
        countEven++;
        num = num / 10;
    }

    return countEven;
}


// <-- Function to count odd digits -->
int countOddDigits(int num)
{
    int countOdd = 0;

    while(num != 0)
    {
        countOdd++;
        num = num / 10;
    }

    return countOdd;
}


// <-- Function to find product of digits --->
int productDigits(int num)
{
    int product = 1;
    int digit = 0;

    while(num != 0)
    {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }

    return product;
}


// <--- Function to reverse the number --->
int reverseNumber(int num)
{
    int rev = 0;

    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    return rev;
}


// <--- Function to check if number is palindrome --->
bool isPalindrome(int num)
{
    return (num == reverseNumber(num));
}


// <--- Function to check the frequency of target digit in number --->
int digitFrequency(int num, int target)
{
    int count = 0;
    int digit = 0;

    while(num != 0)
    {
        digit = num % 10;
        if(digit == target)
        {
            count++;
        }
    }

    return count;
}


// <--- Function to find the index of target digit --->
void findDigit(int num, int target)
{
    int digit = 0;
    int index = 0;
    int found = -1;

    int originalNumber = num;

    while(num != 0)
    {
        digit = num % 10;
        index++;

        // <--- NOTE: WE FIND THE INDEX IN THE ORDER IN WHICH DIGITS ARE REMOVED (From right to left) --->
        if(digit == target)
        {
            found = index;
            break;
        }

        num = num / 10;
    }

    if(found != -1)
    {
        printf("Original number: %d\n", originalNumber);
        printf("Target digit: %d\n", target);
        printf("Digit found at index: %d\n", found);
    }
    else
    {
        printf("Digit %d not found in %d\n", target, originalNumber);
    }
}


// <--- Function to display only the prime digits from the number --->
void displayPrimeDigits(int num)
{
    int digits = 0;

    while(num != 0)
    {
        digits = num % 10;
        if(digits == 2 || digits == 3 || digits == 5 || digits == 7)
        {
            printf("%d\n", digits);
        }
        num = num / 10;
    }
}


// <--- Function to check if the number is harshad number or not --->
bool checkHarshad(int num)
{
    return (num % sumDigits(num) == 0);
}


// <--- Function to check if the number is a strong number or not --->
bool checkStrong(int num)
{
    if(num == 0)
    {
        return false;
    }

    int fact = 0;
    int originalNumber = num;
    int sum = 0;
    int digit = 0;

    while(num != 0)
    {
        digit = num % 10;
        fact = 1;

        // 0! -> ALWAYS 1, so we don't need to handle that condition, as loop already starts from 1
        if(digit > 0)
        {
            for(int i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }
        }

        sum = sum + fact;
        num = num / 10;
    }

    return (sum == originalNumber);
}


// <--- USER DEFINED POWER FUNCTION (EUUUUU....)
int power(int base, int exponent)
{
    int result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}


// <--- Function to check if the number is armstrong or not --->
bool checkArmstrong(int num)
{
    if(num == 0)
    {
        return true;
    }

    if(num < 0)
    {
        num = abs(num);
    }

    int digitsCount = 0;
    int sum = 0;
    int digit = 0, originalNumber = 0;

    digitsCount = countDigit(num);

    originalNumber = num;
    while(num != 0)
    {
        digit = num % 10;
        sum = sum + power(digit, digitsCount);
        num = num / 10;
    }

    return (originalNumber == sum);
}


// <--- Function to check if the number is automorphic or not --->
bool checkAutomorphic(int num)
{
    if(num < 0)
    {
        num = abs(num);
    }

    int square = 0;
    square = num * num;

    while(num != 0)
    {
        if((num % 10) != (square % 10))
        {
            return false;
        }
        num = num / 10;
        square = square / 10;
    }

    return true;
}


// <--- Function to find smallest digit in the number --->
int getSmallestDigit(int num)
{

    if(num == 0)
    {
        return 0;
    }

    if(num < 0)
    {
        num = abs(num);
    }

    int digit = 0;
    int smallestDigit = 0;

    smallestDigit = INT_MAX;
    while(num != 0)
    {
        digit = num % 10;
        if(digit < smallestDigit)
        {
            smallestDigit = digit;
        }
        num = num / 10;
    }

    return smallestDigit;
}


// <--- Function to find the largest digit in the number --->
int getLargestDigit(int num)
{

    if(num == 0)
    {
        return 0;
    }

    if(num < 0)
    {
        num = abs(num);
    }

    int digit = 0;
    int largestDigit = 0;

    largestDigit = INT_MIN;
    while(num != 0)
    {
        digit = num % 10;
        if(digit > largestDigit)
        {
            largestDigit = digit;
        }
        num = num / 10;
    }

    return largestDigit;
}


// <--- Function to check if two numbers are digit anagrams of each other
bool digitAnagrams(int num1, int num2)
{

    // If one is 0 and the other isn't, they aren't anagrams. If both are 0, they are.
    if (num1 == 0 || num2 == 0)
    {
        return (num1 == num2);
    }

    int freq1[10] = {0};
    int freq2[10] = {0};

    num1 = abs(num1);
    num2 = abs(num2);

    while(num1 != 0)
    {
        int digit = num1 % 10;
        freq1[digit]++;
        num1 = num1 / 10;
    }

    while(num2 != 0)
    {
        int digit = num2 % 10;
        freq2[digit]++;
        num2 = num2 / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;
}
