#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    int monkey[1000] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        monkey[i] = i + 1;
//    }
//    int number = n;
//    int pos = 0;
//    int cnt = 1;
//    while (number > 1)
//    {
//        if (monkey[pos] > 0)
//        {
//            if (cnt != 3)
//            {
//                cnt++;
//                pos = (pos + 1) % n;
//            }
//            else
//            {
//                number--;
//                monkey[pos] = 0;
//                pos = (pos + 1) % n;
//                cnt = 1;
//            }
//        }
//        else
//        {
//            pos = (pos + 1) % n;
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (monkey[i] > 0)
//            printf("%d\n", monkey[i]);
//    }
//    return 0;
//}