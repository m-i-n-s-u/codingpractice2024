//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle();
//	circle(int r);
//	~circle();//�Ҹ���. ��ü�� ������ ������ �� ��ü�� �����ϱ� ���� �������� ���ȴ�. 
//	//��ü�� ������ ������ �� �ڵ����� �����Ϸ��� �Ҹ��� �Լ��� ȣ���Ѵ�. �޸� 
//	double getarea();
//};
//
//circle::circle() { 
//	radius = 1;
//	cout << "������" << radius << "�� ����" << endl;
//}
//
//circle::circle(int r) {
//	radius = r;
//	cout << "������" << radius << "�� ����" << endl;
//}
//
//circle :: ~circle() {
//	cout << "������" << radius << "�� �Ҹ�" << endl;
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