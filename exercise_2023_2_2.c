#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//    int arr[51] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    for (i = n - 1; i >= 0; i--)
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
//    if (m < arr[0])
//        arr[0] = m;
//    for (i = 0; i <= n; i++)
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
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//
//    }
//    printf("%d\n", sum);
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] <= arr[i + 1])
//            flag1++;
//        if (arr[i] >= arr[i + 1])
//            flag2++;
//    }
//    if (flag1 == n - 1 || flag2 == n - 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int d = 0;
//    scanf("%d", &d);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == d)
//        {
//            arr[i] = 0;
//        }
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] >= arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] <= arr[i - 1])
//                flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 == 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int d = 0;
//    scanf("%d", &d);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != d)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
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
//    int arr[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[2000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n + m, sizeof(int), cmp_int);
//    for (int i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


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