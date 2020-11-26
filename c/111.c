#include <stdio.h>

int main()
{
    int ch, v = 1;

    int cur = 0, temp = 0, prev = 0;
    while (1)
    {
        ch = getchar();
        if (v == 0)
            if (ch == ' ' || ch == '\t' || ch == '\n')
                v = 1;

        if (v == 1)
        {
            if ((ch < '0' || ch > '9') && ch != ' ' && ch != '\t' && ch != '\n' && ch != '-' && ch != '+')
                v = 0;
            else
                v = 2;
        }

        if (v == 2)
        {
            if (ch == '-' || ch == '+')
                ch = getchar();
            if (ch == ' ' || ch == '\t' || ch == '\n')
                v = 0;
            else
                v = 3;
        }
        if (v == 3)
        {
            if (ch >= '0' && ch <= '9')
                temp += ch - '0';
            else if (ch == ' ' || ch == '\t' || ch == '\n' || ch == EOF)
            {
                prev = cur;
                cur = temp;
                v = 1;
                temp = 0;
            }
            else
            {
                v = 4;
                temp = 0;
            }
            if (v == 4)
            {
                if (ch == ' ' || ch == '\t' || ch == '\n')
                    v = 1;
            }
        }
        if (ch == EOF)
            break;
    }
    printf("%d\n", prev);
    return 0;
}
