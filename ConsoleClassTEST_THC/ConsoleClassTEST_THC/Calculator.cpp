#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run(){
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; //���� �ΰ� �Է�
	Adder adder(a, b); //������ ����
	cout << adder.processor();
}
