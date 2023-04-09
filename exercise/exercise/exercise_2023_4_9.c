#define _CRT_SECURE_NO_WARNINGS 1



//BC146 添加逗号
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char num[14] = { 0 };
//    int i = 0;//遍历数组
//    int k = 0;//添加，
//    while (n)
//    {
//        if (k != 0 && k % 3 == 0)
//        {
//            num[i++] = ',';
//        }
//        num[i++] = n % 10 + '0';
//        k++;
//        n /= 10;
//    }
//    for (--i; i >= 0; i--)
//    {
//        printf("%c", num[i]);
//    }
//    return 0;
//}



//OR63 删除公共字符
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr1[100] = { 0 };
//    char arr2[100] = { 0 };
//    gets(arr1);
//    gets(arr2);
//    for (int i = 0; i < strlen(arr1); i++)
//    {
//        int flag = 1;
//        for (int j = 0; j < strlen(arr2); j++)
//        {
//            if (arr1[i] == arr2[j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("%c", arr1[i]);
//    }
//    return 0;
//}