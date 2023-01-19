#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    char arr[101] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int flag1 = 0;
//        int flag2 = 0;
//        int flag3 = 0;
//        scanf("%s", arr);
//        int sz = strlen(arr);
//        if ((arr[0] >= '0' && arr[0] <= '9') || sz < 8)
//        {
//            printf("NO\n");
//            continue;
//        }
//        for (j = 0; j < sz; j++)
//        {
//            if (arr[j] >= 'a' && arr[j] <= 'z')
//                flag1 = 1;
//            else if (arr[j] >= 'A' && arr[j] <= 'Z')
//                flag2 = 1;
//            else if (arr[j] >= '0' && arr[j] <= '9')
//                flag3 = 1;
//        }
//        if ((flag1 + flag2 + flag3) >= 2)
//            printf("YES\n");
//        else
//        {
//            printf("NO\n");
//            continue;
//        }
//
//    }
//    return 0;
//}