#include<iostream>
#include "mytime0.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	Time diff;
	Time adjuested;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	//total=coding+fixing;
	cout << "coding.Sum(fixing) = ";
	total.Show();
	cout << endl;

	diff = fixing - coding;
	cout << "fixing time -coding time = ";
	diff.Show();
	cout << endl;

	adjuested = total * 1.5;
	cout << "adjuested  time = ";
	adjuested.Show();
	cout << endl;

	getchar();
}