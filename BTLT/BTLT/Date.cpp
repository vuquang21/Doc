#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
	this->yyyy = 1990;
	this->mm = 1;
	this->dd = 1;
}

Date::Date(int y, int m, int d)
{
	this->yyyy = y;
	this->mm = m;
	this->dd = d;
}

Date::~Date() {};

bool Date::Check()
{
	switch (this->mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (this->dd > 31 || this->dd < 0) return false;
		break;
	case 4: case 6: case 9: case 11:
		if (this->dd > 30 || this->dd < 0) return false;
		break;
	case 2:
		if (this->yyyy % 400 == 0)
		{
			if (this->dd > 29 || this->dd < 0) return false;
		}
		else
		{
			if (this->dd > 28 || this->dd < 0) return false;
		}
		break;
	}
	return true;
}

bool Date::IsLeapYear()
{
	bool check = (this->yyyy % 400 == 0 || (this->yyyy % 4 == 0 && this->yyyy % 100 != 0)) ? true : false;
	return check;

}

istream& operator>>(istream& is, Date& obj)
{
	cout << "Nhap ngay, thang, nam: ";
	is >> obj.dd >> obj.mm >> obj.yyyy;
	while (obj.Check() == false)
	{
		cout << "Ngay, thang, nam khong hop le!! Vui long nhap lai: ";
		is >> obj.dd >> obj.mm >> obj.yyyy;
	}
	return is;
}

ostream& operator<<(ostream& os, Date& obj)
{
	os << obj.dd << "/" << obj.mm << "/" << obj.yyyy << "\t";
	return os;
}

Date Date::operator+(int day)
{
	int tmp = this->dd + day;
	switch (this->mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (tmp > 31)
		{
			this->mm++;
			this->dd = tmp - 31;
			if (this->mm > 12)
			{
				this->yyyy++;
				this->mm = 1;
			}
		}
		else
		{
			this->dd += tmp;
			tmp = 0;
		}
		break;
	case 4: case 6: case 9: case 11:
		if (tmp > 30)
		{
			this->mm++;
			this->dd = tmp - 30;
			if (this->mm > 12)
			{
				this->yyyy++;
				this->mm = 1;
			}
		}
		else
		{
			this->dd += tmp;
			tmp = 0;
		}
	case 2:
		if (this->yyyy % 400 == 0)
		{
			if (tmp > 29)
			{
				this->mm++;
				this->dd = tmp - 29;
				if (this->mm > 12)
				{
					this->yyyy++;
					this->mm = 1;
				}
			}
			else
			{
				this->dd += tmp;
				tmp = 0;
			}
		}
		else
		{
			if (tmp > 28)
			{
				this->mm++;
				this->dd = tmp - 28;
				if (this->mm > 12)
				{
					this->yyyy++;
					this->mm = 1;
				}
			}
			else
			{
				this->dd += tmp;
				tmp = 0;
			}
		}

	default:
		break;
	}
	return *this;
}

Date Date::operator-(int day)
{
	int tmp = day;
	if (this->dd > day)
	{
		this->dd -= day;
		tmp = 0;
	}
	else
	{
		tmp = this->dd - day;
		--this->mm;
		switch (this->mm)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			this->dd = 31;
			break;
		case 4: case 6: case 9: case 11:
			this->dd = 30;
		case 2:
			if (this->yyyy % 400 == 0)
			{
				this->dd = 29;
			}
			else
			{
				this->dd = 28;
			}
		case 0:
			--this->yyyy;
			this->mm = 12;
			this->dd = 31 + tmp;
			break;
		}
	}
	return *this;
}

Date& Date::operator++()
{
	int tmp = this->dd + 1;
	switch (this->mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (tmp > 31)
		{
			this->mm++;
			this->dd = tmp - 31;
			if (this->mm > 12)
			{
				this->yyyy++;
				this->mm = 1;
			}
		}
		else
		{
			this->dd++;
			tmp = 0;
		}
		break;
	case 4: case 6: case 9: case 11:
		if (tmp > 30)
		{
			this->mm++;
			this->dd = tmp - 30;
			if (this->mm > 12)
			{
				this->yyyy++;
				this->mm = 1;
			}
		}
		else
		{
			this->dd++;
			tmp = 0;
		}
	case 2:
		if (this->yyyy % 400 == 0)
		{
			if (tmp > 29)
			{
				this->mm++;
				this->dd = tmp - 29;
				if (this->mm > 12)
				{
					this->yyyy++;
					this->mm = 1;
				}
			}
			else
			{
				this->dd++;
				tmp = 0;
			}
		}
		else
		{
			if (tmp > 28)
			{
				this->mm++;
				this->dd = tmp - 28;
				if (this->mm > 12)
				{
					this->yyyy++;
					this->mm = 1;
				}
			}
			else
			{
				this->dd++;
				tmp = 0;
			}
		}

	default:
		break;
	}
	return *this;
}

Date& Date::operator--()
{
	if (this->dd > 1)
	{
		this->dd -= 1;
	}
	else
	{
		--this->mm;
		switch (this->mm)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			this->dd = 31;
			break;
		case 4: case 6: case 9: case 11:
			this->dd = 30;
		case 2:
			if (this->IsLeapYear() == true)
			{
				this->dd = 29;
			}
			else
			{
				this->dd = 28;
			}
			break;
		case 0:
			--this->yyyy;
			this->mm = 12;
			this->dd = 31;
			break;
		}
	}
	return *this;
}

int Date::Getdd()
{
	return dd;
}

int Date::operator-(Date d)
{
	int tmp = d.dd - this->dd;
	if (tmp > 0 && d.mm > this->mm) return tmp + 30;
	else return d.dd - tmp;
}