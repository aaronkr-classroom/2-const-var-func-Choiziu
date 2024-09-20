// week 3 숫자 상수

#include <stdio.h>

int main(void) {
	// 숫자 상수
	const float VERSION_NUMBER = 2.3;
	const int DAYS_IN_WEEK = 7; // 4바이트
	const float PI = 3.14159f;  // 4바이트
	const double GARVITY = 9.80665;  //8바이트

	// 문자 상수
	const char LETTER_A = 'A';
	const char NEW_LINE = '\n';
	const char TAB = '\t';

	// 문자열 상수
	const char* GREETING = "Hello World!~";

	// 상수 출력하기
	printf("숫자형 상수: %c ", NEW_LINE);
	printf("일주일의 일: %d%c", DAYS_IN_WEEK, NEW_LINE);
	printf("내 피자의 크기: 12 inch * %.5f%c", PI, NEW_LINE);
	printf("중력: %.5f m/s^2%c", GARVITY, NEW_LINE);
	
	// 문자 상수 출력하기
	printf("%c%c%c%c%c%c", LETTER_A, TAB, LETTER_A, TAB, LETTER_A, NEW_LINE);
	
	// 문자열 상수 출력하기
	printf("%s%c", GREETING, NEW_LINE);
	return 0;
}