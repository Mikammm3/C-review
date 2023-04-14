#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//
//int main()
//{
//    int arr[50] = { 0 };
//    int flag[50] = { 0 };
//    char name[50][10] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d %s", &arr[i], name[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = n - 1; j > 0; j--)
//        {
//            if (arr[i] != arr[j] && flag[i] == 0 && flag[j] == 0)
//            {
//                printf("%s %s\n", name[i], name[j]);
//                flag[i] = 1;
//                flag[j] = 1;
//                break;
//            }
//        }
//    }
//    return 0;
//}