#pragma once
#include <string>
using namespace std; 

class Cat
{
private:
	int mood;
	int hunger;
	int Sleepiness;
	int toilet;

	

	string HungerState; 
	string AwakeState;
	string HappinessState;
	string ToiletState;

	bool Awake;
	// attributes

	void Eat();
	void Sleep();
	void Happiness();
	void bathroom();
	void movement();
	// private methods
public:

	Cat();

	string StateCheck();
	void Behaviour();

	/*string GetHungerState();
	string GetSleepState();
	string GetHappinessState();
	string GetToiletState();*/

	// public methods
};
