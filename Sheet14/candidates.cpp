#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int main(){

	string candidates[5];
	unsigned int votes[5];
	int winner = 0, total_votes = 0;
	double percentage[5];
	cout.precision(3);

	for (int i = 0; i < 5; i++){
		cout << "Candidate's name: ";
		cin >> candidates[i];
		cout<< "\n";

		cout << "Candidate's votes: ";
		cin >> votes[i];

		total_votes += votes[i];

		cout <<endl;
	}

	for ( int j = 0; j < 5; j++ ){
		if (votes[j] > votes[winner]){
			winner = j;
		}
		percentage[j] = ( (double) votes[j] / total_votes) * 100.0;
	}

	cout << "Candidate		Votes Recived		% of Total Votes" <<endl;
	for (int l = 0; l < 5; l++){
		cout << candidates[l] << "			" << votes[l] << "			" << percentage[l] << "\n";
	}
	cout << "Total			" << total_votes <<endl;
	cout << "The Winner of the Election is " << candidates[winner];
	for( int m = 0; m < 5; m++){
		if( m!= winner and candidates[m] == candidates[winner]){
			cout<< candidates[m] << " ";
		}
	}
}