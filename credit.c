#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

// Credit card validation with Luhn's Algorithm

/* Use:
* with the terminal prompt type "make credit"
* and then "./credit"
* after that inform the credit card number without hyphens
*/

int main()
{
  // Get the credit card number
  long cardNumber = get_long("Number: ");

  // Applying Luhn's Algorithm
  int lengthNumber = 0, currDigit = 0, lastDigit = 0, sumEvens = 0, sumOdds = 0;
  long tempNumber = cardNumber; // copying the credit card number to avoid change the original

  while (tempNumber > 0)
  {
    lastDigit = currDigit; // saving the last digit for assigning the company name later
    currDigit = tempNumber % 10; // starting with the last digit of the numbers

    if (lengthNumber % 2 == 0)
    {
      sumEvens += currDigit; // incrementing the sum of evens in case the digit is at even position
    }
    else
    {
      int multiple = currDigit * 2;
      sumOdds += (currDigit / 10) + (currDigit % 10); // incrementing the sum of odds and seggregate the digit
    }

    tempNumber /= 10;
    lengthNumber++;
  }

  bool isValid = (sumEvens + sumOdds) % 10 == 0; // sum of the Evens and Odds must remain 0 when divided by 10.

  // Prompt company name
  int first2digits = (currDigit * 10) + lastDigit;

  if (currDigit == 4 && (lengthNumber == 13 || lengthNumber == 15) && isValid)
  {
    printf("VISA\n");
  }
  else if ((first2digits == 34 || first2digits == 37) && lengthNumber == 15 && isValid)
  {
    printf("AMEX\n");
  }
  else if ((first2digits == 51 || first2digits == 52 || first2digits == 53 || first2digits == 54 || first2digits == 55) && lengthNumber == 16 && isValid)
  {
    printf("MASTERCARD\n");
  }
  else
  {
    printf("INVALID\n");
  }

}
