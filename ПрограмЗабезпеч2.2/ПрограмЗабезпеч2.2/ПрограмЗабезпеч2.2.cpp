#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	/* a, b - проміжок, step - крок */
	int a, b, wish; 
	double x, sumFirst = 0, sumSecond = 0, i, j, step;
	setlocale(LC_ALL, "Ukr"); // Відображення української мови
	cout << "Введiть цiле значення A:" << " ";
	cin >> a;
	cout << "Введiть цiле значення B:" << " ";
	cin >> b;
	cout << "Введiть значення кроку:" << " ";
	cin >> step;
	cout << "Введiть значення X:" << " ";
	cin >> x;
	cout << "Якщо ви бажаєте отримати результати кроку записанi в файлi натиснiть 1, якщо нi - iнше значення:" << " ";
	cin >> wish;
	if (b - 1 < a)
	{
		cout << "b повинний бути бiльше";
		exit(1);
	}
	if (step <= 0)
	{
		cout << "Крок повинен бути > 0";
		exit(1);
	}

	/* Цикл якщо x ≥ 0 до того ж i !=0 */
	if (x >= 0)
	{
		if (a == 0)		// Якщо а=0 тоді в нас виходить вираз x/0 - що робити не можна
		{
			cout << "На нуль дiлити не можна";
			exit(1);
		}
		ofstream fout("firstcycle.txt");
		for (i = a; i <= (b - 1); i = i + step) 
		{
			sumFirst += (x / i);
			if (wish == 1)
			{
				fout << "y:" << sumFirst << endl;
			}
			cout << "Результат кроку:" << " " << sumFirst<<endl;
			cout << "i =" << " " << i<<endl;
		}
		cout << "Кiнцевий результат:" << " " << sumFirst<<endl;
	}

	/* Цикл якщо x < 0 */
	if (x < 0)
	{
		ofstream fout("secondcycle.txt");		// Відкриття потоку на запис у файл
		for (i = a; i<=(b - 1); i = i + step)	// Зовнішній цикл
		{
			sumFirst = 0;
			for (j = a; j <= b; j = j + step)	// Внутрішній цикл
			{
				sumFirst += x - i + j;
			}
			sumSecond = sumFirst + sumSecond;
			if (wish == 1)
			{
				fout << "Результат цiлого циклу:" << sumSecond << endl; // Запис у потік
			}
			cout << "Результат цiлого циклу:" << " " << sumSecond<<endl;
			cout << "i =" << " " << i << endl;
			cout << "j =" << " " << j-1 << endl;
		}
		cout <<"Кiнцевий результат:"<<" "<<sumSecond;
	}
}