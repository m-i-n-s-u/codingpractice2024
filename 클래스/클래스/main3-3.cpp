//#include <iostream>
//using namespace std;
//
//class circle {
//public:
//	int radius;
//	circle(); // �⺻������. �����
//	circle(int r); // �Լ����� ������ �����ִ�. �Ű������� �ִ� ������
//	double getarea();
//};
//
//circle::circle() {
//	radius = 1;
//	cout << "������" << radius << "�� ���� " << endl;
//}
//
//circle::circle(int r) {
//	radius = r;
//	cout << "������" << radius << "�� ���� " << endl;
//}
//
//double circle::getarea() {
//	{
//		return 3.14 * radius * radius;
//	} }
//
//int main() {
//
//	circle donut; // �Ű������� ���� "������" ȣ��! 
//	circle pizza(30); //�Ű������� �ִ� "�ٸ� ������" ȣ��! 
//	double area = donut.getarea();
//	cout << "donut ������" << area << endl;
//}