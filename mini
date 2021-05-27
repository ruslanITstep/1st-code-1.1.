#include <iostream>
#include <ctime>
using namespace std;

class Player {
public:
	virtual void attack() = 0;
	virtual void set_playible() = 0;
	virtual bool get_playible() = 0;
	virtual void Miss() = 0;
	virtual int get_health() = 0;
	virtual void get_reward() = 0;
};


class Dino : public Player
{
public:
	Dino();
	~Dino();
	Dino(const Dino& dd);
	void set_playible();
	bool get_playible();
	int get_health();
	void get_reward();
	void attack();
	void Miss();

private:
	int* health = 0;
	bool* playible = 0;
	string* rewards = 0;
};

Dino::Dino()
{
	health = new int(100);
	playible = new bool(false);

	rewards = new string[3];
	rewards[1] = "apple";
	rewards[2] = "banana";
}

Dino::~Dino()
{
	delete health;
	delete playible;
	delete[] rewards;

	playible = 0;
	health = 0;
	rewards = 0;
}

Dino::Dino(const Dino& dd) {
	this->health = new int(*(health));
	this->playible = new bool(*(playible));

	this->rewards = new string(*(rewards));
}

void Dino::set_playible() {
	*playible = true;
}

bool Dino::get_playible() {
	return *(this->playible);
}

int Dino::get_health() {
	return *(this->health);
}

void Dino::get_reward(){
	int array;
	srand(time(0));
	array = rand() % 2 + 1;
	cout << rewards[array] << endl;
}

void Dino::attack() {
	*health -= 10;
	cout << *health << endl;
}

void Dino::Miss() {
	cout << "Reptile miss a shot!" << endl;
}

class Corona : public Player
{
public:
	Corona();
	~Corona();
	Corona(const Corona* nn);
	void set_playible();
	bool get_playible();
	int get_health();
	void get_reward();
	void attack();
	void Miss();

private:
	int* health = 0;
	bool* playible = 0;
	string* rewards = 0;
};

Corona::Corona()
{
	health = new int(50);
	playible = new bool(false);
	rewards = new string[3];
	rewards[1] = "potat";
	rewards[2] = "Lettuce";
}

Corona ::~Corona()
{
	delete health;
	delete playible;
	delete[] rewards;
	playible = 0;
	health = 0;
	rewards = 0;
}

Corona::Corona(const Corona* nn){
	this->health = new int(*(health));
	this->playible = new bool(*(playible));

	this->rewards = new string(*(rewards));
}

void Corona::set_playible() {
	*playible = true;
}

bool Corona::get_playible() {
	return *(this->playible);
}

int Corona::get_health() {
	return *(this->health);
}

void Corona::get_reward() {
	int array;
	srand(time(0));
	array = rand() % 2 + 1;
	cout << rewards[array] << endl;
}

void Corona::attack() {
	*health -= 5;
	cout << *health << endl;
}

void Corona::Miss() {
	cout << "Virus miss a shot!" << endl;
}

int menu() {
	int fighter;
	cout << "Please wait,we loading your information!" << endl;
	cout << "When you wait you can play a short game." << endl;
	cout << "Choose your fighter" << endl;
	cout << "1-Reptile" << endl;
	cout << "2-Virus" << endl;
	cin >> fighter;
	return fighter;
}

int main() {
	int fight = 0;
	srand(time(0));
	Dino Reptile;
	Corona Virus;

	if (menu() == 1) {
		Reptile.set_playible();
	}
	else {
		Virus.set_playible();
	}
	while (true) {
		cin.get();
		fight = rand() % 2 + 1;
		if (fight == 1) {
			Reptile.attack();
			Reptile.Miss();
		}
		else if (fight == 2){
			Virus.attack();
			Virus.Miss();
		}
		if (Virus.get_health() == 0 || Reptile.get_health() == 0) {
			if (Virus.get_playible() == false) {
				Reptile.get_reward();
			}
			else if(Reptile.get_playible() == false) {
				Virus.get_reward();
			}
			return -1;
		}
	}
	return 0;
}
