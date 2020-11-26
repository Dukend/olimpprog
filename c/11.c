#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}#include <stdio.h>

int main()
{
	int ch, v = 1;

	int cur = 0;
	int prev = 0;

	while (1)
	{
		int temp = 0;
		ch = getchar();
		if ((ch == EOF) || (ch == '\n'))
			break;
		if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '-' && ch != '+')
			v = 0;
		if (ch == ' ' || ch == '\t')
			v = 1;

		if ((ch == '-' || ch == '+' || (ch >= '0' && ch <= '9')) && v == 1)
		{
			int a = 2;
			if (ch >= '0' && ch <= '9')
				temp += ch - '0';
			while (a != 0)
			{
				ch = getchar();
				if (ch >= '0' && ch <= '9')
					temp += ch - '0';
				if (ch == ' ' || ch == '\t')
				{
					if (a == 2)
					{
						prev = cur;
						cur = temp;
					}
					a = 0;
				}
				if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t')
					a = 1;
				if ((ch == EOF) || (ch == '\n'))
					a = 0;
			}
		}
	}
	printf("%d\n", prev);
	return 0;
}