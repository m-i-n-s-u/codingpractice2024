//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	~circle();//소멸자. 객체의 수명이 끝났을 때 객체를 제거하기 위한 목적으로 사용된다. 
//	//객체의 수명이 끝났을 때 자동으로 컴파일러가 소멸자 함수를 호출한다. 메모리 
//	double getarea();
//};
//
//circle::circle() { 
//	radius = 1;
//	cout << "반지름" << radius << "원 생성" << endl;
//}
//
//circle::circle(int r) {
//	radius = r;
//	cout << "반지름" << radius << "원 생성" << endl;
//}
//
//circle :: ~circle() {
//	cout << "반지름" << radius << "원 소멸" << endl;
//}
//
//double circle::getarea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	circle donut;
//	circle pizza(30);
//	return 0;
//}