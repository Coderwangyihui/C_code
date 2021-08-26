#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int y, n;
	float x;
	srand(time(NULL));
	do {
		n = rand() % 3;//随机生成0—2之间的数字 其中0代表石头 1代表剪刀 2代表布
		printf("please input your choice:\n0---stone  1---scissors  2---cloth\n");
		do 
		{
			scanf_s("%f", &x);
			if ((int)x-x==0&&x == 0 || x == 1 || x == 2)
				;
			else
				printf("error!please input your choice again\n");
		} while (!((int)x - x == 0 && x == 0 || x == 1 || x == 2));
		switch ((int)x - n)
		{
		case 2:
		case -1:
		{
			printf("Congratulations!You win\n");
			break;
		}
		case 1:
		case -2:
		{
			printf("Sorry!You lose\n");
			break;
		}
		default: printf("draw\n");
		}
		/*switch ((x - n + 3) % 3)
		case 1:
		{
			printf("Sorry!You lose\n");
			break;
		}
		case 2:
		{
			printf("Congratulations!You win\n");
			break;
		}
		default: printf("draw\n");*/
		printf("Will you try again?\n0---no  1---yes\n");
		scanf_s("%d", &y);
	} while (y); 
	return 0;
}
 
// 测试是否为整数：
//int main() {
//	float x;
//	scanf_s("%f", &x);
//	if ((int)x - x == 0)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
// 
//win 2-0 0-1 1-2 lose 1-0 2-1 0-2
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#define trytimes 6
//int main()
//{
//	srand(time(NULL));
//	int n = rand() % 101;//随机生成0—100之间的数字
//	int a = 0;
//	int b = 100;
//	int c, m = 0;
//	int d = trytimes;
//	int num[trytimes] = { 0 };
//	do
//	{
//		printf("please input a number:0---100\n");
//		scanf_s("%d", &c);
//		num[trytimes - d] = c;
//		d--;
//		while ((c - a) * (c - b) > 0)
//		{
//			printf("error,please input a number\n");
//			scanf_s("%d", &c);
//		};//判断c是否合法
//		a = c <= n ? c : a;
//		b = n <= c ? c : b;
//		if (c < n)
//			printf("the right number is bigger than %d %d<=?<=%d\ntimes left:%d\n", c, a, b, d);
//		else
//			printf("the right number is smaller than %d %d<=?<=%d\ntimes left:%d\n", c, a, b, d);
//	} while (c != n && d > 0);
//	if (d + 1)
//		printf("\a\abingo! the right number is %d,you just tried %d times\n", n, trytimes - d);
//	else
//		printf("\asorry the right number is %d\n", n);
//	printf("------input recording------\nyou inputed these numbers:\n");
//	for (m = 0;m < trytimes - d;m++)
//	{
//		printf("%d:%d %d\n", m + 1, num[m], n - num[m]);
//	}
//	return 0;
//}
