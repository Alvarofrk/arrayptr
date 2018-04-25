#include <iostream>
using namespace std;

int sum(int*,int);
int sumR(int*,int);
void inv(int*,int);
int tam(int*,int);
void cop(int ,int *,int*);
int concatenar(int*,int*,int);
char tam1(int *);

int main(){
	
	int numE;
	cout<<"ingrese el numero de elementos: ";cin>>numE;
	int lista[numE];
	int lista2[numE];
	int *ptr, *ptr1;
	char *ptr2,*ptr3;
	ptr=lista;
	for (int i=0;i<numE;i++){
		cout<<"ingresa el elemento ["<<i<<"]: ";cin>>*(ptr+i);
	}
	/*
	cout<<"elementos lista 2"<<endl;
	ptr1=lista2;
	for (int i=0;i<numE;i++){
		cout<<"ingresa el elemento ["<<i<<"]: ";cin>>*(ptr1+i);
	}*/
	
	//cout<<sumR(lista,numE)<<endl;
	//cout<<sum(lista,numE)<<endl;
	//inv(lista,numE);
	//cou<<endl;
	//cout<<tam(lista,numE)<<endl;
	//cout<<"elementos de la lista : ";tam1(lista);
	//cop(numE,lista,lista2);
	//concatenar(lista,lista2,numE);
	return 0;
}

int sum(int* dl1,int nElem){
	int suma=0;
	for(int i=0;i<nElem;i++){
		
		suma += (*(dl1+i));
	}
	return suma;
}
int sumR(int* dl1, int nElem){
	if(nElem==0)
		return 1;
	return (*(dl1+1))+sumR(dl1+1,nElem-1) ;
}

void inv(int*dl1,int nElem){
	for(int i=nElem-1;i>=0;i--){
		cout<<*(dl1+i)<<" ";
	}
}

int tam(int*dl1,int nElem){
	int cont=0;
	for(int i=0; i<nElem;i++){
		cont++;
	}
	return cont;
}

char tam1(int*dl1){
	int cont=0;
	for(int i=0;*(dl1+i)!='\0';i++){
		cont++;
	}
	cout<<cont;
}

void cop(int nElem,int *dl1,int *dl2){
	for(int i=0;i<nElem;i++){
		*(dl2+i)=*(dl1+i);
	}
	for(int i=0;i<nElem;i++){
		cout<<" elemento  ["<<i<<"] copiado  de lista 1 a lista 2: "<<*(dl2+i)<<endl;
	}
}


	
int concatenar(int* l1, int* l2,int nElem){
	int a=2*nElem;
	int lista3[a];
	int*l3;
	l3=lista3;
	for(int i=0;i<nElem;i++){
		*(l3+i)=*(l1+i);
	}
	for(int i=nElem;i<a;i++){
		*(l3+i)=*(l2+i-nElem);
	}
	for(int i=0;i<a;i++){
		cout<<*(l3+i)<<" ";
	}
	return *l3;
}
