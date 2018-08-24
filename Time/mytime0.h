#pragma once

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddMr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time &t) const;
	Time operator+(const Time &t) const;//参数是引用，但返回类型却不是引用。将参数声明为引用的目的就是为了提高效率。如果按值传递Time对象，代码功能相同，但传递引用，速度更快，使用内存更少。
	Time operator-(const Time &t) const;
	Time operator*(double n) const;
	friend Time operator*(double n,const Time& t) ;
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
	void Show() const;
};
