#define _CRT_SECURE_NO_WARNINGS 1


////ģ��ʵ��atoi
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <limits.h>
//int my_atoi(const char* str)
//{
//	assert(str);
//	//�Ƴ���ͷ�ո�
//	while (*str == ' ')
//	{
//		str++;
//	}
//	//��¼������
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
//	// ��Ϊֻ��ʹ�� 32 λ int����˽� ret �� 10 ������ INT_MAX �ȽϿ��ܻ����
//	// ���ʹ�� ret �� INT_MAX/10 �Ƚ�
//	int ret = 0;
//	int tmp = INT_MAX / 10;
//	while (*str >= '0' && *str <= '9')
//	{
//		int dig = *str - '0';
//		if (ret < tmp || (ret == tmp && dig < 8))//û���
//		{
//			// �� ret �� div С���� ret * 10 + dig Ҳһ��С�� INT_MAX���������
//			// �� ret �� div ��ȣ�ֻ�� dig �� 8 Сʱ�������
//			// �˴�������Ҫ�����ֿ����ۣ�INT_MAX ��λ�� 7��INT_MIN ��λ�� 8
//			// -INT_MIN �� int �л�������� dig == 8 ʱֱ�ӵ����������
//			ret = ret * 10 + dig;
//			str++;
//		}
//		//���������Է���
//		else
//			return flag == 1 ? INT_MAX : INT_MIN;//���
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
////˼·������������λ�����ƶ�һλ
////     ������ż��λ�����ƶ�һλ
////     �Ϳ��Դﵽ��������λż��λ
//
//#define SWAP(n) ((((n)&0xaaaaaaaa)>>1)+(((n)&0x55555555)<<1))
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", SWAP(n));
//	//10111111111110000000000000000000 ����n�����
//	//��n&��������ܵõ����е�ż��λ
//	//10101010101010101010101010101010 -0xaaaaaaaa
//	// 
//	//10111111111110000000000000000000
//	//��n&��������ܵõ����е�����λ
//	//01010101010101010101010101010101 -0x55555555
//	return 0;
//}