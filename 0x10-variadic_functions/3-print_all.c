#include <stdio.h>
#include  "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return:none
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
