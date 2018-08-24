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
	Time operator+(const Time &t) const;//���������ã�����������ȴ�������á�����������Ϊ���õ�Ŀ�ľ���Ϊ�����Ч�ʡ������ֵ����Time���󣬴��빦����ͬ�����������ã��ٶȸ��죬ʹ���ڴ���١�
	Time operator-(const Time &t) const;
	Time operator*(double n) const;
	friend Time operator*(double n,const Time& t) ;
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
	void Show() const;
};
