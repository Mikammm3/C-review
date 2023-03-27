#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
////找单身狗
//int main()
//{
//	int tmp = 0;
//	int arr[10] = { 1,1,2,2,3,4,4,5,5 };
//	for (int i = 0; i < 10; i++)
//	{
//		tmp ^= arr[i];
//	}
//	printf("单身狗是%d\n", tmp);
//	return 0;
//}




//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
////模拟实现strncpy
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	int len = strlen(src);
//	while (num)
//	{
//		if (*src != '\0')
//		{
//			*dest++ = *src++;
//		}
//		else
//		{
//			*dest++ = '\0';
//		}
//		num--;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[20] = "\0xxxxxxxxxxxxx";
//	char* tmp = my_strncpy(arr2, arr1, 5);
//	printf("%s\n", tmp);
//	return 0;
//}




//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////模拟实现strncat
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	int len = strlen(src);
//	if (num > len)
//		num = len;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num)
//	{
//		*dest++ = *src++;
//		num--;
//	}
//	*dest = '\0';
//	return tmp;
//}
//
//int main()
//{
//	char arr[20] = "hehe\0xxxxxxx";
//	char* tmp = my_strncat(arr, arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}



