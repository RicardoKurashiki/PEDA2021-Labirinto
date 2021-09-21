#include <iostream>
#include <string>
#include "Pilha.h"

using namespace std;

Pilha::Pilha()
{
	topo_ = -1;
}

bool Pilha::vazia()
{
	return (topo_ == -1);
}

bool Pilha::cheia()
{
	return (topo_ == MAXPILHA - 1);
}

void Pilha::push(TipoDado x)
{
	// se pilha cheia, erro
	if (!cheia())
	{
		// se não, incremente o valor do topo
		++topo_;
		// coloque x no vetor dados na posição topo
		dados[topo_] = x;
	}
	else
	{
		cerr << "Pilha esta cheia!" << endl;
	}
}

TipoDado Pilha::topo()
{
	// se pilha vazia, erro
	if (!vazia())
	{
		// caso contrário, retorne elemento do topo da pilha
		return dados[topo_];
	}
	else
	{
		cerr << "Pilha vazia!" << endl;
		return -1;
	}
}

void Pilha::pop()
{
	// se pilha vazia, erro
	if (!vazia())
	{
		// caso contrário, decremente o topo
		--topo_;
	}
	else
	{
		cerr << "Pilha esta vazia!" << endl;
	}
}