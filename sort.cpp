#include <iostrem>


using namespace std;


// SelectionSort
/* Algoritmo de ordenação por seleção, onde...*/ 
void selection(int &v, int n){
	int menor = 0, aux;

	for(int i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(v[i] > v[j]){
				menor = j;
			}
			if (i != menor){ // Change of values
				aux = v[i];
				v[i] = v[menor];
				v[menor] = aux;
			}
		}
	}
}

// InsertionSort
/* Algoritmo de ordenação por inserção, onde ... */
void insert(){

}

/* Algoritmo de ordenação por pivoteamento (separação), onde...*/
void quick(){

}

/* Algoritmo de ordenação por junção, onde...*/
void merge(int &v, int n, int m){
	int *tmp = (int*)malloc(n*sizeof(int));
	for (int p = 0, int q = m, int r = 0; r < n; r++){
		if (p >= m){
			tmp[r] = v[q++];
		}
		else if(q >= n){
			tmp[r] = v[p++];
		}
		else if(v[p] <= v[q]){
			tmp[r] = v[p++];
		}
		else if(v[q] < v[p]){
			tmp[r] = v[q++];
		}
	}
	for(int r = 0; r < N; r++){
		v[r] = tmp[r];
	}
	free(tmp);

}


/* Efetua a troca dos valores no vetor. */
void change(int &v[], maior, i - 1){

}
 

int main(){

	int n = 10;
	int vetor[n] = {3, 0, 5, 2, 6, 9, 7, 1, 8, 4};	
	cout << vetor << endl;

	



	return 0;
}