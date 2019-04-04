

#include "vetor.h"
using namespace std;

/* 
Método Construtor Padrão que instancia vetores com dez valores aleatórios
entre 0 e 10.
*/
Vetor::Vetor():gen(rd()), dis(0, 10){
	m_setTamanho(10);
	for (int i = 0; i < 10; i++){
		m_vetor[i] = valorRandomico();
	}
}

Vetor::Vetor(int tamanho_,
			 int menor_,
			 int maior_):
			 gen(rd()), dis(menor, maior){
	
	m_tamanho = tamanho_;
	for (int i = 0; i < 10; i++){
		m_vetor[i] = vetorRandomico();
	}
}

Vetor::~Vetor(){}

int
Vetor::m_getTamanho(){
	return m_tamanho;
}

void
Vetor::m_setTamanho(int tamanho_){
	m_tamanho = tamanho_;
}

int
Vetor::valorRandomico(){
	return round(dis(gen));
}
ostream& operator<< ( ostream& o, const Vetor& vetor_){
		for (int i = 0;  i < vetor_.m_getTamanho(), i++){
			o << vetor_[i] << endl;
			cout << o << " ";
		}
}

friend istream& operator>> ( istream& i, Vetor& vetor_){
	cout << " Qual o tamanho do vetor? ";
	i >> vetor_.m_tamanho;

	cout << " Digite os " << vetor_.m_tamanho 
		 << " valores do vetor: {"; 
		 for (int i = 0;  i < vetor_.m_getTamanho(), i++){
			i >> vetor_[i];
		 	cout << ", ";
		 }
		 cout << "}";
}