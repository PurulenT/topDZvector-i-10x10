#include <iostream>
#include <vector>
using namespace std;


struct Rect {
private:
	int high;
	int width;
public:
	Rect()
	{
		this->high = rand() % 100 + 1;
		this->width = rand() % 100 + 1;
	/*	if (this->high == this->width)
		{
			cout << "Прямоугольник является квадратом" << endl;
		}
		else
		{
			cout << "Прямоугольник не является квадратом" << endl;
		}*/
		
		
	}
	void set()
	{
		this->high = rand() % 100 + 1;
		this->width = rand() % 100 + 1;
	}

	void getGab()
	{
		cout << this->high << "x"<<  this->width << endl;
	}

	int getPlosh()
	{
		return this->high * this->width;
	}

	int getPer()
	{
		return 2 * (this->high + this->width);
	}

	void randGab()
	{
		this->high = rand() % 100 + 1;
		this->width = rand() % 100 + 1;
	}


};

int main()
{
	const int size = 10;
	srand(time(0));
	setlocale(LC_ALL, "rus");
	
	vector<Rect> vX(size);
	for (int i = 0; i < size; i++)
	{
		vX[i].set();
		cout << "vector[" << i << "]: ";
		vX[i].getGab();
	}
	return 0;
}