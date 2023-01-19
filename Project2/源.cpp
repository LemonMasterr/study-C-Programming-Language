#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//int main(void)
//{
//	printf("Gustav Mahler\n");
//	printf("Gustav\n");
//	printf("Mahler\n");
//	printf("Gustav Mahler\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	int days = 0;
//	printf("how old are you?\n");
//	scanf("%d", &age);
//	days = 365 * age;
//	printf("%d",days);
//	return 0;
//}

//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}

//int main()
//{
//	int toes;
//	toes = 10;
//	printf("toes的值为：%d\n", toes);
//	printf("toes的两倍是：%d\n", 2 * toes);
//	printf("toes的平方是：%d\n", toes * toes);
//	return 0;
//}

//int main()
//{
//	printf("%d", 077);
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 66);
//	float a = 64.25F;
//	printf("%f\n", a);
//	printf("%e\n", a);
//	printf("%.2a\n", a);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	float b = a * 3.156E7;
//	printf("%e", b);
//	return 0;
//}

//int main()
//{
//	char a[3];
//	char b[3];
//	printf("please input your name and first name\n");
//	scanf("%s %s", &a,&b);
//	printf("hello dear %s,%s\n", a, b);
//	return 0;
//}

//int main()
//{
//	char a[3];
//	char b[3];
//	scanf("%s %s", a, b);
//	int c = strlen(a);
//	printf("%s %*s", a, (3+c), b);
//	return 0;
//}

//int main()
//{
//	float a;
//	float b;
//	float c;
//	printf("please input your file's size(MB) and your download speed(MB/s)\n");
//	scanf("%f %f", &a, &b);
//	c = a / b;
//	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.", b, a, c);
//	return 0;
//}

//int main()
//{
//	char a[3];
//	char b[3];
//	int c, d;
//	scanf("%s %s", a, b);
//	c = printf("%s", a);
//	printf(" ");
//	d = printf("%s", b);
//	printf("\n%*d %*d",c, c, d, d);
//	return 0;
//}

//int main()
//{
//	const int A = 60;
//	int min;
//	int min2;
//	int hour;
//	printf("please input the minute.\n");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		min2 = min % A;
//		hour = min / A;
//		printf("the time is %d hours and %d mins\n", hour, min2);
//		printf("intput another mins.\n");
//		scanf("%d", &min);
//	}
//	printf("wrong!\n");
//	return 0;
//}

//int main()
//{
//	int A;
//	int B;
//	printf("please input a int number.\n");
//	scanf("%d", &A);
//	B = A;
//	while (B < A + 16)
//	{
//		printf("%d", B);
//		printf(" ");
//		B++;
//	}
//	return 0;
//}

//double A;
//double B;
//double squar()
//{
//	B = A * A;
//	printf("%lf", B);
//	return 0;
//}
//int main()
//{
//	printf("please input a number.\n");
//	scanf("%lf",&A);
//	squar();
//	return 0;
//}

//double Temperatures(double n);
//int main()
//{
//	double A;
//	printf("please input your 华氏温度\n");
//	while(scanf("%lf", &A) == 1)
//	{
//		Temperatures(A);
//		printf("input another.\n");
//		scanf("%lf", &A);
//	}
//	printf("GG\n");
//	return 0;
//}
//double Temperatures(double n)
//{
//	double B;
//	B = 5.0 / 9.0 * (n - 32.0);
//	printf("%lf\n", B);
//	return 0;
//}

//int main()
//{
//	int A, B;
//	for (A = 1; A <= 4; A++)
//	{
//		for (B = 1; B <= 8; B++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char A[30];
//	scanf("%s", A);
//	printf("%s", A);
//	return 0;
//}

//int main()
//{
//	char speak[26];
//	int A = 0;
//	int C = 0;
//	char M = 'a';
//	for (;A >= 0 && A<26; A++ , M++)
//	{
//		speak[A] = M;
//	}
//	for(;C >= 0 && C < 26; C++)
//	{
//		printf("%c", speak[C]);
//	}
//	return 0;
//}

