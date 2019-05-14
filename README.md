# Credit Card Validation

This is a simple credit card validation with Luhn's Algorithm written in C
[Pseuodocode](pseuodocode.txt)

## Task

Create a program that validates the credit card number using Luhns Algorithm
[CS50 2019 - credit](https://lab.cs50.io/cs50/labs/2019/x/credit/)

## Criteria

Write a program that prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. So that we can automate some tests of your code, we ask that your program’s last line of output be AMEX\n or MASTERCARD\n or VISA\n or INVALID\n, nothing more, nothing less.


## Functionality

This program ask for the credit card number and then check with the Luhn's Algorithm whether it's valid.
Once valid, it prompts the company name related to the credit card. Otherwise, it returns INVALID.

## Run Locally

Run this command git clone https://github.com/guiaramos/credit-card-validation.git.
Make sure your PC is able to compile C lang
Run "make credit" and then "./credit"

## Tech Stack

- C
- CS50 IDE
- Atom

---
