#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
////ͳ��2������1�ĸ���
//int count_one_bit(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_one_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}





//#include <stdio.h>
////ͳ��2������1�ĸ���
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_one_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}



//#include <stdio.h>
////ͳ��2������1�ĸ���
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);//n=n&(n-1),ÿִ��һ�����ʽ�ӣ�n�Ķ����������ұߵ�һ��1�ͻ���ʧ
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_one_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}



////��������m��n�У��ж��ٸ�������λ��ͬ
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//��������m��n�У��ж��ٸ�������λ��ͬ
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret &= (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//����ж�һ�����ǲ���2���ݴη�
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ((num & (num - 1)) == 0)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

