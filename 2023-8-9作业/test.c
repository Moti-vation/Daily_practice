#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//    int n = 0;
//    char arr[40] = { 0 };
//    scanf("%d", &n);//输入几名同学
//    for (int k = 0; k <= n; k++)
//    {
//        scanf("%d", &arr[k]);//输入成绩
//    }
//    int temp = 0;
//    for (int i = 0; i < n; i++)//第i位为最大数
//    {
//        for (int j = i + 1; j < n; j++)//从第i+1位开始遍历剩余数
//        {
//            if (arr[j] > arr[i])//存在大于最大数的数
//            {
//                temp = arr[i];//把最大数进行交换
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