#define _CRT_SECURE_NO_WARNINGS 1


////×Ö·û´®×óÐý
//#include <stdio.h>
//#include <string.h>
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len-1]=tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//×Ö·û´®×óÐý
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}