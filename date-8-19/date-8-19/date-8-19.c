#include <stdio.h>
int main()
{
	int x = 0;
	for (x = 'a'; x <= 'e'; x++)
	{
		('b'=2 ||)
	}
}
	/*1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1 */
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <10 ; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 3 && j >= 2)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//void test(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	return arr[10];
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 2,4,3,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//指针减指针
//int test(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdefghjhfj";
//	int ret = test(arr);
//	printf("%d", ret);
//	return 0;
//}
// 递归
//int test(char *arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + test(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = test(arr);
//	printf("%d", ret);
//	return 0;
//}
// 计算法
//void test(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	printf("%d", count);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	test(arr);
//	return 0;
//}

//int main()
//{
//	int money = 0;	
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;
//	while (empty/2)
//	{
//		total = total + (empty / 2);
//		empty = (empty / 2) + (empty % 2);
//	}
//	printf("%d\n", total);
//	return 0;
//}