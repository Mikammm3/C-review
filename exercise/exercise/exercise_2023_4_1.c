#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;//1
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}




#include <stdio.h>

//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) 
//	{
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n)
//			printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else 
//	{ 
//		// error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) 
//		{
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//	fp = NULL;
//}




//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
////找两只单身狗
//void find_single_dog(int arr[], int sz, int* p1, int* p2)
//{
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1 == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//		{
//			*p1 ^= arr[i];
//		}
//		else
//		{
//			*p2 ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int d1 = 0;
//	int d2 = 0;
//	find_single_dog(arr, sz, &d1, &d2);
//	printf("%d %d\n", d1, d2);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* tmp = dest;
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
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strncpy(arr1, arr1, 3);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	if (num > strlen(src))
//		num = strlen(src);
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
//int main()
//{
//	char arr[20] = "abc";
//	my_strncat(arr, arr, 3);
//	return 0;
//}