//int main()
//{
//	char speak[26];
//	int A = 0;
//	int C = 0;
//	int M = 97;
//	for (; A >= 0 && A < 26; A++, M++)
//	{
//		speak[A] = M;
//	}
//	for (; C >= 0 && C < 26; C++)
//	{
//		printf("%c", speak[C]);
//	}
//	return 0;
//}

//int main()
//{
//	int A, B;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= A; B++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char speak = 'F';
//	int A, B;
//	for (A = 1; A <= 6; A++)
//	{
//		for (B = 1,speak = 'F'; B <= A; B++,speak--)
//		{
//			printf("%c", speak);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char XQC[2];
//	char BBC = 'A';
//	int HIV,HPV,FUCK;
//	int MVP = 1;
//	int OMG = 2;
//	printf("please input core char which u want.\n");
//	int A = scanf("%c", XQC);
//	for (HPV = 1; A == 1 && HPV <= 5; HPV++)
//	{
//		for (FUCK = 4; FUCK >= HPV; FUCK--)
//		{
//			printf(" ");
//		}
//		for (BBC = 'A', HIV = 1; HIV <= HPV; BBC++, HIV++)
//		{
//			printf("%c",BBC);
//		}
//		BBC--;
//		for (; BBC >= 'B';)
//		{
//			BBC--;
//			printf("%c", BBC);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char speak[20];
//	printf("please input a word.\n");
//	scanf("%s", speak);
//	int num = strlen(speak);
//	for (; num >= 0; num--)
//	{
//		printf("%c", speak[num]);
//	}
//	return 0;
//}

//int main()
//{
//	long double num1, num2;
//	printf("please input the first num.\n");
//	int A = scanf("%lf", &num1);
//	printf("the second num\n");
//	int B = scanf("%lf", &num2);
//	for (;A + B==2;)
//	{
//		printf("%lf\n", (num1 - num2) / (num1 * num2));
//		printf("please input the first num.\n");
//		scanf("%lf", &num1);
//		printf("the second num\n");
//		scanf("%lf", &num2);
//	}
//	printf("wrong!");
//	return 0;
//}

//int main()
//{
//	double A[8];
//	double B[8];
//	int C,D,E,F;
//	double M = 0;
//	printf("please input eight nums\n");
//	for (C = 0; C <= 7; C++)
//	{
//		scanf("%lf", &A[C]);
//		printf("another num\n");
//	}
//	B[0] = A[0];
//	for (D =1 , E = 1;E<=D && E<8;E++,D++)
//	{
//		B[D] = A[E] + B[D-1];
//	}
//	printf("ok\n");
//	for (F = 0; F <= 7; F++)
//	{
//		printf("%lf\n", B[F]);
//	}
//	return 0;
//}

