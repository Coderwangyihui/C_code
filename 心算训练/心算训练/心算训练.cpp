#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int a, b, c,d;
	a = rand()/100;
	b = rand()/100;
	c = rand()/100;
	clock_t start, end;
	double computer_time;
	start = clock();
	while(1)
	{
		printf("%d+%d+%d=?\n", a, b, c);
		scanf_s("%d", &d);
		if (d == a + b + c)
			break;
		printf("error!please input the right answer\n");
	} 
	end = clock();
	computer_time = (double)(end - start) / CLOCKS_PER_SEC;
	printf("bingo!\ntime use:%.1fs\n", computer_time);
	return 0;
}