#define  _CRT_SECURE_NO_WARNINGS 1
//算术操作符 + - * /
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


//移位操作符  << (左移)       >> (右移)
//#include <stdio.h>
//int main()
//{
//	int a = -2;
//	//移动的是a的二进制位 (左边丢弃，右边补0)
//	int b = a << 3;
//	printf("b = %d\n", b);   //  -16  移动几位就*2的几次方
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	//移动的是a的二进制位
//	int b = a >> 1;
//	printf("b = %d\n", b);   // -3  左边用原值的符号位补充，右边丢弃 （算术右移）
//	return 0;
//}


//位操作符  （他们的操作数必须是整数）
//& 按位与   (二进制)
//| 按位或   (二进制)
//^ 按位异或 (二进制) ： 相同为0，相异为1
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

//交换两个数，并且不使用第三变量
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






