#include "Map.h"

Map::Map()
{
	ResetMap();
}

void Map::DisplayMap()
{
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 10; column++)
		{
			cout << MapCharacter[row][column];
		}
		cout << endl;
	}
	cout << endl;
} 

void Map::MapCoords()
{
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 10; column++)
		{
			cout << "[" << row << "," << column << "] ";
		}
		cout << endl;
	}
	cout << endl;
}

void Map::UpdateMap()
{
	ResetMap();
	MapCharacter[0][0] = (char)254;
	DisplayMap();
}

void Map::ResetMap()
{
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 10; column++)
		{
			MapCharacter[row][column] = (char)176;
		}
	}
}