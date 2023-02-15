#define _CRT_SECURE_NO_WARNINGS 1


//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int i = 0;
//    int count = 0;
//    int mcount = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            count++;
//        }
//        else
//        {
//            if (count > mcount)
//            {
//                mcount = count;
//            }
//            count = 0;
//        }
//    }
//    if (count > mcount)
//        mcount = count;
//    return mcount;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//                sum += j;
//        }
//        if (sum == i)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}



//#include <stdio.h>
//int IsPerfectNumber(int x)
//{
//    int i = 0;
//    int sum = 0;
//    for (i = 1; i < x; i++)
//    {
//        if (x % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == x)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (IsPerfectNumber(i))
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}