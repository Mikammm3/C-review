#define _CRT_SECURE_NO_WARNINGS 1


//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[500001] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    int j = 0;
//    int k = 0;
//    int i = 0;
//    int count = 0;
//    for (i = len - 1; i >= 0; i--)
//    {
//        if (arr[i] != ' ')
//        {
//            for (j = i; j >= 0; j--)
//            {
//                if (arr[j] == ' ')
//                    break;
//            }
//            if (count > 0)
//                printf(" ");
//            for (k = j + 1; k <= i; k++)
//            {
//                printf("%c", arr[k]);
//            }
//            i = j;
//            count++;
//        }
//    }
//    return 0;
//}