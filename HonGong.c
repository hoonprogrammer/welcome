#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *pa, int*pb);
/*
    int scoreboard(int a,
	int b,
	int c,
	int d,
	int e,
	int cmd);
*/
/*
void fruit(int count);
/* �Լ� ���� 
int sum(int x, int y);

void print_char(char ch, int count);
*/

int main(void)
{
	int a = 10, b = 20;
	swap(&a, &b);
	printf("%d, %d\n", a, b);

	/*������
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	printf("\n\n");

	printf("pa�� �ּ� : 0x%08x\n", *pa);
	printf("pa�� ���� : 0x%08x\n", *pa);
	printf("pa�� ����Ű�� ���� ������ : 0x%08x\n", *pa);
	printf("a�� �ּ� : 0x%08x\n", &a);
	printf("a�� ���� : 0x%08x\n", a);





	/* ������
	int a;
	int *pa;                                                                 // �ּҸ� ��� ���� ������ ����

	pa = &a;
	*pa = 10;  
	printf(" �����ͷ� a �� ��� : %d\n", *pa);
	printf(" ���������� a �� ��� : %d\n", a);
	printf("%u\n", &a);
     */
	/* 8��
	int score[5];
	int i;
	int total = 0;
	double average;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	average = scoreboard(score[0], score[1], score[2], score[3], score[4],1);
	total = scoreboard(score[0], score[1], score[2], score[3], score[4], 2);

	printf("%.1lf\n", average);
	printf("%d\n", total);
	*/
	/* �迭
	int score[5];
	int i;
	int total = 0;
	double average;

	for (i = 0; i < 5; i++)
	{
		scanf( "%d", &score[i] );
	}
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	average = total / 5;

	
	for (i = 0; i < 5; i++)
	{
		printf("���� : %3d\n", score[i]);
	}

	printf("\n\n");

	printf("��� : %.1lf\n", average);\

	/* �迭

	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	/*
	fruit(1);
	/*
	print_char('@', 5);

	/* �Լ� �̿�

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("%d\n", result);


	/* for loop ������ breakȰ��

	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
		printf("%d\n", sum);
	}
	/* do while ��

	int a = 1;
	do
	{
		a = a * 2; 
		printf("%d\n", a);
	} while (a < 10);

	/* for��

	int i, j;
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d X %d = %d\n", i, j, i*j);
		}
	}

	/*
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("%d\n", a);

	/*
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("%d\n", a);

	/*
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);



	/*
	int a = 10, b = 20, res;

	res = (a < b) ? a : b;
	printf("ū�� : %d\n", res);



	/*
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a));
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("�����ǰ������ ũ�� : %d\n", sizeof(1.5+3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));

	/*
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);

	printf("a = %d, b = %d\n", a, b);
	printf("a / b �� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf �� ��� : %d\n", res, a);
	
	/*
	int a = 10, b = 10;


	printf("a : %d\n", ++a);
	printf("b : %d\n", b--);

	/*
	double grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%lf", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);

	printf("%s�� ������ %.1lf�Դϴ�\n", name, grade);
	/*
	int a;

	scanf("%d", &a);
	printf("�Էµ� �� : %d\n", a);


	/*
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);
	*/
	system("pause");
	

	return 0;
}

void swap(int *pa, int  *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
/* ������ ���� �迭�� �Լ��� ����´ٸ�?

int scoreboard(int a,
						int b,
						int c,
						int d,
						int e,
						int cmd)
{
	int sum;
	int average;
	sum = a + b + c + d + e;
	if (cmd == 1)
	{
		average = sum / 5;
		return average;
	}
	else if (cmd == 2)
	{
		return sum;
	}
	else
	{
		printf("�Է°��� Ȯ���Ͻÿ�\n");
		return -1;
	}

}

*/

/* �����ڵ�
	int score[5];
	int total=0;
	double average;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}

	average = total / 5;

	scanf("%d", &num);

	if (num == 1)
	{
		printf("%.1lf", average);
	}
	else if (i == 2)
	{
		printf("%d", total);
	}
	else return 0;
}
*/

/*
void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);

}
	
/* �Լ� ����
void print_char(char ch, int count)
{
	int i;

	for (i = 0; i<count; i++)
	{
		printf("%c", ch);
	}
	return;
}

/* sum �Լ� ����
int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;

	///return (x+y);
}
*/