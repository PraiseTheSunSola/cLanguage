#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
void main() { 

	char ch = 'b'; // char ���ڸ� ���ϴ� ������ Ÿ�� c������ �ѱ� ���ڸ� ��� �� �� �ƽ�Ű�ڵ�ǥ�� �⺻������ �ִ°͸� ����
	short s = 10; // 10���� ����
	int i = 100; // 10���� ����
	long l = 2323; // 10���� ���� 

	float f = 2.34; // 10���� �Ǽ�
	double d = 3142.23; // 10���� �Ǽ�

	bool b = true; // c������ �׳��� ���� �� �ϰ� #include <stdbool.h>�� �߰��ؾ� ����� �� �ִ�. 
	// ���� ����
	// %d - 10���� ����
	// %c - ����
	// %f - 10���� �Ǽ� , %1f 
	// %s - ���ڿ�
	// %p - �����Ͱ�



	

	// c���� �������ϸ� ����� printf�� �� ����

	// �Է��ϴ� ��  = scanf
	// int�� 10������ num�� int Ÿ���̹Ƿ� ���������� 10���� ������ ����ϴ� %d�� ����Ѵ�. 
	// ���� �ϳ��� �Է� ���� �Ŷ�� ���ͳ� ����(�����̽���)�� ���� ����.  ������ ������ �ȵɼ� �ִ�. 

	// �Է� ���� ���� ���� �̸� �տ� &�� �־�����Ѵ�. ������ �ּҸ� �ǹ��Ѵ�. �׷��� �����Ѵ�. 

	// scanf �ڿ� _s�� ���̸� ���������� �� ���ϵǰ� #define _CRT_SECURE_NO_WARNINGS�� �Է��� �ʿ䰡 ������  �� ���ڸ� �Էµ�
	/*scanf_s("%d",&num1);
	scanf_s("%d",&num2);	*/

	//int num1, num2;

	//printf("�� ������ �Է��ϼ���.");
	//
	//
	//scanf_s("%d %d", &num1,&num2);
	//printf("%d %d \n", num1,num2);

	//printf("%d %c", 10, 'a');

	//printf("�� �ǰ� �ֳ�? �׷� �¾縸��");


	// ����, ����, ���� ���� �Է��ϰ� 
	// ������ ����� ���Ͽ� ���

	int kor, mat,eng;
	int total, avg;

	printf("���� ����: ");
	scanf_s("%d",&kor);
	printf("���� ����: ");
	scanf_s("%d", &mat);
	printf("���� ����:");
	scanf_s("%d", &eng);

	total= kor + mat + eng;
	avg = total / 3;
	printf("���� : %d, ��� : %d \n", total, avg);
	
}