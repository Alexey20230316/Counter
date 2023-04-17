#include<iostream>


class Counter
{
public:
	Counter(int x) {
		n = x;
	}
	Counter() {};

	void increase() {        //  увеличить
		n = n + 1;
	
	}
	void reduce() {           //  уметьшить
		n = n - 1;
	}             
	
	void show() {            //  показать
		std::cout << "«начение счетчика: " << n << std::endl;
	}                
	int exit(int z) {
		z = 0;
		return z;
	}

private:
	int n; 
};


int main() {

	setlocale(LC_ALL, "ru");

	int x = 1;         // ввод счетчика с клавы         
	int z = 1;    // условие выхода из цикла
	char c;         // да нет
	std::cout << "’отите установить начальное значение счетчика?    y - yes, n - no" << std::endl;
	std::cin >> c;
	if (c == 'y') {
		std::cout << "¬ведите начальное значение счетчика: " << std::endl;
		std::cin >> x;
	}
	
	
		Counter p(x);
		Counter p();
		
	
		
	while (z)
	{
	char n;
	std::cout << "¬ведите команду ('+', '-', '=' или 'x'): " << std::endl;
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
			z = p.exit(z);
			break;
		}
	}

	

}