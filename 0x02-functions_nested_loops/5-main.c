  1 #include "main.h"
  2 
  3 /**
  4  * main - check the code.
  5  *
  6  * Return: Always 0.
  7  */
  8 int main(void)
  9 {
 10     int r;
 11 
 12     r = print_sign(98);
 13     _putchar(',');
 14     _putchar(' ');
 15     _putchar(r + '0');
 16     _putchar('\n');
 17     r = print_sign(0);
 18     _putchar(',');
 19     _putchar(' ');
 20     _putchar(r + '0');
 21     _putchar('\n');
 22     r = print_sign(0xff);
 23     _putchar(',');
 24     _putchar(' ');
 25     _putchar(r + '0');
 26     _putchar('\n');
 27     r = print_sign(-1);
 28     _putchar(',');
 29     _putchar(' ');
 30     _putchar(r + '0');
 31     _putchar('\n');
 32     return (0);
 33 }
