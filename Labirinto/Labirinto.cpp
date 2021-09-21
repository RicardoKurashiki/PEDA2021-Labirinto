#include <iostream>
#include <vector>
#include <string>
#include "Pilha.h"
#include "Offset.h"

using namespace std;

bool isValid(char position) { return (position == ' ' || position == 'S'); }

int main()
{
	Offset coords;

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

	vector<string> labirinto_layout = {
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
	for (int y = 0; y < labirinto.size() - 1; ++y)
	{
		for (int x = 0; x < labirinto[y].size() - 1; ++x)
		{
			if (labirinto[x][y] == 'E')
				coords = Offset(x, y);
		}
	}

	// programa principal

	bool isSearching = true;

	while (isSearching)
	// for (int i = 0; i < 20; ++i)
	{
		// CIMA
		if (isValid(labirinto[coords.getX() - 1][coords.getY()]))
		{
			coords.move('N');
			labirinto[coords.getX()][coords.getY()] = '*';
			labirinto_layout[coords.getX()][coords.getY()] = '*';
		}
		// BAIXO
		else if (isValid(labirinto[coords.getX() + 1][coords.getY()]))
		{
			coords.move('S');
			labirinto[coords.getX()][coords.getY()] = '*';
			labirinto_layout[coords.getX()][coords.getY()] = '*';
		}
		// DIREITA
		else if (isValid(labirinto[coords.getX()][coords.getY() + 1]))
		{
			coords.move('E');
			labirinto[coords.getX()][coords.getY()] = '*';
			labirinto_layout[coords.getX()][coords.getY()] = '*';
		}
		// ESQUERDA
		else if (isValid(labirinto[coords.getX()][coords.getY() - 1]))
		{
			coords.move('W');
			labirinto[coords.getX()][coords.getY()] = '*';
			labirinto_layout[coords.getX()][coords.getY()] = '*';
		}
		else if (labirinto[coords.getX()][coords.getY()] == 'S')
		{
			isSearching = false;
		}
		else
		{
			labirinto_layout[coords.getX()][coords.getY()] = ' ';
			coords.undo();
		}
		for (int i = 0; i < labirinto_layout.size(); ++i) cout << labirinto_layout[i] << endl;
		cout << endl;
	}


}