#pragma once

#include <iostream>

using namespace std;

class Map
{
private:

	char MapCharacter[5][10];


	void ResetMap();
	void MapCoords();
	void DisplayMap();

public:

	Map();

	void UpdateMap();


};


