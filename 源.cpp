#include<stdio.h>

int main()
{
	int a;
	int* p = &a;
	char str[100];

	printf("������һ��������");
	scanf_s("%d", &a);
	printf("a=%d\n", a);

	printf("����������һ��������");
	scanf_s("%d", p);//ָ�뱾������ָ��һ����ַ�����Բ���Ҫȡ��ַ��&
	printf("a=%d\n", a);

	printf("��������C��������");
	scanf_s("%s", str);//�ַ�����Ҳ����Ҫȡ��ַ��&
    printf("��C�����ҵ������ǣ�%s\n");

	return 0;
}