#include <iostream>
using namespace std;

class Circle { // class�� circle�� define
public: // struct �� �ٸ��� class�� �⺻���� private �̹Ƿ� public���� ����

	int radius; // �������
	double getArea(); //����Լ�

};

double Circle::getArea() { // ����Լ� define. "circle::"
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // "�⺻ ������" circle�� donut�� define
	donut.radius = 1; // circle�� ��������� ���´�.
	double area = donut.getArea(); //circle�� donut�� radius ��������� 1. �̰� ����� ���·� getarea
	cout << "donut ������" << area << endl;

}