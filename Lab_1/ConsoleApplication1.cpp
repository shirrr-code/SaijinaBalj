#include <iostream>
#include <cmath>

int main() 
{
	using namespace std;

	setlocale(LC_CTYPE, "rus");

	float x, y;
	cout << "Введите x и y: ";
	cin >> x >> y;

	float p = 3.14;
	float R = (1 / tan(p * x) - (1 / cos(y)));
	float S = tan(x) - log(abs(pow(x, 3) + pow(y, 3)));
	float C = max(R, S);

	cout << "Итоговые R и S: " << R << ", " << S << endl;
	cout << "Максимальное среди R и S: " << C << endl;
	cin.get();
	cin.get();
	return 0;
}