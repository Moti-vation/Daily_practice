#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//    int n = 0;
//    char arr[40] = { 0 };
//    scanf("%d", &n);//���뼸��ͬѧ
//    for (int k = 0; k <= n; k++)
//    {
//        scanf("%d", &arr[k]);//����ɼ�
//    }
//    int temp = 0;
//    for (int i = 0; i < n; i++)//��iλΪ�����
//    {
//        for (int j = i + 1; j < n; j++)//�ӵ�i+1λ��ʼ����ʣ����
//        {
//            if (arr[j] > arr[i])//���ڴ������������
//            {
//                temp = arr[i];//����������н���
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for (int k = 0; k < 5; k++)
//    {
//        printf("%d ", arr[k]);
//    }
//    return 0;
//}


int main()
{
    char s;
    int A = 0;
    int B = 0;
    while ((s = getchar()) != EOF)
    {
        if (s == 'A')
        {
            A++;
        }
        else if (s == 'B')
        {
            B++;
        }
        else {

        }
    }
    if (A > B)
    {
        printf("A");
    }
    else if (A < B)
    {
        printf("B");
    }
    else {
        printf("E");
    }
    return 0;
}