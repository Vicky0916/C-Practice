# include < stdio.h >
# include < string.h >
# define MAX 20
int main()
{
	int txt(char c);
	int i, j, n, m, k = 0;
	int state = 1;
	char s[100];
	char str[100];

	gets(s);

	i = strlen(s) - 1;
	while (i != 0)
	{
		for (j = i; j >= 0; j--)
		{
			if (j == 0)
			{
				state = 0;
				break;
			}
			else
				if (txt(s[j]) == 0)
				{
					state = 0;
					break;
				}
				else
					state = 1;
		}
		if ((state == 0) && (j != 0))
		{
			for (n = j + 1; n <= i; n++)
				str[k++] = s[n];
			str[k++] = ' ';
			for (m = j - 1; m >= 0; m--)
			{
				if (m == 0)
					i = 0;
				if (txt(s[m]))
				{
					if (m == 0)
						j = 0;
					i = m;
					break;
				}
			}
		}

		if ((j == 0))
		{
			for (n = j; n <= i; n++)
				str[k++] = s[n];
			str[k] = '\0';
			i = 0;
		}

	}
	for (i = 0; i < k; i++)
		printf("%c", str[i]);
	printf("\n");
	return 0;
}
int txt(char c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return 1;
	else
		return 0;
}
