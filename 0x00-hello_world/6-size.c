 include <stdio.h>
   /**
     *main - Entry point
     *Return: always 0 (success)
     */
   int main(void)
{
	printf("size of a char: %lu bytr(s)\n", sizeof(char));
	printf("size of an int: %lu bytr(s)\n", sizeof(int));
	printf("size of a long int: %lu bytr(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytr(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytr(s)\n", sizeof(float));
	return (0);
}