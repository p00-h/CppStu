/****************************************************************************************
#include <iostream>
#include <vector>
using namespace std;

// TODO: Phone Ŭ���� ����
// - displayBrand()�� showFeature() ���� ���� �Լ��� �����ϵ��� �����ϼ���
// - �Ҹ��ڸ� �ݵ�� virtual�� �����ϼ���
class Phone{
public:
    virtual void displayBrand() = 0; // ���� ���� �Լ�
    virtual void showFeature() = 0;   // ���� ���� �Լ�
	virtual ~Phone() {}                // ���� �Ҹ���
};

// Samsung Ŭ���� �ۼ� (Phone Ŭ������ ��ӹ���)
class Samsung : public Phone {
public:
    void displayBrand() {
        cout << "Samsung" << endl;
    }
    void showFeature() {
        cout << "Galaxy S �ø���" << endl;
    }
};

// apple Ŭ���� �ۼ� (Phone Ŭ������ ��ӹ���)
class Apple : public Phone {
public:
    void displayBrand() {
        cout << "Apple" << endl;
    }
    void showFeature() {
        cout << "iPhone Pro �ø���" << endl;
    }
};

// Xiaomi Ŭ���� �ۼ� (Phone Ŭ������ ��ӹ���)
class Xiaomi : public Phone {
public:
    void displayBrand() {
        cout << "Xiaomi" << endl;
    }
    void showFeature() {
        cout << "Redmi Note �ø���" << endl;
    }
};

int main() {
    // TODO: main �Լ� ����
    // - Phone* Ÿ���� �迭�� �����Ͽ� Samsung, Apple, Xiaomi ��ü�� ����
    // - �ݺ����� ����Ͽ� �� ��ü�� displayBrand()�� showFeature()�� ȣ��
    // - �ݺ����� ����Ͽ� �޸� ������ ���� delete ȣ��
    vector<Phone*> phones;
	phones.push_back(new Samsung());
	phones.push_back(new Apple());
	phones.push_back(new Xiaomi());

    for (size_t i = 0; i < phones.size(); ++i) {
        phones[i]->displayBrand();
        phones[i]->showFeature();
    }

    for (size_t i = 0; i < phones.size(); ++i) {
		delete phones[i];
	}

    return 0;
}
*****************************************************************************************/