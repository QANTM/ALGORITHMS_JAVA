#define _CRT_SECURE_NO_WARNINGS

 

/*
*******************************************
     �õݹ�ʵ�ֽ׳�10��
*******************************************

*/



 
# include <stdio.h>
#include <stdlib.h>
int fact (int n) 
    { 
      if(n==1)  
           return(1);
      else 
           return(n*fact (n-1));
     } 


int main(void)
{
	int val;
	int i = 10;
	val = fact(i);
	printf("%d! = %d\n",i, val);

	system("pause");

	return 0;
}

 
 



/*
*******************************************
     ��ѭ��ʵ�ֽ׳�10��
********************************************
*/

/*  
# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int val;
	int i, mult=1;

	printf("Please input a number: ");
	printf("val = ");
	scanf("%d", &val);

	for (i=1; i<=val; ++i)
		mult = mult * i;
	
	printf("%d! = %d\n", val, mult);

	system("pause");
	return 0;
}

*/ 


/*
	�����1������
		ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
	����
	    �Ƚ�A�����ϵ�n-1�����ӽ���C�Ƶ�B
		ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
		���B�����ϵ�n-1�����ӽ���A�Ƶ�C
*/

 
 /*
#include <stdio.h>
#include <stdlib.h>
void hannuota(int n, char A, char B, char C)
{

	if( 1 == n)
	{	
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
	}
	else 
	{
		hannuota(n-1, A, C, B);
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
		hannuota(n-1, B, A, C);
	}
}

int main()
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
    int n;

	printf("������Ҫ�ƶ����ӵĸ�����");
	scanf("%d", &n);

	hannuota(n , 'A', 'B', 'C' );
	system("pause");

	return 0;
}
 */



/*
*******************************************
    �õݹ�ʵ���ۼ�1+2+3+����+100
*******************************************
*/
 
 
/* 
 
#include <stdio.h>
#include <stdlib.h>
int sum(int n)

{
	if(1 == n)
		return 1;
	else 
		return n + sum(n-1);

}


int main(void)
{

	printf("%ld\n", sum(1000));
	system("pause");
	return 0;
}
 
*/ 


/*
*******************************************
    ��ѭ��ʵ���ۼ�1+2+3+����+100
*******************************************

*/

/*
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i; 
	int sum = 0;

	for (i=1; i<=1000; ++i)
	{
		sum = sum + i;
	}
   printf("sum = %d\n", sum );
   	system("pause");
	return 0;
}
*/ 