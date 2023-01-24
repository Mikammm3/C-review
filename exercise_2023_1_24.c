#define _CRT_SECURE_NO_WARNINGS 1

//int IsDivisor(int n)
//{
//    int flag = 0;
//    int count = 0;
//    int N = n;
//    while (N)
//    {
//        count++;
//        int ret = N % 10;
//        if (ret == 0)
//            return 0;
//        else
//        {
//            if (n % ret == 0)
//            {
//                flag++;
//                N /= 10;
//            }
//            else
//                return 0;
//        }
//    }
//    if (count == flag)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//    int i = 0;
//    int j = 0;
//    int start = 0;
//    int* arr = (int*)malloc((right - left) * sizeof(int));
//    for (i = left; i <= right; i++)
//    {
//        int ret = IsDivisor(i);
//        if (ret == 1)
//        {
//            arr[start++] = i;
//        }
//    }
//    *returnSize = start;
//    return arr;
//}


