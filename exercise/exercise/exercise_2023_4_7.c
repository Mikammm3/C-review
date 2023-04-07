#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//int main()
//{
//    char A[10001] = { 0 };
//    char B[10001] = { 0 };
//    gets(A);
//    gets(B);
//    for (int i = 0; i < strlen(A); i++)
//    {
//        int flag = 1;
//        for (int j = 0; j < strlen(B); j++)
//        {
//            if (A[i] == B[j])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("%c", A[i]);
//    }
//    return 0;
//}