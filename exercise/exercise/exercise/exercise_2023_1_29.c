#define _CRT_SECURE_NO_WARNINGS 1


//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//    int* arr = (int*)malloc(sizeof(int) * 2);
//
//    int j = 0;
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] > target)
//            continue;
//        for (j = i + 1; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target)
//            {
//                *returnSize = 2;
//                arr[0] = i + 1;
//                arr[1] = j + 1;
//                return arr;
//            }
//        }
//    }
//    *returnSize = 0;
//    return 0;
//}