//int main()
//{
//	char alpha;
//	int A = 0, B = 0 , C = 0;
//	printf("please input something . (use # to stop)\n");
//	alpha = getchar();
//	getchar();
//	while (alpha != '#')
//	{
//		if (alpha == '\n')
//		{
//			A++;
//		}
//		else if (alpha == ' ')
//		{
//			B++;
//		}
//		else
//		{
//			C++;
//		}
//		printf("enter's times is %d \n blank's times is %d\n others %d\n",A,B,C);
//		printf("again please.\n");
//		alpha = getchar();
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int A = 0, B, C;
//	char D;
//	printf("please something or input # to stop.\n");
//	D = getchar();
//	getchar();
//	while (D != '#')
//	{
//		if (D == '\n')
//		{
//			printf("\\n / %d", D);
//			A++;
//		}
//		else
//		{
//			printf("%c / %d", D, D);
//			A++;
//		}
//		if (A == 7)
//		{
//			printf("\n");
//		}
//		D = getchar();
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	int counter = 0;
//	printf("please");
//	ch = getchar();
//	getchar();
//	while ( ch != '#')
//	{
//		if (counter++ % 8 == 0)
//			printf("\n");
//		if (ch == '\n')
//			printf("\\n / %03d", ch);
//		if (ch == '\t')
//			printf("\\t / %03d", ch);
//		else printf("%c / %03d", ch, ch);
//		ch = getchar();
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	char B;
//	B = getchar();
//	getchar();
//	while (B != '#')
//	{
//		if (B == '!')
//		{
//			printf("?");
//			A++;
//		}
//
//		else if (B == '!!')
//		{
//			printf("!");
//			A++;
//		}
//		printf("%d", A);
//		B = getchar();
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int alpha;
//	int count = 0,Count= 0;
//	while ((alpha = getchar()) != EOF)
//	{
//		if (alpha == '\n')
//			continue;
//		else if (islower((char)alpha))
//			count++;
//		else if (isupper((char)alpha))
//			Count++;
//		else
//			;
//	}
//	printf("low is %d up is %d", count, Count);
//	return 0;
//}

//int main()
//{
//	int ch, num = 0;
//	while ((ch = getchar()) != EOF)
//		{
//			if (ch == '\n' || ch == ' ')
//				break;
//			else if (ch >= 65 && ch <= 122)
//				num++;
//		}
//	printf("this word's num is %d", num);
//	return 0;
//}

//int main()
//{
//	int ch, num = 0, words = 0;
//		printf("ok then , input words\n");
//		while ((ch = getchar()) != EOF)
//		{
//			if (ch == '\n' || ch == ' ' || ch == '.' || ch == ',')
//				words++;
//			else if (isalpha((char)ch))
//				num++;
//		}
//		float A = 1.0 * num / words;
//		printf("this word's num is %d , %f\n", num, A);
//	return 0;
//}

//int main()
//{
//	char alpha1;
//	int count = 1;
//	void choice(char A);
//	do
//	{
//		printf("Enter the operation of your choice:\n");
//		printf("a.add              s.subtract\n");
//		printf("m.multiply         d.divide\n");
//		printf("q.quit\n");
//		alpha1 = getchar();
//		while (getchar() != '\n')
//			continue;
//		choice(alpha1);
//	} while (alpha1 != 'q');
//	printf("byebye");
//	return 0;
//}
//void choice(char A)
//{
//	float num1, num2;
//	switch (A)
//	{
//	case 'a':
//	{
//		printf("please input two nums\n");
//		printf("the first num is:");
//		scanf("%f", &num1);
//		printf("\nthe second num is:");
//		scanf("%f", &num2);
//		printf("%f + %f = %f\n", num1, num2, num1 + num2);
//		break;
//	}
//	case 's':
//	{
//		printf("please input two nums\n");
//		printf("the first num is:");
//		scanf("%f", &num1);
//		printf("\nthe second num is:");
//		scanf("%f", &num2);
//		printf("%f - %f = %f\n", num1, num2, num1 - num2);
//		break;
//	}
//	case 'm':
//	{
//		printf("please input two nums\n");
//		printf("the first num is:");
//		scanf("%f", &num1);
//		printf("\nthe second num is:");
//		scanf("%f", &num2);
//		printf("%f * %f = %f\n", num1, num2, num1 * num2);
//		break;
//	}
//	case 'd':
//	{
//		printf("please input two nums\n");
//		printf("the first num is:");
//		scanf("%f", &num1);
//		printf("\nthe second num is:");
//		scanf("%f", &num2);
//		if (num2 == 0)
//		{
//			printf("the second num could not be zero\n");
//		}
//		else 
//		{
//			printf("%f / %f = %f\n", num1, num2, num1 / num2);
//		}
//		break;
//	}
//	case 'q':
//		break;
//	case'\n':
//		break;
//	default:
//	{
//		printf("wrong! please tye again\n");
//		break;
//	}
//	}
//}

