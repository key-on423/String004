#include <stdio.h>
//6.��дһ����Ϊis_within()�ĺ���������һ���ַ���һ��ֻ���ַ�����ָ����Ϊ�����������βΡ����ָ���ַ����ַ����У���ú�������1.���򣬷���0����
//��һ�������ĳ����в��Ըú���ʹ��һ��ѭ���������ṩ����ֵ
#define max 30
int is_within(char ch, char* st);
int main()
{
	int w;
	char arr1[max];
	char ch;
	printf("�������ַ���������:\n");
	fgets(arr1, max, stdin);
	printf("������һ���ַ�:\n");
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