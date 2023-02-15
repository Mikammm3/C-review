#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>

//int is_prime(int n)
//{
//    int i = 0;
//    for (i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//            break;
//    }
//    if (i >= n)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
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



#include <stdio.h>

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



//int main()
//{
//    int y, m, d;
//    scanf("%d %d %d", &y, &m, &d);
//    printf("%d/%d/%d\n", d, m, y);
//    return 0;
//}