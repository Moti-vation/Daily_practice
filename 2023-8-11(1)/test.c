#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//add(int x, int y)
//{
//	return x + y;
//}
//
//void swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//ʵ��
//	scanf("%d%d", &a, &b);
//	//��ֵ����
//	int c = add(a, b);
//	printf("%d\n", c);
//	//��ַ����
//	swap(&a, &b);
//	printf("������a = %d, b = %d\n", a ,b);
//	return 0;
//}


//��ӡ100 - 200 ֮�������
//������ ֻ�ܱ�1���������������

#include<math.h>

//sqrt ��һ���⺯��
// ��ƽ������˼
//ͷ�ļ�marh.h
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int falg = 1;//falg��1��ʾ������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				falg = 0;
//				break;
//			}
//		}
//		if (falg == 1)
//		{
//			ume++;
//			printf("%d ", i);
//		}
//	 
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}


//дһ�������ж��Ƿ�Ϊ����
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			ume++;
//		}
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}


//��ӡ1000 - 2000��֮�������
//�����жϵĹ���
//1.�ܱ�4���������Ҳ��ܱ�100����
//2.�ܱ�400����������

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		    if (year % 400 == 0)
//		    {
//			   printf("%d ", year);
//		    }
//	}
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ�������ж�һ���ǲ�������

//�����귵��1
//���Ƿ���0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ����������Ķ��ֲ���

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int k = 7;
//	int z = sizeof(arr) / sizeof(arr[0]);
//	int right = z - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�±���%d", mid);
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (right < left)
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����±�
//	//�Ҳ�������-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//
//��������

#include<stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//
//}
//
//int main()
//{
//	int i = 0;
//	int ume = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			ume++;
//		}
//	}
//	printf("\nume=%d\n", ume);
//	return 0;
//}



//дһ��������ÿ�ε�������������ͽ�����num��ֵ��1

//void add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);//1
//	add(&num);
//	printf("%d\n", num);//2
//	add(&num);
//	printf("%d\n", num);//3
//	add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}


//��ʽ����

#include<string.h>

int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	//��ʽ����
	printf("%d\n", strlen("abcdef")); 
	return 0;
}

//main ��������������
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}

