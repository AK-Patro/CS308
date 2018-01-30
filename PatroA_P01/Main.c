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

static remainder = 0;	//Global variables
static reversedNum = 0;

int main() {
	int num = 0;
	int reverseNum = 0;
	int sumOfDigits = 0;

	printf("Enter a number: \n\n");
	scanf_s("%d", &num);

	reverseNum = reverse(num);
	sumOfDigits = sumDigits(num);

	printf("Reversed: %d\n", &reverseNum);
	printf("Sum of digits: %d\n", &sumOfDigits);
}

/**********************************************
* Input: *
* Output: *
* Pre-condition: *
* Post-condition: *
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
* Input: *
* Output: *
* Pre-condition: *
* Post-condition: *
***********************************************/
int sumDigits(int x) {

}
