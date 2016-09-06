/* 
Roman calculator: performs addition and subtraction of roman values
Author: Vinay vittal Karagod
File dependents: main.c, calculator.h, calculator.c,calculator-test.check
Date: 09/03/2016
*/


#ifndef calculator_H
#define calculator_H

int calculate(char roman_number1[50],char roman_number2[50],char option[10]);
int romanValue(char r_Character);
int roman_decimal(char number[]);
void predigits(char character1,char character2);
void postdigits(char character,int count);
char* decimal_roman(int total);

#endif
