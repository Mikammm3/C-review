#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");//这个输出
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//这个输出
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}


////字符串左旋
//#include<stdio.h>
//int main()
//{
//	char arr1[100] = { 0 };
//	scanf("%s", arr1);
//	int k = 0;
//	scanf("%d", &k);
//	char arr2[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (k)
//	{
//		arr2[j] = arr1[0];
//		for (i = 0; i < strlen(arr1) - 1; i++)
//		{
//			arr1[i] = arr1[i + 1];
//		}
//		arr1[i] = arr2[j];
//		k--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == n)
//			{
//				printf("找到了，下标是%d %d", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}