bool is_perfect (int k){
	int cont = 1, sum = 0;	


	while(cont <= k/2){
		if(k%cont == 0)
			sum += cont;
		cont++;
		}

	return (sum == k);
}


bool brenchless_is_perfect(int k){
	unsigned int cont = 1, unsigned sum = 0;
	while(cont <= k/2){
		sum += cont*(k%cont == 0);
		cont ++;
	}

	return (sum == k);
}

int main(){
	


}