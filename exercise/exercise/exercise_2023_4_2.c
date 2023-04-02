#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int n = 0;
//    int arr[100005] = { 0 };
//    scanf("%d %d", &a, &n);
//    if (n == 0)
//    {
//        printf("0");
//        return 0;
//    }
//    int i = 0;
//    int t = 0;
//    for (i = n; i > 1; i--)
//    {
//        arr[i] = a * i + t;
//        t = arr[i] / 10;//进位的数
//        arr[i] %= 10;
//    }
//    arr[1] = a + t;
//    for (i = 1; i <= n; i++)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}