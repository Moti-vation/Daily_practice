#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1 ,2 , 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1; 
//	
//	while (left <= right)
//	{
		//int mid = (left + right) / 2;
	//	int mid = left + (right - left) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±���%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("������");
	//}
	//return 0;
//}
//
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = { "Welcome to bit !!!!" };
//	char arr2[] = { "###################" };
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr) / sizeof(arr[0]) - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(100);//����
//		//�����Ļ
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//ģ�����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ���ֻ���������������룬
//���������ȷ����ʾ��½��ɣ�������ξ��������Σ����˳�����

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//��������abcdef
//	for(i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)//�������ֵ��0�������ַ������
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//     }
//	if (i == 3)
//	{
//		printf("���������࣬�˳�ϵͳ\n");
//	}
//	return 0;
//}


//���Բ���һ���������1 - 100��
//������С��Ϸ
//�´���
//��С��
//ֱ���¶��ˣ�����

#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*******1.play*******\n");
//	printf("*******0.exit*******\n");
//	printf("********************\n");
//}
////rand��Χ  0-RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.���������
//	int ret = rand() % 100 + 1;//����������ĺ���
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
////ָ��
////int* p = NULL	;//��ָ��(��ʼ��)
////int a = 0;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//				printf("�˳���Ϸ\n");
//				break;
//		default:
//				printf("�������������ѡ��\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//
//

//void test()
//{
//	again:
//}
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//�ػ�����
//��������������һ�����ڹػ�
//��������������ȡ���ػ�
#include<string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 30");
//again:
//	printf("��ע�⣬��ĵ�����30s�ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = " hello bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


////�����Ķ���
//int get_max(int a, int b)
//{
//	return(a > b ? a : b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�����ֵ
//	//�����ĵ���
//	int z = get_max(a, b);
//	printf("%d\n", z);
//	return 0;
//}


//дһ���������Խ����������α���������

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

void Swap(int* px, int* py)
{
	int z = *px;//z = a
	*px = *py;//a = b
	*py = z;//b = a
}

//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a = %d b = %d\n", a, b);
	//a��b�в���
	//Swap(a, b);
	Swap(&a, &b);
	printf("������a = %d b = %d\n", a, b);

	return 0;
}