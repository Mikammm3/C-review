#define _CRT_SECURE_NO_WARNINGS 1


////模拟实现atoi
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <limits.h>
//int my_atoi(const char* str)
//{
//	assert(str);
//	//移除开头空格
//	while (*str == ' ')
//	{
//		str++;
//	}
//	//记录正负性
//	int flag = 1;
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		str++;
//	}
//	// 因为只能使用 32 位 int，因此将 ret 乘 10 后再与 INT_MAX 比较可能会溢出
//	// 因此使用 ret 与 INT_MAX/10 比较
//	int ret = 0;
//	int tmp = INT_MAX / 10;
//	while (*str >= '0' && *str <= '9')
//	{
//		int dig = *str - '0';
//		if (ret < tmp || (ret == tmp && dig < 8))//没溢出
//		{
//			// 若 ret 比 div 小，则 ret * 10 + dig 也一定小于 INT_MAX，不会溢出
//			// 若 ret 与 div 相等，只有 dig 比 8 小时不会溢出
//			// 此处本来需要正负分开讨论，INT_MAX 个位是 7，INT_MIN 个位是 8
//			// -INT_MIN 在 int 中会溢出，当 dig == 8 时直接当作溢出处理
//			ret = ret * 10 + dig;
//			str++;
//		}
//		//根据正负性返回
//		else
//			return flag == 1 ? INT_MAX : INT_MIN;//溢出
//	}
//	return flag * ret;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int ret = my_atoi(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>
//struct S
//{
//	int n;
//	char name[20];
//	float f;
//};
//
//#define OFFSETOF(type,name)  (size_t)&(((type*)0)->name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, n));
//	return 0;
//}



//#include <stdio.h>
////思路：将所有奇数位向左移动一位
////     将所有偶数位向右移动一位
////     就可以达到交换奇数位偶数位
//
//#define SWAP(n) ((((n)&0xaaaaaaaa)>>1)+(((n)&0x55555555)<<1))
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", SWAP(n));
//	//10111111111110000000000000000000 假设n是这个
//	//将n&下面这个能得到所有的偶数位
//	//10101010101010101010101010101010 -0xaaaaaaaa
//	// 
//	//10111111111110000000000000000000
//	//将n&下面这个能得到所有的奇数位
//	//01010101010101010101010101010101 -0x55555555
//	return 0;
//}