#include <stdio.h>
#include <stdlib.h>

int main()
{
	int flag = 0, a = -1, b = -1, c;
	char x;
	while ((x = getchar()) != EOF)
	{
		if (x == '|' && flag == 0)
			a++;
		if (x == ' ' && flag == 0)
			flag = 1;
		if (x == '|' && flag == 1)
			b++;
	}
	c = a / b;
	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
	for (int i = -1; i < c; i++)
	{
		printf("| ");
	}
	printf("\n");
	return 0;
}
