#define _CRT_SECURE_NO_WARNINGS 1
//汉诺塔问题
#include <stdio.h>
#include<stdlib.h>
void Move(int n, char a, char b);
int count;
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Move(n, a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);
		Move(n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}
void Move(int n, char a, char b)
{
	count++;
	printf("第%d次移动 Move %d: Move from %c to %c !\n", count, n, a, b);
}
int main()
{
	int n = 8;
	printf("汉诺塔的层数:\n");
	scanf(" %d", &n);
	Hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}