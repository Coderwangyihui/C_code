#include<stdio.h>
#include<windows.h>
int main()
{
	char name[] = "һ����������ܹ���һ��ʱ����ϵ�������������Ա����ֱ�׺ʹ��и��⣬����Ҫ��������Դ��Ⱥ�ڵ�����ʵ�����ܹ�ֱָȺ�ڵ��������";
	int str_len = strlen(name);
	int i;
	while (1)
	{
		for (i = 0;i < str_len;i++)
		{
			putchar(name[i]);
			fflush(stdout);
			Sleep(100);
		}
		for (i = 0;i < str_len;i++)
		{
			printf("\b \b");
			fflush(stdout);
			Sleep(100);
		}
	}
	return 0;
}