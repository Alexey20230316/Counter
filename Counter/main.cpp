#include<iostream>


class Counter
{
public:
	Counter(int x) {
		n = x;
	}

	void increase() {        //  ���������
		n = n + 1;
	
	}
	void reduce() {           //  ���������
		n = n - 1;
	}             
	
	void show() {            //  ��������
		std::cout << "�������� ��������: " << n << std::endl;
	}                

private:
	int n; 
};


int main() {

	setlocale(LC_ALL, "ru");

	int x = 1;         // ���� �������� � �����         
	int z = 1;        // ������� ������ �� �����
	char c;          // �� ���
	std::cout << "������ ���������� ��������� �������� ��������?    y - yes, n - no" << std::endl;
	std::cin >> c;
	if (c == 'y') {
		std::cout << "������� ��������� �������� ��������: " << std::endl;
		std::cin >> x;
	}
	
		Counter p(x);
		
	while (z)
	{
	char n;
	std::cout << "������� ������� ('+', '-', '=' ��� 'x'): " << std::endl;
	std::cin >> n;
		switch (n)
		{
		case '+':
			p.increase();
			break;
		case '-':
			p.reduce();
			break;
		case '=':
			p.show();
			break;
		case 'x':
			z = 0;
			break;
		}
	}

	

}