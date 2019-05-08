/*
   Programma prodotto matrici
   
   Programmed by Carlo Zambaldo (info@carlozambaldo.it)

   Version:
   Last Update:
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
	int n, m, c, d, P=0;
	cout<<"Inserire le dimensioni di A: "<<endl<<"Righe = ";
	cin>>n;
	cout<<"Colonne: ";
	cin>>m;
	cout<<"Inserire le dimensioni di B: "<<endl<<"Righe = ";
	cin>>c;
	cout<<"Colonne: ";
	cin>>d;
	
	// inizializzo le matrici
	int A[n][m], B[c][d];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			A[i][j]=rand()%5;
		}
	}
	for(int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			B[i][j]=rand()%5;
		}
	}
	
	int C[n][d];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			C[i][j]=0;
		}
	}
	
	cout<<endl<<"Ora eseguo il prodotto AxB."<<endl;
	//controllo se posso fare il prodotto e lo faccio
	int o=0;
	int s=0;
	if((n==d)&&(m==c)){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				for(int k=0; k<m; k++){
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
		cout<<"Il prodotto e': "<<endl;
		cout<<endl<<"Matrice AxB: "<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<d; j++){
				cout<<C[i][j]<<" ";
			}
		cout<<endl<<endl;
		}
	} else {
		cout<<"Non posso eseguire il prodotto, capra."<<endl;
	}
	
	cout<<"Matrice A: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Matrice B: "<<endl;
	for(int i=0; i<c; i++){
		for(int j=0; j<d; j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	

	
	system("PAUSE");
	return 0;
}

