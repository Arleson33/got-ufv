#include <stdio.h>


int soma(int a,int b){
	
	int soma_num=a+b;
	
	return soma_num;
}
int subtracao(int a,int b){
	int sub=a-b;
	
	return sub;
	
}
int multiplica(int a,int b){
	int mult=a*b;
	return mult;
}
int divisao(int a,int b){
	
}
int main(){
	
	
	printf("soma dois numeros :%d\n",soma(5,5));
	printf("subtrai dois numeros:%d\n",subtracao(5,2));
	printf("multiplica dois numeros:%d\n",multiplica(4,3));

	return 0;
	
}
