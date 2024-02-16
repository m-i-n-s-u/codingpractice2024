#include <iostream>
using namespace std;

class Circle { // class인 circle을 define
public: // struct 와 다르게 class는 기본값이 private 이므로 public으로 수정

	int radius; // 멤버변수
	double getArea(); //멤버함수

};

double Circle::getArea() { // 멤버함수 define. "circle::"
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // "기본 생성자" circle로 donut을 define
	donut.radius = 1; // circle의 멤버변수를 들고온다.
	double area = donut.getArea(); //circle인 donut의 radius 멤버변수가 1. 이가 저장된 상태로 getarea
	cout << "donut 면적은" << area << endl;

}