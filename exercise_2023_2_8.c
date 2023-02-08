#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[2000] = { 0 };
//    int i = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i++];
//        }
//        else
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            arr3[k++] = arr2[j];
//        }
//    }
//    if (j == m)
//    {
//        for (; i < n; i++)
//        {
//            arr3[k++] = arr1[i];
//        }
//    }
//    for (i = 0; i < k; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int Fib(int n)
//{
//    if (n > 2)
//    {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//    else
//    {
//        return n;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        int n = i;
//        int j = 0;
//        int sum = 0;
//        int k = 0;
//        if (i)
//        {
//            while (n)
//            {
//                j += n % 10 * pow(10, k);
//                n /= 10;
//                sum += n * j;
//                k++;
//            }
//            if (sum == i)
//                printf("%d ", i);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//
//        if (((a + b) <= c) || ((a - b) >= c) || ((a + c) <= b) || ((a - c) >= b) || ((b + c) <= a) || ((b - c) >= a))
//            printf("Not a triangle!\n");
//        else
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//    }
//    return 0;
//}

