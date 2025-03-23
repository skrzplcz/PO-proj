#include <iostream>
using namespace std;

double mem;
bool mem_used;

double add(double a, double b)
{
	mem = a + b;
	mem_used = true;
	return a + b;
}

double substr(double a, double b)
{
	mem = a - b;
	mem_used = true;
	return a - b;
}

double times(double a, double b)
{
	mem = a * b;
	mem_used = true;
	return a * b;
}

double divide(double a, double b)
{
	if (b == 0) {
		cout << "ERROR";
		return 0;
	}
	mem = a / b;
	mem_used = true;
	return a / b;
}

double mod(double a, double b)
{

	if (b == 0) {
		cout << "ERROR";
		return 0;
	}
	mem = a - (int)(a/b)*b;
	mem_used = true;
	return a - (int)(a / b) * b;
}

void erase_mem()
{
	mem_used = false;
}

void menu() {
	cout << "\nMENU:\n" << "1: dodawanie\n" << "2: odejmowanie\n" << "3: mnożenie\n" << "4: dzielenie\n" << "5: modulo\n" << "6: wyczyść pamięć\n" << "7: EXIT\n";
	unsigned int n;
	double a, b;
	cin >> n;
	switch(n)
	{
	case 1:
		if (mem_used) {
			cin >> b;
			cout << add(mem, b);
		}
		else {
			cin >> a >> b;
			cout << add(a, b);
		}
		menu();
		break;
	case 2:
		if (mem_used) {
			cin >> b;
			cout << substr(mem, b);
		}
		else {
			cin >> a >> b;
			cout << substr(a, b);
		}
		menu();
		break;
	case 3:
		if (mem_used) {
			cin >> b;
			cout << times(mem, b);
		}
		else {
			cin >> a >> b;
			cout << times(a, b);
		}
		menu();
		break;
	case 4:
		if (mem_used) {
			cin >> b;
			cout << divide(mem, b);
		}
		else {
			cin >> a >> b;
			cout << divide(a, b);
		}
		menu();
		break;
	case 5:
		if (mem_used) {
			cin >> b;
			cout << mod(mem, b);
		}
		else {
			cin >> a >> b;
			cout << mod(a, b);
		}
		menu();
		break;
	case 6:
		erase_mem();
		menu();
		break;
		case 7:
			break;

	default:
		cout << "nieprawidłowa opcja\n";
		break;
	}
}


int main()
{
	menu();
	return 0;
}

