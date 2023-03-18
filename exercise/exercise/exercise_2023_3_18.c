#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//
//int main()
//{
//    char arr[60] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    int count = 0;
//    double e = 1;
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] == '2')
//            count++;
//    }
//    int ac = len;
//    if (arr[0] == '-')
//    {
//        ac--;
//        e *= 1.5;
//    }
//    if (arr[len - 1] % 2 == 0)
//        e *= 2.0;
//    printf("%.02lf%\n", (count * 1.0 / ac) * e * 100);
//    return 0;
//}