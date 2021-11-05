#include "Cat.h";
#include "Map.h";

Cat::Cat()
{
	mood = 10;
	hunger = 10;
	Sleepiness = 25;
	toilet = 20;
	HungerState = "started";

}

void Cat::Eat()
{
	hunger+=5;
	
}
void Cat::Sleep()
{
	Sleepiness+= 5;
}
void Cat::Happiness()
{
	mood+=5;
}
void Cat::bathroom()
{
	toilet += 20;
}

void Cat::movement()
{


}

void Cat::Behaviour()
{
	//decrement stats and apply a state depending on their level 

	//hunger
	hunger--;

	if (hunger > 5)
	{
		
		HungerState = "Vibing";
	}
	else 
	{
		HungerState = "Hungry";
		Eat(); // method called when stat is too low
	}

	// sleepiness
	Sleepiness--;

	if (Sleepiness > 5)
	{

		AwakeState = "Awake destroying Stuff";
	}
	else
	{
		AwakeState = "Sleeping on the Xbox";
		Sleep();
	}

	// mood 
	mood--;

	if (mood > 5)
	{

		HappinessState = "Happy";
	}
	else
	{
		HappinessState = "Unhappy";
		Happiness();
	}

	// toilet
	toilet--;

	if (toilet > 3)
	{
		ToiletState = "Not needing the bathroom";
	}
	else
	{
		ToiletState = "Needing the bathroom";
		bathroom();
	}
}

string Cat::StateCheck() // creates a priority of what state is returned 
{
	//return HungerState, AwakeState, HappinessState, ToiletState;

	if (Sleepiness > 5) // if a particular stat is at a certain level, return it, stats are in an order of priority as one action can be done at any time
	{
		return AwakeState;
	}
	else if (toilet > 3)
	{
		return ToiletState;
	}
	else if (hunger > 5)
	{
		return HungerState;
	}
	else if (mood > 5)
	{
		return HappinessState;
	}
} 
/*string Cat::GetHungerState()
{

	return HungerState;
}
string Cat::GetSleepState()
{

	return AwakeState;
}
string Cat::GetHappinessState()
{
	return HappinessState;
}
string Cat::GetToiletState()
{
	return ToiletState;
} */