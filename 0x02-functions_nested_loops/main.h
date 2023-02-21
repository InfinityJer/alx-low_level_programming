#ifndef main_h
#define main_h

int _putchar(char c);

#endif /* main_h */

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);


void print_alphabet_x10(void);


/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: int
 */

int _islower(int c);


/**
 *_isalpha - checks for alphabet character
 *checks for alphabetic character.
 *Returns 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c);


/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);


/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */

int _abs(int);


/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);


/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - print multiplication table
 */

void times_table(void);


/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);


/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);
