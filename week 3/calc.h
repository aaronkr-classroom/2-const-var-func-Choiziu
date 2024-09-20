#pragma once
//calc.h

#ifndef M_PI // 아직 정의 하지 않았으면..
#define M_PI 3.14159265358979323846 //정의
#endif

// 함수 원형 선언하기
double sum(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
int rem(int, int);

// 추가 함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);