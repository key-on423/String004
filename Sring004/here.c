#include <stdio.h>
//6.编写一个名为is_within()的函数，接受一个字符和一个只想字符串的指针作为链两个函数形参。如果指定字符在字符串中，则该函数返回1.否则，返回0，。
//在一个完整的程序中测试该函数使用一个循环给函数提供输入值
#define max 30
int is_within(char ch, char* st);
int main()
{
	int w;
	char arr1[max];
	char ch;
	printf("请输入字符串的内容:\n");
	fgets(arr1, max, stdin);
	printf("请输入一个字符:\n");
	ch = getchar();
		while (getchar() != '\n')
			continue;
		while (ch != '$')
		{
			w=is_within(ch, arr1);
			if (w == 1)
			{
				printf("Find it!\n");
				break;
			}
			else
			{
				printf("Try another one or enter $ quit\n");
				while ((ch = getchar()) == '\n')
					continue;
			}
		}
	return 0;
}
int is_within(char ch, char* st)
{
	while (*st != '\0')
	{
		if (*st == ch)
			return 1;
		else
			st++;
	}
	return 0;
}