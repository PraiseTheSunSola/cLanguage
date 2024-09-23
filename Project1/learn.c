#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
void main() { 

	char ch = 'b'; // char 문자를 뜻하는 데이터 타입 c언어에서는 한글 문자를 사용 못 함 아스키코드표에 기본적으로 있는것만 가능
	short s = 10; // 10진수 정수
	int i = 100; // 10진수 정수
	long l = 2323; // 10진수 정수 

	float f = 2.34; // 10진수 실수
	double d = 3142.23; // 10진수 실수

	bool b = true; // c에서는 그냥은 쓰지 못 하고 #include <stdbool.h>을 추가해야 사용할 수 있다. 
	// 서식 문자
	// %d - 10진수 정수
	// %c - 문자
	// %f - 10진수 실수 , %1f 
	// %s - 문자열
	// %p - 포인터값



	

	// c언어에선 어지간하면 출력은 printf로 할 예정

	// 입력하는 법  = scanf
	// int는 10진정수 num은 int 타입이므로 마찬가지로 10진수 정수를 사용하는 %d를 사용한다. 
	// 정수 하나만 입력 받을 거라면 엔터나 띄어쓰기(스페이스바)를 하지 말자.  공백이 있으면 안될수 있다. 

	// 입력 받을 때는 변수 이름 앞에 &을 넣어줘야한다. 변수의 주소를 의미한다. 그래야 저장한다. 

	// scanf 뒤에 _s를 붙이면 보안적으로 더 보완되고 #define _CRT_SECURE_NO_WARNINGS를 입력할 필요가 없어짐  단 숫자만 입력됨
	/*scanf_s("%d",&num1);
	scanf_s("%d",&num2);	*/

	//int num1, num2;

	//printf("두 정수를 입력하세요.");
	//
	//
	//scanf_s("%d %d", &num1,&num2);
	//printf("%d %d \n", num1,num2);

	//printf("%d %c", 10, 'a');

	//printf("잘 되고 있나? 그럼 태양만세");


	// 국어, 수학, 영어 점수 입력하고 
	// 총점과 평균을 구하여 출력

	int kor, mat,eng;
	int total, avg;

	printf("국어 점수: ");
	scanf_s("%d",&kor);
	printf("수학 점수: ");
	scanf_s("%d", &mat);
	printf("영어 점수:");
	scanf_s("%d", &eng);

	total= kor + mat + eng;
	avg = total / 3;
	printf("총점 : %d, 평균 : %d \n", total, avg);
	
}