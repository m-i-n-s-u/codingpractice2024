//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	double getarea();
//};
//
//circle:: circle() : circle(1){} // 타겟 생성자(위임의 대상이 된다). 
////기본생성자 circle()로 define 하면 circle(1) 과 같은 역할을 하겠다.
//
//circle::circle(int r) { //위임 생성자
//	radius = r;
//	cout << "반지름" << radius << "원 생성" << endl;
//
//}
//
//double circle::getarea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	circle donut; // 기본생성자 circle
//	double area = donut.getarea();
//	cout << "donut 면적은" << area << endl;
//
//	circle pizze(30); 
//
//}