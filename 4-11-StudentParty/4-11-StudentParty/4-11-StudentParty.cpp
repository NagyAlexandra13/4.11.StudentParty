#include <iostream>
using namespace std;
// 1.	Define party location. Pass data by constructor, setter or by direct read


class Address {
	private:
	string street;
	int streetNumber;
public:
	Address() {

	}
	Address(string street, int streetNumber) {
		this->street = street;
		this->streetNumber = streetNumber;
	}
	void setStreet(string street) {
		this->street = street;
	}
	void setStreetNumber(int streetNumber) {
		this->streetNumber = streetNumber;
	}
	string getStreet() {
		return this->street;
	}
};

class Party {
private:
	Address* address;
public:
	Party(Address* address){
		this->address = address;
	}
	Address* getAddress() {
		return this->address;
	}
};

int main()
{
	
	Address* address = new Address("Unirii",5);
	Party* party = new Party(address);
	cout<< party->getAddress()->getStreet();
	
	Address* address1 = new Address();
	address1->setStreet("Elena Farago");
	address1->setStreetNumber(6);
	Party* party1 = new Party(address1);
	cout << party1->getAddress()->getStreet();
}


