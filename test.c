#define  _CRT_SECURE_NO_WARNINGS 1
//���������� + - * /
#include <stdio.h>
int main()
{
	float a = 6.0f / 5;
	printf("%lf\n", a);

	int b = 6 % 5;
	printf("%d\n", b);
	return 0;
}


��λ������  << (����)       >> (����)
#include <stdio.h>
int main()
{
	int a = -2;
	//�ƶ�����a�Ķ�����λ (��߶������ұ߲�0)
	int b = a << 3;
	printf("b = %d\n", b);   //  -16  �ƶ���λ��*2�ļ��η�
	return 0;
}

int main()
{
	int a = -5;
	//�ƶ�����a�Ķ�����λ
	int b = a >> 1;
	printf("b = %d\n", b);   // -3  �����ԭֵ�ķ���λ���䣬�ұ߶��� ���������ƣ�
	return 0;
}


λ������  �����ǵĲ�����������������
& ��λ��   (������)
| ��λ��   (������)
^ ��λ��� (������) �� ��ͬΪ0������Ϊ1
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

���������������Ҳ�ʹ�õ�������
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
	printf("%d\n", sizeof(a = b + 1));   //2   ����������
	printf("%d\n", a = b + 1);           //6
	printf("%d\n", a);                   //6
	return 0;
}

  ~  ��һ�����Ķ����ƽ��а�λȡ��
#include <stdio.h>
int main()
{
	int a = -1;         //11111111
	int b = ~a;         //00000000
	printf("%d\n", b);  //0
	return 0;
}


&  ȡ��ַ������    
*  �����ò�����----��ӷ��ʲ�����
#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);  //000000F9326FF654
	int* pa = &a;        //pa��һ��ָ�������������ŵ�ַ
	printf("%p\n", pa);  //000000F9326FF654
	*pa = 20;
	printf("%d\n", a);  //20
	return 0;
}


���鴫�δ�����������Ԫ�صĵ�ַ

ǿ������ת��
#include <stdio.h>
int main()
{
	int a = 3.14;
	printf("%d\n", a);  //3
	int b = (int)3.14;
	printf("%d\n", b);  //3
	double c = (int)3.14;
	printf("%lf\n", c);  //3.000000  ʵ��Ϊint
	return 0;
}

  &&  ||      ͬ��Ϊ�棬ͬ��Ϊ��
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
	i = a++ && ++b && d++;                                //a=0,����Ĳ���������
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
	i = a++ || ++b || d++;                                //���Ϊ�棬�ұߵĲ���������
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);   //1,3,3,4   
	return 0;
}


����������/��Ŀ������    (���ʽ1 �� ���ʽ2  �����ʽ3)
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 9;
	int max = (a > b ? a : b);
	printf("%d\n", max);    //1
	return 0;
}

//�ṹ��Ա���ʲ�����  
//   .      �ṹ��.��Ա��
//   ->
#include <stdio.h>
struct book            //����һ���Զ�������
{
	char name[20];
	char id[20];
	int price;
};
int main()

{
	struct book a = { "C����","12w3243",200 };
	printf("%s,%s,%d \n", a.name, a.id, a.price);
	struct book* pb = &a;
	printf("%s,%s,%d \n", pb->name, pb->id, pb->price);  //	�����->��->*Ӧ���� "struct book" ������ָ������	


	return 0;
}



















