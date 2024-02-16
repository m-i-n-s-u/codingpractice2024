//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle(); // 기본생성자. 없어도됨
//	circle(int r); // 함수명을 복수로 쓸수있다. 매개변수가 있는 생성자
//	double getarea();
//};
//
//circle::circle() {
//	radius = 1;
//	cout << "반지름" << radius << "원 생성 " << endl;
//}
//
//circle::circle(int r) {
//	radius = r;
//	cout << "반지름" << radius << "원 생성 " << endl;
//}
//
//double circle::getarea() {
//	{
//		return 3.14 * radius * radius;
//	} }
//
//int main() {
//
//	circle donut; // 매개변수가 없는 "생성자" 호출! 
//	circle pizza(30); //매개변수가 있는 "다른 생성자" 호출! 
//	double area = donut.getarea();
//	cout << "donut 면적은" << area << endl;
//}