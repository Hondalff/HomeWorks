#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	int GetNumerator()
	{
		return numerator_;
	}
	int GetDenominator()
	{
		return denominator_;
	}
	
	bool operator==(Fraction right)
	{
		if (numerator_ == right.numerator_ && denominator_ == right.denominator_) { return true; }
		else { return false; }
	}
	bool operator!=(Fraction right)
	{
		if (numerator_ != right.numerator_ || denominator_ != right.denominator_) { return true; }
		else { return false; }
	}
	bool operator<(Fraction right)
	{
		int a, b;
		a = numerator_ + denominator_;
		b = right.numerator_ + right.denominator_;
		if (a < b) { return true; }
		else { return false; }
	}
	bool operator>(Fraction right)
	{
		int a, b;
		a = numerator_ + denominator_;
		b = right.numerator_ + right.denominator_;
		if (a > b) { return true; }
		else { return false; }
	}
	bool operator<=(Fraction right)
	{
		int a, b;
		a = numerator_ + denominator_;
		b = right.numerator_ + right.denominator_;
		if (a <= b) { return true; }
		else { return false; }
	}
	bool operator>=(Fraction right)
	{
		int a, b;
		a = numerator_ + denominator_;
		b = right.numerator_ + right.denominator_;
		if (a >= b) { return true; }
		else { return false; }
	}

	friend Fraction operator+(Fraction left, Fraction right);
	friend Fraction operator-(Fraction left, Fraction right);
	friend Fraction operator*(Fraction left, Fraction right);
	friend Fraction operator/(Fraction left, Fraction right);
	Fraction operator++()
	{
		numerator_ += 1;
		denominator_ += 1;
		return Fraction(numerator_, denominator_);
	}
	Fraction operator++(int)
	{
		numerator_ += 1;
		denominator_ += 1;
		return Fraction(numerator_, denominator_);
	}
	Fraction operator--()
	{
		numerator_ -= 1;
		denominator_ -= 1;
		return Fraction(numerator_, denominator_);
	}
	Fraction operator--(int)
	{
		numerator_ -= 1;
		denominator_ -= 1;
		return Fraction(numerator_, denominator_);
	}
};

Fraction operator+(Fraction left, Fraction right)
{
	int a, b;

	a = left.numerator_ * right.denominator_ + left.denominator_ * right.numerator_;
	b = left.denominator_ * right.denominator_;
	return Fraction(a, b);
}
Fraction operator-(Fraction left, Fraction right)
{
	int a, b;

	a = left.numerator_ * right.denominator_ - left.denominator_ * right.numerator_;
	b = left.denominator_ * right.denominator_;
	return Fraction(a, b);
}
Fraction operator*(Fraction left, Fraction right)
{
	int a, b;

	a = left.numerator_ * left.numerator_;
	b = left.denominator_ * right.denominator_;
	return Fraction(a, b);
}
Fraction operator/(Fraction left, Fraction right)
{
	int a, b;

	a = left.numerator_ * right.denominator_;
	b = left.denominator_ * right.numerator_;
	return Fraction(a, b);
}
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> b;
	Fraction f1(a, b);

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> b;
	Fraction f2(a, b);
	Fraction f3(a, b);

	f3 = f1 + f2;
	std::cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " + " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	f3 = f1 - f2;
	std::cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " - " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	f3 = f1 * f2;
	std::cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " * " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	f3 = f1 / f2;
	std::cout << f1.GetNumerator() << "/" << f1.GetDenominator() << " / " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	f3 = ++f1 * f2;
	std::cout << "++" << f1.GetNumerator() << "/" << f1.GetDenominator() << " * " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	f3 = f1-- * f2;
	std::cout << f1.GetNumerator() << "/" << f1.GetDenominator() << "--" << " * " << f2.GetNumerator() << "/" << f2.GetDenominator() << " = " << f3.GetNumerator() << "/" << f3.GetDenominator() << std::endl;
	
	
	return 0;
}