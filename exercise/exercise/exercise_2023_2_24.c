#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int k = 0;
//    int arr[100];
//    scanf("%d %d", &n, &k);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int count = 0;
//    for (int i = 0; i < k; i++)
//    {
//        for (int j = 0; j < n - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0)
//            printf("%d", arr[i]);
//        else
//            printf(" %d", arr[i]);
//    }
//    return 0;
//}