#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = 0;
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        ret ^= num;
//    }
//    printf("%d\n", ret);
//    return 0;
//}


//int findPeakElement(int* nums, int numsLen)
//{
//    int max = nums[0];
//    int flag = -1;
//    for (int i = 0; i < numsLen; i++)
//    {
//        if (nums[i] >= max)
//        {
//            max = nums[i];
//            flag = i;
//        }
//    }
//    return flag;
//}