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
//circle:: circle() : circle(1){} // Ÿ�� ������(������ ����� �ȴ�). 
////�⺻������ circle()�� define �ϸ� circle(1) �� ���� ������ �ϰڴ�.
//
//circle::circle(int r) { //���� ������
//	radius = r;
//	cout << "������" << radius << "�� ����" << endl;
//
//}
//
//double circle::getarea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	circle donut; // �⺻������ circle
//	double area = donut.getarea();
//	cout << "donut ������" << area << endl;
//
//	circle pizze(30); 
//
//}