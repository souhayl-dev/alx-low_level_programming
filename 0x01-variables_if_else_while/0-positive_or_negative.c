#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/* this functions check random numbers if positive or negative or equal zero */
/**
 * main - check numbers
 *
 * Description: 'Check random numbers if positive or negative or equal zero'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char result[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* traitement */
	if (n > 0)
	{
		strcpy(result, "is positive");
	} else if (n < 0)
	{
		strcpy(result, "is negative");
	} else
	{
		strcpy(result, "is zero");
	}
	/* display result */
	printf("%d %s\n", n, result);
	return (0);
}
