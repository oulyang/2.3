#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//int main()
//{
//	unsigned long pul[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pul;
//	*(pulptr + 3) += 3;
//	printf("%d,%d", *pulptr, *(pulptr + 3)); //6 12
//	return 0;
//	// ->[][][][12][]  pul
//	//pulptr
//}


////倒序输出
// void reverse(char* str)
//{
//	 //指针
//	 assert(str);
//	 int len = strlen(str);
//	 char* left = str;
//	 char* right = str + len - 1;
//	 while (left<right)
//	 {
//		 char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//	printf("逆序后%s\n", arr);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 4  2 22 222 2222
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////水仙花数 =自幂数（3次方）  153=1^3+5^3+3^3
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//判断水仙花数
//		//1.计算位数 2.计算每一位的n次方之和 sum  3比较i==sum
//		int n = 1;
//		int t = i;
//		int sum = 0;
//		while (t /= 10)//1.计算位数
//		{
//			n++;
//		}
//		t = i;//2.计算每一位的n次方之和 sum 
//		while (t)
//		{
//			sum += pow(t % 10, n);
//			t /= 10;
//		}
//		if (i == sum)//3.比较i==sum
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////打印菱形
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <n-i-1 ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(n-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//struct stu
//{
//	int a;
//	char name[20];
//	int b;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}


////1瓶汽水1元，2个空瓶能换1瓶，20元能喝多少瓶
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//买回的
//	//total = money;
//	//empty = money;
//	////换回的
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d", total);
//	return 0;
//}


//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//左边开始找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//右边开始找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//200   11001000
//	//100   01100100
//	//300  100101100
//	//c     00101100
//	printf("%d,%d", a + b, c);// 100101100(300),  00101100(44)
//	//             整型提升
//	return 0;
//}


////简易杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//		{
//			printf("killer=%c\n", k);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

