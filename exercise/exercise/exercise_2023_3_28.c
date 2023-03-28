#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char num[10] = "abcdefghij";
//    char w[] = "11SBQWY";
//    int arr[10] = { 0 };
//    int tmp = n;
//    int count = 0;
//    while (tmp)
//    {
//        arr[count] = tmp % 10;
//        count++;
//        tmp /= 10;
//    }
//    tmp = n;
//    int i = count - 1;
//    while (count)
//    {
//        int ret = pow(10, count - 1);
//        ret = tmp / ret % 10;
//        printf("%c", num[ret]);
//        if (count > 1)
//            printf("%c", w[count]);
//        int flag = 0;
//        for (i = count - 2; i >= 0; i--)
//        {
//            if (arr[i] != 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//            break;
//        count--;
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int arr[1000];
//    int i = 0;
//    int count1 = 0;//ÆæÊý
//    int count2 = 0;//Å¼Êý
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] % 2 == 0)
//            count2++;
//        else
//            count1++;
//    }
//    printf("%d %d\n", count1, count2);
//    return 0;
//}