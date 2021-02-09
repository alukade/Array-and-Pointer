#include<stdio.h>

int main()
{
	int a;
	int* p = &a;
	char str[100];

	printf("请输入一个整数：");
	scanf_s("%d", &a);
	printf("a=%d\n", a);

	printf("请重新输入一个整数：");
	scanf_s("%d", p);//指针本来就是指向一个地址，所以不需要取地址符&
	printf("a=%d\n", a);

	printf("请输入鱼C的域名：");
	scanf_s("%s", str);//字符数组也不需要取地址符&
    printf("鱼C工作室的域名是：%s\n");

	return 0;
}