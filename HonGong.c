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
/* 함수 선언 
int sum(int x, int y);

void print_char(char ch, int count);
*/

int main(void)
{
	int a = 10, b = 20;
	swap(&a, &b);
	printf("%d, %d\n", a, b);

	/*포인터
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	printf("\n\n");

	printf("pa의 주소 : 0x%08x\n", *pa);
	printf("pa의 내용 : 0x%08x\n", *pa);
	printf("pa가 가르키는 곳의 데이터 : 0x%08x\n", *pa);
	printf("a의 주소 : 0x%08x\n", &a);
	printf("a의 내용 : 0x%08x\n", a);





	/* 포인터
	int a;
	int *pa;                                                                 // 주소를 담기 위한 변수를 선언

	pa = &a;
	*pa = 10;  
	printf(" 포인터로 a 값 출력 : %d\n", *pa);
	printf(" 변수명으로 a 값 출력 : %d\n", a);
	printf("%u\n", &a);
     */
	/* 8장
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
	/* 배열
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
		printf("성적 : %3d\n", score[i]);
	}

	printf("\n\n");

	printf("평균 : %.1lf\n", average);\

	/* 배열

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

	/* 함수 이용

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("%d\n", result);


	/* for loop 에서의 break활용

	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
		printf("%d\n", sum);
	}
	/* do while 문

	int a = 1;
	do
	{
		a = a * 2; 
		printf("%d\n", a);
	} while (a < 10);

	/* for문

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
	printf("큰값 : %d\n", res);



	/*
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의결과값의 크기 : %d\n", sizeof(1.5+3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	/*
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);

	printf("a = %d, b = %d\n", a, b);
	printf("a / b 의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf 의 결과 : %d\n", res, a);
	
	/*
	int a = 10, b = 10;


	printf("a : %d\n", ++a);
	printf("b : %d\n", b--);

	/*
	double grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%lf", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);

	printf("%s의 학점은 %.1lf입니다\n", name, grade);
	/*
	int a;

	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);


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
/* 포인터 없이 배열을 함수로 끌어온다면?

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
		printf("입력값을 확인하시오\n");
		return -1;
	}

}

*/

/* 망한코드
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
	
/* 함수 선언
void print_char(char ch, int count)
{
	int i;

	for (i = 0; i<count; i++)
	{
		printf("%c", ch);
	}
	return;
}

/* sum 함수 선언
int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;

	///return (x+y);
}
*/