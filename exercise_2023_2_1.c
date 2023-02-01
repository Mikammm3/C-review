#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    int arr[51] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d", &m);
//    for (int i = n - 1; i >= 0; i--)
//    {
//        if (m < arr[i])
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if (arr[0] > m)
//        arr[0] = m;
//    for (int i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//    int i = 0;
//    for (i = 2; i < x; i++)
//    {
//        if (x % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int count = 0;
//        int ret = 0;
//        for (int i = 2; i <= n; i++)
//        {
//            ret = is_prime(i);
//            if (ret == 1)
//                printf("%d ", i);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int arr[101] = { 0 };
//        for (i = 2; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            int j = 0;
//            for (j = i + 1; j <= n; j++)
//            {
//                if (arr[j] % i == 0)
//                {
//                    arr[j] = 0;
//                }
//            }
//        }
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//                printf("%d ", arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    printf("%.2f\n", count * 100.0 / (m * n));
//    return 0;
//}