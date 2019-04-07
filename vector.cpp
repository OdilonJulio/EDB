#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main(){
	vector<int> v1;
	int tamanho;
	int valor; 
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<>dis;

	cout << 'Quanto elementos? ' << endl;
	cin << tamanho << endl;
	cout << 'Elementos do vetor : ';
	for (int i = 0; i < tamanho; i++){
		valor = round(dis(gen));
		v1.push_back();
	}

	return 0;
}