#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include<math.h>
//
//int is_prime(int n)
//{
//    int i = 0;
//    for (i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int count = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        int ret = 0;
//        ret = is_prime(i);
//        if (ret == 1)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1001] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i <= 1000; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", i);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000] = { 0 };
//    int i = 0;
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            int k = 0;
//            for (k = i; k < n - 1; k++)
//            {
//                arr[k] = arr[k + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}








//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int d = 0;
//    scanf("%d", &d);
//    for (int j = 0; j < n; j++)
//    {
//        if (arr[j] == d)
//        {
//            arr[j] = 0;
//        }
//    }
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            cnt++;
//    }
//    printf("%d\n", cnt);
//    for (int j = 0; j < n; j++)
//    {
//        if (arr[j] != 0)
//            printf("%d ", arr[j]);
//    }
//    return 0;
//}






//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == del)
//        {
//            for (int j = i; j < n - 1; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            n--;
//            i--;
//        }
//        else
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double arr[100] = { 0 };
//    double max = 0.0;
//    double min = 100.0;
//    double sum = 0.0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lf", &arr[i]);
//        sum += arr[i];
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("%.02lf %.02lf %.02lf\n", max, min, sum / n);
//    return 0;
//}



