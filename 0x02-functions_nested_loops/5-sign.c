  1 #include "main.h"
  2 
  3 /**
  4  * print_sign - entry point
  5  * @c: character
  6  * Description: return 1 if c is in lower case
  7  * Return: 1 or 0
  8  */
  9 int print_sign(int c)
 10 {
 11         if (c > 0)
 12         {
 13                 _putchar('+');
 14                         return (1);
 15         }
 16         else if (c == 0)
 17         {
 18                 _putchar('0');
 19                 return (0);
 20                         }
 21         else if (c < 0)
 22         {
 23                 _putchar('-');
 24                 return (-1);
 25         }
 26         return (0);
 27 }
