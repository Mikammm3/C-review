#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[10001] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    int cnt[4] = { 0 };
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] == 'G' || arr[i] == 'g')
//            cnt[0] += 1;
//        else if (arr[i] == 'P' || arr[i] == 'p')
//            cnt[1] += 1;
//        else if (arr[i] == 'L' || arr[i] == 'l')
//            cnt[2] += 1;
//        else if (arr[i] == 'T' || arr[i] == 't')
//            cnt[3] += 1;
//    }
//    while (1)
//    {
//        if (cnt[0] != 0)
//        {
//            printf("G");
//            cnt[0]--;
//        }
//        if (cnt[1] != 0)
//        {
//            printf("P");
//            cnt[1]--;
//        }
//        if (cnt[2] != 0)
//        {
//            printf("L");
//            cnt[2]--;
//        }
//        if (cnt[3] != 0)
//        {
//            printf("T");
//            cnt[3]--;
//        }
//        if (cnt[0] + cnt[1] + cnt[2] + cnt[3] == 0)
//            break;
//    }
//    return 0;
//}