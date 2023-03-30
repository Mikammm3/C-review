#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>

//int main()
//{
//    char num[20] = { 0 };
//    scanf("%s", num);
//    if (strcmp(num, "0") == 0)
//    {
//        printf("a\n");
//        return 0;
//    }
//    char arr[] = "0SBQWSBQY";
//    int len = strlen(num);
//    int i = 0;
//    int flag = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (num[i] != '0')
//        {
//            flag = 1;
//            printf("%c", num[i] + 49);
//            if (arr[len - i - 1] != '0')
//                printf("%c", arr[len - i - 1]);
//        }
//        //69010
//        else
//        {
//            ;
//        }
//    }
//    return 0;
//}




////PTA 7-35
//#include <stdio.h>
//
//int max(int x, int y)
//{
//    int c = 0;
//    while (c = x % y)
//    {
//        x = y;
//        y = c;
//    }
//    return y;
//}
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int sumA = 0;
//    int sumB = 1;
//    for (int i = 0; i < N; i++)
//    {
//        int a = 0;
//        int b = 1;
//        scanf("%d/%d", &a, &b);
//        sumA *= b;
//        sumA += a * sumB;
//        sumB *= b;
//        int tmp = max(sumA, sumB);
//        sumA /= tmp;
//        sumB /= tmp;
//        if (i == N - 1)
//        {
//            sumB *= N;
//            int tmp = max(sumA, sumB);
//            sumA /= tmp;
//            sumB /= tmp;
//            break;
//        }
//    }
//    if (sumA == 0)
//    {
//        printf("0\n");
//    }
//    else if (sumB == 1)
//    {
//        printf("%d\n", sumA);
//    }
//    else
//    {
//        printf("%d/%d\n", sumA, sumB);
//    }
//    return 0;
//}