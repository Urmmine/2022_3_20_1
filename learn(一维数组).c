#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组的创建

/*
type_t arr_name [cost_n];
type_t 指数组的元素类型
cost_n 是一个<常量表达式>，用来指定数组的大小
*/

//VS2019 不支持变长数组的创建

//int main()
//{
//	int arr[8];
//	//char ch[5];
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//
//	int arr[10] = { 1,2,3,4,5 };//不完全初始化
//
//	int arr2[] = { 1,2,3,4,5 };//根据初始化内容确定元素个数
//
//	char ch[5] = { 'b','i','t' };//字符数组初始化,无元素时为0，即\0的ASCII码值0
//	
//	char ch1[] = { 'b','i','t' };//b i t 
//	//3个元素
//	char ch2[] = "bit";//b i t \0
//	//4个元素
//
//	return 0;
//}
//
//int main()
//{	
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - 下标引用操作符
//	//第5个元素填入5
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组的元素个数
//
//	return 0;
//}

//数组在内存中的存储

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



//一维数组在内存中是连续存放的
//随着数组下标的增长，地址是由低到高变化的

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	arr;//数组名是首元素的地址
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}




