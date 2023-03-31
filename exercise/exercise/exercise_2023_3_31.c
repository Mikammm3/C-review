#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//typedef struct Info
//{
//    char num[17];
//    int mn;
//    int sn;
//}Info;
//
//int main()
//{
//    int N = 0;
//    Info info[1000] = { 0 };
//    scanf("%d", &N);
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%s %d %d", info[i].num, &(info[i].mn), &(info[i].sn));
//    }
//    int find = 0;
//    scanf("%d", &find);
//    for (i = 0; i < find; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        for (int j = 0; j < N; j++)
//        {
//            if (info[j].mn == tmp)
//            {
//                printf("%s %d\n", info[j].num, info[j].sn);
//                break;
//            }
//        }
//    }
//    return 0;
//}