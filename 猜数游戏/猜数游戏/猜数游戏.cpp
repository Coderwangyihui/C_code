#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define trytimes 6
//int main()
//{
//	srand(time(NULL));
//	int n =rand()%101;//随机生成0—100之间的数字
//	int a = 0;
//	int b = 100;
//	int c,m=0;
//	int d = trytimes;
//	int num[trytimes] = {0};
//	do
//	{
//		printf("please input a number:\n");
//		scanf("%d", &c);
//		num[trytimes-d] = c;
//		d--;
//		while ((c-a)*(c-b)> 0)
//		{
//			printf("error,please input a number\n");
//			scanf_s("%d", &c);
//		};//判断c是否合法
//		a = c <= n ? c : a;
//		b = n <= c ? c : b;
//		if (c < n)
//			printf("the right number is bigger than %d %d<=?<=%d\ntimes left:%d\n", c,a,b,d);
//		else 
//			printf("the right number is smaller than %d %d<=?<=%d\ntimes left:%d\n", c,a,b,d);
//	} while (c!=n&&d>0);
//	if (d+1)
//		printf("\a\abingo! the right number is %d,you just tried %d times\n", n, trytimes - d);
//	else
//		printf("\asorry the right number is %d\n", n);
//	printf("------input recording------\nyou inputed these numbers:\n");
//	for (m=0;m<trytimes-d;m++)
//	{
//		printf("%d:%d %d\n", m+1, num[m],n-num[m]);
//	}
//	return 0;
//}
int main()
{
	int ch=0;
	while ((ch = getchar() != EOF))
		putchar(ch);
	return 0;
}