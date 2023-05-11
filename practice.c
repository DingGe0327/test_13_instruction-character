#define  _CRT_SECURE_NO_WARNINGS 1
//计算一个数的二进制里1的个数
#include <stdio.h>
int main()
{
	int a = 256;
	int j = 0;
	int count = 0;
	for (j = 0; j < 64; j++)
	{
		
		if (a & 1 == 1)
		{
			count++;
		}
		a = a >> 1;
	}
	printf("%d\n", count);
	return 0;
}

整形提升
#include <stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);   //-126		1000 0010 ->提升11111111 11111111 11111111 1000 0010 反码
	return 0;
}

//static修饰的变量只初始化一次
#include <stdio.h>   //问题代码
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() + fun() * fun();
	printf("%d\n", answer);
	return 0;
}







