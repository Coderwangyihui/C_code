#include<stdio.h>
#include<windows.h>
int main()
{
	char name[] = "一句民间谚语能够和一个时代联系起来，除了语言本身的直白和传诵感外，更重要的是它来源于群众的切身实践，能够直指群众的深刻需求";
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