/*
  파일이름: 익명 프로필 만들기
  작 성 자: 60251629 강영현
*/
include<stdio.h>


int main()
{

	   
	char initial; // 이니셜 
	float height; // 키 
	float weight; // 몸무게 
	int age;      // 나이 
	char gender;  // 성별
	
	
	
	printf(" 익명 프로필을 만들어드립니다.\n");
	printf(" ===================================\n");
	
	printf(" 당신의 영문 이니셜 한글자를 입력하세요: ");
	scanf(" %c", &initial);
	
	printf(" 당신의 키를 입력하세요: ");
	scanf("%f", &height);
	
	printf(" 당신의 몸무게를 입력하세요: ");
	scanf(" %f", &weight);

	printf(" 당신의 나이를 입력하세요: ");
	scanf(" %d", &age);
	
	printf(" 당신의 성별(X,Y)을 입력하세요: ");
	scanf(" %c", &gender);
	
	printf(" 프로필\n");
	printf("=======================\n"); 
	printf("당신의 이니셜: %c\n", initial);
	printf("당신의 성별: %c\n", gender);
	printf("당신의 나이: %d\n", age);
	printf("당신의 키: %.1f\n", height);
	printf("당신의 몸무게: %.2f\n", weight);

	return 0;
}
