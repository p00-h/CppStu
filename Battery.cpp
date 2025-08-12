/******************************************************************************
#include <iostream>

class Battery {
	int charge;
public:
	Battery(int initialCharge = 100) : charge(initialCharge) {
		if (charge < 0) {
			charge = 0;
		}else if(charge > 100) {
			charge = 100;
		}
	}
	int getCharge() const
	{
		return charge;
	}
	void useBattery()
	{
		if (charge >= 5) {
			charge -= 5;
		} else {
			charge = 0;
		}
		std::cout << "Battery used. Current charge: " << charge << "%\n";
	}
	void chargeBattery()
	{
		if (charge <= 93) {
			charge += 7;
		} else {
			charge = 100;
		}
		std::cout << "Battery charged. Current charge: " << charge << "%\n";
	}
};
int main() {
	Battery b;

	std::cout << "Initial charge: " << b.getCharge() << "%\n";

	b.useBattery();
	b.useBattery();
	b.chargeBattery();
	b.useBattery();

	return 0;
}
*******************************************************************************/