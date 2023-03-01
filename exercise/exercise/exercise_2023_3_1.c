#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int N = 0;
//    int K = 0;
//    scanf("%d %d", &N, &K);
//    //ÄÃ×ß'\n'
//    getchar();
//    char arr[100][11] = { 0 };
//    //´æµ¥´Ê
//    for (int i = 0; i < N; i++)
//    {
//        gets(arr[i]);
//    }
//    //Ã°ÅÝÅÅÐò
//    for (int i = 0; i < K; i++)
//    {
//        for (int j = 0; j < N - 1 - i; j++)
//        {
//            if (strcmp(arr[j], arr[j + 1]) > 0)
//            {
//                char tmp[11] = { 0 };
//                //½»»»
//                strcpy(tmp, arr[j]);
//                strcpy(arr[j], arr[j + 1]);
//                strcpy(arr[j + 1], tmp);
//            }
//        }
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        puts(arr[i]);
//    }
//    return 0;
//}