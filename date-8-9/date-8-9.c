#include <stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
//void maopao(int arr[], int x)
//{
//	int i = 0;
//	for (i = 0; i < x - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int c = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = c;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d", arr[j ]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int l = 0;
//	int r = sz - 1;
//	while (l <= r)
//	{
//		int x = 0;
//		x = arr[l];
//		arr[l] = arr[r];
//		arr[r] = x;
//		l++;
//		r--;
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//	return 0;
//}
// 
// 
//test(int x)
//{
//	
//	if (x > 9)
//	{
//		test(x / 10);
//	}
//	printf("%d ", x % 10);
//	
//}
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	test(i);
//	return 0;
//}
//table(int x)
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	
//	int c = 0;
//	table(c);
//	return 0;
//}

//int main()
//{
//	int i= 0;
//	int j = 0;
//	int c = 0;
//	scanf_s("%d", &c);
//	for (i = 1; i <= c; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		 if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d ", count);
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	if (a >= b)
//	{
//		int i = 0;
//		for (i = 1; i <= b; i++)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d", i);
//			}
//		}
//	}
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//	{
//		printf("闰年=%d\n", i);
//	}
//	else
//		printf("该数字不是闰年%d\n", i);
//		
//	return 0;
//}
// 
// 
//test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}