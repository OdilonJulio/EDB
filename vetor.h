#ifndef _VETOR_V_
#define _VETOR_V_

#include <random>
#include <iostream>

using namespace std;


class Vetor{
private:
	int m_tamanho;
	int m_vetor[m_tamanho];

public:
	Vetor();
	Vetor(int tamanho_);

	int m_getTamanho();
	int valorRandomico();
	void m_setTamanho(int tamanho_);

	// Membros para utilizar o "random"
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<>dis;

	friend ostream& operator<< ( ostream& o, const Vetor& vetor_);
	friend istream& operator>> ( istream& i, Vetor& vetor_);

	
};

#endif // _VETOR_V_