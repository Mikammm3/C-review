#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//typedef struct Info
//{
//    char name[20];
//    char birthday[20];
//    char sex[3];
//    char tele1[20];//¹Ì¶¨
//    char tele2[20];//ÒÆ¶¯
//}Info;
//
//int main()
//{
//    Info info[10];
//    int N = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%s %s %s %s %s", info[i].name,
//            info[i].birthday, info[i].sex,
//            info[i].tele1, info[i].tele2);
//    }
//    int k = 0;
//    scanf("%d", &k);
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        if (tmp >= 0 && tmp <= N - 1)
//        {
//            printf("%s %s %s %s %s\n", info[tmp].name,
//                info[tmp].tele1, info[tmp].tele2,
//                info[tmp].sex, info[tmp].birthday);
//        }
//        else
//        {
//            printf("Not Found\n");
//        }
//    }
//    return 0;
//}