#include <array>
#include "Offset.h"

#ifndef PILHA_H
#define PILHA_H

constexpr int MAXPILHA = 100;

using TipoDado = int;

class Pilha {
protected:
	std::array<TipoDado, MAXPILHA> dados;
	int topo_;
public:
	Pilha();
	void push(TipoDado elemento);
	void pop();
	TipoDado topo();
	bool vazia();
	bool cheia();
};

#endif
#pragma once