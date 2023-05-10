#define  _CRT_SECURE_NO_WARNINGS 1
//算术操作符 + - * /
#include <stdio.h>
int main()
{
	float a = 6.0f / 5;
	printf("%lf\n", a);

	int b = 6 % 5;
	printf("%d\n", b);
	return 0;
}


移位操作符  << (左移)       >> (右移)
#include <stdio.h>
int main()
{
	int a = -2;
	//移动的是a的二进制位 (左边丢弃，右边补0)
	int b = a << 3;
	printf("b = %d\n", b);   //  -16  移动几位就*2的几次方
	return 0;
}

int main()
{
	int a = -5;
	//移动的是a的二进制位
	int b = a >> 1;
	printf("b = %d\n", b);   // -3  左边用原值的符号位补充，右边丢弃 （算术右移）
	return 0;
}


位操作符  （他们的操作数必须是整数）
& 按位与   (二进制)
| 按位或   (二进制)
^ 按位异或 (二进制) ： 相同为0，相异为1
#include <stdio.h>
int main()
{
	int a = 3;      //0011
	int b = 5;      //0101

	int c = a & b;  //0001

	int d = a | b;  //0111

	int e = a ^ b;  //0110

	printf("c = %d\n", c);  //1
	printf("d = %d\n", d);  //7
	printf("e = %d\n", e);  //6
	return 0;
}

交换两个数，并且不使用第三变量
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d,b = %d\n", a, b);  //a = 5,b = 3
	return 0;
}

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

sizeof
#include <stdio.h>
int main()
{
	short a = 3;
	int b = 5;
	printf("%d\n", sizeof(b = a + 1));   //4
	printf("%d\n", sizeof(a = b + 1));   //2   不参与运算
	printf("%d\n", a = b + 1);           //6
	printf("%d\n", a);                   //6
	return 0;
}

  ~  第一个数的二进制进行按位取反
#include <stdio.h>
int main()
{
	int a = -1;         //11111111
	int b = ~a;         //00000000
	printf("%d\n", b);  //0
	return 0;
}


&  取地址操作符    
*  解引用操作符----间接访问操作符
#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);  //000000F9326FF654
	int* pa = &a;        //pa是一个指针变量，用来存放地址
	printf("%p\n", pa);  //000000F9326FF654
	*pa = 20;
	printf("%d\n", a);  //20
	return 0;
}


数组传参传的是数组首元素的地址

强制类型转换
#include <stdio.h>
int main()
{
	int a = 3.14;
	printf("%d\n", a);  //3
	int b = (int)3.14;
	printf("%d\n", b);  //3
	double c = (int)3.14;
	printf("%lf\n", c);  //3.000000  实际为int
	return 0;
}

  &&  ||      同真为真，同假为假
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 0;
	if (a && b)
	{
		printf("hh");
	}
}

#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;                                //a=0,后面的不参与运算
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);   //1,2,3,4  
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ || ++b || d++;                                //左边为真，右边的不参与运算
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);   //1,3,3,4   
	return 0;
}


条件操作符/三目操作符    (表达式1 ？ 表达式2  ：表达式3)
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 9;
	int max = (a > b ? a : b);
	printf("%d\n", max);    //1
	return 0;
}

//结构成员访问操作符  
//   .      结构体.成员名
//   ->
#include <stdio.h>
struct book            //创建一个自定义类型
{
	char name[20];
	char id[20];
	int price;
};
int main()

{
	struct book a = { "C语言","12w3243",200 };
	printf("%s,%s,%d \n", a.name, a.id, a.price);
	struct book* pb = &a;
	printf("%s,%s,%d \n", pb->name, pb->id, pb->price);  //	运算符->或->*应用于 "struct book" 而不是指针类型	


	return 0;
}



















