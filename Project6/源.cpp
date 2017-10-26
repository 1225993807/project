#include<stdio.h>
int main()
{
	int i, n, j, flag;
	long int sum = 0;
lable_1:printf("please input a n:");
	scanf_s("%d\n", &n);
	if (n <= 10 || n >= 10000000)
	{
		printf("wrong");
		goto lable_1;
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			flag = 0;
			for (j = 2; j < i; j++)
			{
				if (i%j == 0)
					flag = 1;
			}
			if (flag == 0)
				sum = sum + i;
		}
		printf("%d", sum);
	}
	return 0;
}