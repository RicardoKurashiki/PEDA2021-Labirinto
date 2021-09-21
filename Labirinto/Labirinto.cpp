#include <iostream>
#include <vector>
#include "Pilha.h"
#include "Offset.h"

using namespace std;

int main()
{
	Pilha path_x;
	Pilha path_y;
	Offset direction;

	vector<string> labirinto = {
		"XXXXXXXXXXXXXXXXXXXXX",
		"X     X     X     X X",
		"XX XX XXXXX X X X   X",
		"X   X       XXX XXX X",
		"X X X XXXXXXX   X   X",
		"X X   X   X X X   X X",
		"X XXXXX X X   XXXXX X",
		"X X     X XXX  X    X",
		"X X X X X   XX XX XXX",
		"X X XXX X X     X   X",
		"E X X X X XXXXX XXX X",
		"X     X X   X X X   X",
		"X XXXXX XXX X XXX X X",
		"X X       X X   X X X",
		"X   XXX X X XXX X X X",
		"XXX X X X X X X X XXX",
		"X X   X X   X   X   X",
		"X XXX XXXXXXXXX XXX X",
		"X                 X X",
		"XXXXXXXXXXXXXXXXXXXSX"
	};

	// procurando ponto inicial
	// snake = Offset(10, 0);
	for (int y = 0; y < 21; ++y)
	{
		for (int x = 0; x < 20; ++x)
		{
			if (labirinto[x][y] == 'E')
				direction = Offset(x, y);
		}
	}

	// programa principal
	bool isSearching = true;
	int current_x = direction.getX(), current_y = direction.getY();

	while (isSearching)
	{
		if (current_x == 0) isSearching = false;
		cout << "ABC" << endl;
		--current_x;
	}
}