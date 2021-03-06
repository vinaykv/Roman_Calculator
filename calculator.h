/* 
Roman calculator: performs addition and subtraction of roman values
Author: Vinay vittal Karagod
File dependents: main.c, calculator.h, calculator.c,calculator-test.check
Date: 09/06/2016
*/


#ifndef calculator_H
#define calculator_H

char* calculate(char roman_number1[50],char roman_number2[50],char option[10],char* buffer);
int romanValue(char r_Character);
int roman_decimal(char number[]);
char* predigits(char character1,char character2,char* buffer);
char* postdigits(char character,int count,char* buffer);
char* decimal_roman(int total,char* buffer);

#endif
