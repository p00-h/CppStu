/*******************************************************************************************
#include <iostream>

class Fraction {

	int numerator;
	int denominator;

// gcd �Լ� ���� (��Ŭ���� ȣ����)
	int gcd(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
public:
	Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
		if (denominator == 0) {
			denominator = 1;
		}
	}
	
	// �⺻ ������
    // ���ڸ� 0, �и� 1�� �ʱ�ȭ�մϴ�. (0/1�� 0�� ��Ÿ��)
    // Fraction() : numerator(0), denominator(1) {}

    // �Ű������� �ִ� ������
    // ����ڷκ��� ���ڿ� �и� �Է¹޾� �ʱ�ȭ�մϴ�.
    // �и� 0�� ��� �ڵ����� 1�� �����մϴ�. (�и� 0�̸� ���ǵ��� ����)
    //Fraction(int num, int denom) {
    //    numerator = num;
    //    denominator = (denom != 0) ? denom : 1; // �и� 0�̸� 1�� ����
    //}

	

	int getNumerator() const {
		return numerator;
	}
	int getDenominator() const {
		return denominator;
	}

	void display() const {
		std::cout << numerator << '/' << denominator;
	}

	void simplify() {
		int gcdValue = gcd(numerator, denominator);
		numerator /= gcdValue;
		denominator /= gcdValue;
	}

	Fraction multify(const Fraction& other) const {
		int newNumerator = numerator * other.numerator;
		int newDenominator = denominator * other.denominator;
		Fraction result(newNumerator, newDenominator);
		result.simplify();
		return result;
	}
};

int main() {
	Fraction f1(1, 2);
	Fraction f2(3, 4);

	Fraction product = f1.multify(f2);

	std::cout << "���� ��� : ";
	product.display();
	std::cout << std::endl;
	return 0;
}
*******************************************************************************************/