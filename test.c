#define  _CRT_SECURE_NO_WARNINGS 1
//���������� + - * /
#include <stdio.h>
//int main()
//{
//	float a = 6.0f / 5;
//	printf("%lf\n", a);
//
//	int b = 6 % 5;
//	printf("%d\n", b);
//	return 0;
//}


//��λ������  << (����)       >> (����)
//#include <stdio.h>
//int main()
//{
//	int a = -2;
//	//�ƶ�����a�Ķ�����λ (��߶������ұ߲�0)
//	int b = a << 3;
//	printf("b = %d\n", b);   //  -16  �ƶ���λ��*2�ļ��η�
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	//�ƶ�����a�Ķ�����λ
//	int b = a >> 1;
//	printf("b = %d\n", b);   // -3  �����ԭֵ�ķ���λ���䣬�ұ߶��� ���������ƣ�
//	return 0;
//}


//λ������  �����ǵĲ�����������������
//& ��λ��   (������)
//| ��λ��   (������)
//^ ��λ��� (������) �� ��ͬΪ0������Ϊ1
#include <stdio.h>
//int main()
//{
//	int a = 3;      //0011
//	int b = 5;      //0101
//
//	int c = a & b;  //0001
//
//	int d = a | b;  //0111
//
//	int e = a ^ b;  //0110
//
//	printf("c = %d\n", c);  //1
//	printf("d = %d\n", d);  //7
//	printf("e = %d\n", e);  //6
//	return 0;
//}

//���������������Ҳ�ʹ�õ�������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);  //a = 5,b = 3
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d,b = %d\n", a, b);  //a = 5,b = 3
	return 0;
}






