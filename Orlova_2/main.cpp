#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (double x = -2; x <= 2; x += 0.2)
	{
		//��� ����� ����� ��� ����, ����� ������ �� ������ ������ ���������� �� 0
		//��� �� ���������� � ����-�����, ������ ��� �������� ����������� ��� C++
		//----------------
		if (abs(x) < 0.000001)
		{
			x = 0;
		}
		//----------------
		
		double result = 0;
		double dx = 1;
		for (int i = 0; i < 11; i++)
		{
			result += (i + 1) * dx;
			dx *= x;
		}
		cout << "y(" << x << ") = " << result << endl;
	}

	return 0;
}
