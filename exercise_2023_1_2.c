#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //Ã°ÅÝÅÅÐò
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


#include<stdio.h>
#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, 4, cmp);
//    for (int i = n - 1; i >= n - 5; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int IsTheNumber(const int N)
//{
//    int a = sqrt(N);
//    if ((a * a) == N)
//    {
//        int n = N, i, flag[10] = { 0 };
//        while (n)
//        {
//            i = n % 10;
//            n /= 10;
//            if (flag[i] == 1)
//                return 1;
//            else
//                flag[i] = 1;
//        }
//    }
//    else
//        return 0;
//}


//int IsTheNumber(const int N)
//{
//    int a = sqrt(N);
//    if (a * a == N)
//    {
//        int arr[10] = { 0 };
//        int n = N;
//        int i = 0;
//        while (n)
//        {
//            arr[i++] = n % 10;
//            n /= 10;
//        }
//        for (int j = 0; j < i; j++)
//        {
//            for (int z = j + 1; z < i; z++)
//            {
//                if (arr[j] == arr[z])
//                    return 1;
//            }
//        }
//        return 0;
//    }
//    else
//        return 0;
//}



//int Count_Digit(const int N, const int D)
//{
//    if (N == 0)
//        return 1;
//    else if (N > 0)
//    {
//        int n = N;
//        int arr[10] = { 0 };
//        int i = 0;
//        while (n)
//        {
//            arr[i++] = n % 10;
//            n /= 10;
//        }
//        int cnt = 0;
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == D)
//                cnt++;
//        }
//        return cnt;
//    }
//    else
//    {
//        int n = 0 - N;
//        int arr[10] = { 0 };
//        int i = 0;
//        while (n)
//        {
//            arr[i++] = n % 10;
//            n /= 10;
//        }
//        int cnt = 0;
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == D)
//                cnt++;
//        }
//        return cnt;
//    }
//}



//void Print_Factorial(const int N)
//{
//    if (N < 0)
//        printf("Invalid input\n");
//    else if (N == 0)
//        printf("1\n");
//    else
//    {
//        int i = 0;
//        long long ret = 1;
//        for (i = 1; i <= N; i++)
//        {
//            ret *= i;
//        }
//        printf("%lld", ret);
//    }
//}


//int even(int n)
//{
//    if (n % 2 == 0)
//        return 1;
//    else
//        return 0;
//}