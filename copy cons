#include <iostream>
#include <ctime>
using namespace std;

class Pet {
public:
	Pet(int x, int z, int c, int h);
	~Pet();
	Pet(const Pet& pt);
	void set_id(int i);
	void set_name(string nm);
	void get_old();
	void damage();
	void heal();
	void get_sick();
	void starve();
	void feed();
	void sad();
	void happy();
private:
	int* id = 0;
	string* name = 0;
	int* age;
	int* health;
	int* mood;
	bool* is_ill;
	int* hunger;
};

Pet::Pet(int x, int z, int c, int h) { //конструктор 
	is_ill = new bool(false);
	age = new int(z);
	health = new int(x);
	mood = new int(c);
	hunger = new int(h);
}

void Pet::set_id(int i) {
	this->id = new int(i);
}

void Pet::set_name(string nm) {
	this->name = new string(nm);
}

void Pet::get_old() {
	this->age++;
}

void Pet::damage() {
	this->health--;
}

void Pet::heal() {
	this->health++;
	*(this->is_ill) = false;
}

void Pet::get_sick() {
	srand(time(0));
	int rn = rand() % 2 + 1;
	if (rn == 1) {
		*is_ill = true;
	}
	else {
		*is_ill = false;
	}
}

void Pet::starve() {
	this->hunger++;
}

void Pet::feed() {
	this->hunger--;
}

void Pet::sad() {
	if (mood > 0) {
		this->mood--;
	}
}

void Pet::happy() {
	this->mood++;
}

Pet::~Pet() { //деструктор 
	delete id;
	delete name;
	delete age;
	delete health;
	delete mood;
	delete is_ill;
	delete hunger;

	id = 0;
	name = 0;
	health = 0;
	mood = 0;
	is_ill = 0;
	hunger = 0;
}

Pet::Pet(const Pet& pt) { //конструктор копирования 
	this-> id = new int(*(pt.id));
	this-> age = new int(*(pt.age));
	this-> name = new string(*(pt.name));
	this-> health = new int(*(pt.health));
	this-> mood = new int(*(pt.mood));
	this-> hunger = new int(*(pt.hunger));
	this-> is_ill= new bool(*(pt.is_ill));

	cout << "Hello from copy constructor " << endl;
}

int main() {
	Pet tamagochi(100, 0, 1, 0);
	tamagochi.set_id(1);
	tamagochi.set_name("Tamik");

	Pet Temik(tamagochi);
	
	return 0;
}
