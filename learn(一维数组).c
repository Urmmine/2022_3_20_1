#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����Ĵ���

/*
type_t arr_name [cost_n];
type_t ָ�����Ԫ������
cost_n ��һ��<�������ʽ>������ָ������Ĵ�С
*/

//VS2019 ��֧�ֱ䳤����Ĵ���

//int main()
//{
//	int arr[8];
//	//char ch[5];
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//
//	int arr[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//
//	int arr2[] = { 1,2,3,4,5 };//���ݳ�ʼ������ȷ��Ԫ�ظ���
//
//	char ch[5] = { 'b','i','t' };//�ַ������ʼ��,��Ԫ��ʱΪ0����\0��ASCII��ֵ0
//	
//	char ch1[] = { 'b','i','t' };//b i t 
//	//3��Ԫ��
//	char ch2[] = "bit";//b i t \0
//	//4��Ԫ��
//
//	return 0;
//}
//
//int main()
//{	
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - �±����ò�����
//	//��5��Ԫ������5
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����Ԫ�ظ���
//
//	return 0;
//}

//�������ڴ��еĴ洢

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[]%d = %p\n",i, &arr[i]);
	}
	return 0;
}



//һά�������ڴ�����������ŵ�
//���������±����������ַ���ɵ͵��߱仯��

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	arr;//����������Ԫ�صĵ�ַ
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}




