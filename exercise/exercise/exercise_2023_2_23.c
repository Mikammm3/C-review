#define _CRT_SECURE_NO_WARNINGS 1


//×Ö·û´®Ðý×ª½á¹û
//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//int judge_str(char* p1, char* p2)
//{
//	assert(p1 && p2);
//	int len = strlen(p1);
//	int i = 0;
//	for (i = 1; i <= len; i++)
//	{
//		char tmp = p1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(p1 + j) = *(p1 + j + 1);
//		}
//		*(p1 + len - 1) = tmp;
//		if (strcmp(p1, p2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	scanf("%s%s", arr1, arr2);
//	int ret = judge_str(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}