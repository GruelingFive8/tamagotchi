#include <iostream>
#include <thread>
#include "Cat.h";
#include "Map.h";

using namespace std;

void GamePause(int mSeconds);

int main()
{

	bool play = true;
	// game is running/ being played
	int statTick = 100;

	Cat Chewie = Cat();
	Map NewMap = Map();

	while (play == true)
	{
		NewMap.UpdateMap();
		
		Chewie.Behaviour();

		cout << "Chewie is " << Chewie.StateCheck() << endl;

		/*cout << "Chewie is " << Chewie.GetSleepState() << endl; // result varies based on various states
		cout << "Chewie is " << Chewie.GetHungerState() << endl;
		cout << "Chewie is " << Chewie.GetHappinessState() << endl;
		cout << "Chewie is " << Chewie.GetToiletState() << endl; */

		//displays the cat or 'chewie's behaviour to the screen


		GamePause(500); //slows the rate the stat ticks in game 
		
		system("CLS");
	}

	
}

void GamePause(int mSeconds)
{
	chrono::milliseconds dura(mSeconds);
	this_thread::sleep_for(dura);
}