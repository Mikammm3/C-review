#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int cnt = 0;
//    int num = 0;
//    int arr[1001] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        for (int j = 0; j < tmp; j++)
//        {
//            int ret = 0;
//            scanf("%d", &ret);
//            arr[ret]++;
//            if (arr[ret] > cnt)
//            {
//                cnt = arr[ret];
//                num = ret;
//            }
//        }
//    }
//    for (int i = 0; i < 1001; i++)
//    {
//        if (arr[i] == cnt && i > num)
//            num = i;
//    }
//    printf("%d %d\n", num, cnt);
//    return 0;
//}