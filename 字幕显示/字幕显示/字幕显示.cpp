#include<stdio.h>
#include<time.h>
#include<string.h>
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do
	{
		if ((c2 = clock() == (clock_t)-1))
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
int main()
{
	char name[] = "wangyihui";
	int str_len = strlen(name);
	int i;
	for (i=0;i <str_len;i++)
	{
		putchar(name[i]);
		fflush(stdout);
		sleep(500);
	}
	for (i=0;i <str_len ;i++)
	{
		printf("\b \b");
		fflush(stdout);
		sleep(500);
	}
	return 0;
}
