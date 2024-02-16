//#include <iostream>
//using namespace std;
//
//class point {
//	int x, y; // private. point class 안에서만 쓸 수 있다. 
//	//main 에서 point.x=5 이런식으로 못쓴다. 즉 main에서 "접근"을 못한다고 생각하자
//
//public:
//	point();
//	point(int a, int b);
//	void show() { cout << "(" << x << "," << y << ")" << endl; }
//};
//
//point::point() : point(0, 0) {}
//
//point:: point(int a, int b)
//	: x(a), y(b) { } //x를 a로 초기화 하겠다. { x=a, y=b;}
//
//int main() {
//
//	point origin;
//	point target(10, 20);
//	origin.show();
//	target.show();
//
//}



