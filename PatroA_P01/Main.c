/**********************************************
* Name: Aswini Patro *
* Date: 1/31/18 *
* Assignment: Project 1: Integer Operations *
***********************************************
* Create a program that takes an input number and
  outputs the reverse of that number as well as 
  the sum of the digits.					*
***********************************************/

#include <stdio.h>

int reverse(int);
int sumDigits(int);

static int remainder = 0;	//Global variables
static int reversedNum = 0;

int main() {
	int num = 0;
	int reverseNum = 0;
	int sumOfDigits = 0;

	printf("Enter a number: ");
	scanf_s("%d", &num);
	printf("\n");

	reverseNum = reverse(num);
	sumOfDigits = sumDigits(num);

	printf("Reversed: %d\n", reverseNum);
	printf("Sum of digits: %d\n", sumOfDigits);
}

/**********************************************
* Input: The entered number*
* Output: The reversed result of that number*
* Pre-condition: The entered number is full and the reversed number is empty*
* Post-condition: The entered number is empty and the reversed number is filled with the result*
***********************************************/
int reverse(int x) {
	

	if (x > 0) {
		remainder = x % 10;	//Find last digit of number
		reversedNum *= 10;	//Move over reverse one digit place
		reversedNum += remainder;	//Add in last digit

		reverse(x / 10); //Move number one digit place down
	}
	else {
		return reversedNum;
	}

}

/**********************************************
* Input: The entered number*
* Output: The sum of digits result of that number*
* Pre-condition: The entered number is full and the sum is empty*
* Post-condition: The entered number is full and the sum is filled with the result*
***********************************************/
int sumDigits(int x) {

	if (x > 0) {
		return ((x % 10) + sumDigits(x / 10));	//return the ones place, shift over number, and repeat until no places are left
	}
	else {
		return 0;	//in case number is 0
	}
}
