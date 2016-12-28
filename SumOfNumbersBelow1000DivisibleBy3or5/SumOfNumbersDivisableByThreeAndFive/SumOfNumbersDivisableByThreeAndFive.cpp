#include <vector>
#include<iostream>
using namespace std;

//Find the sum of all numbers below 1000 that are divisible by 3 or 5. 

int sumOfNumbersDivisableByThreeAndFive(const vector<int>& listOfNumbers){

	vector<int> vectorOfCombinedDivisability;
	for (int i = 0; i < listOfNumbers.size(); ++i){
		if (!(listOfNumbers[i] % 3)){
			vectorOfCombinedDivisability.push_back(listOfNumbers[i]);
		}
		else if (!(listOfNumbers[i] % 5)){
			vectorOfCombinedDivisability.push_back(listOfNumbers[i]);
		}
	}
	int x = 0;
	for (int i = 0; i < vectorOfCombinedDivisability.size(); ++i){
		cout << vectorOfCombinedDivisability[i] << "\n"; //Debugging
		x += vectorOfCombinedDivisability[i];
	}
	
	return x;
}

int main(){
	vector<int> naturalNumbers;
	int x = 1000;
	while (--x){ naturalNumbers.push_back(x); }

	//for (int x = 0; x < 1000; ++x){		 //Debugging
	//	naturalNumbers.push_back(x);		 //Debugging
	//}										 //Debugging

	//for (int x : naturalNumbers) cout << x << "\n"; //Debugging
	cout << sumOfNumbersDivisableByThreeAndFive(naturalNumbers);
	cout << "\n";
	system("pause");
}

//This function includes numbers BELOW 1000, divisible by either 3 OR 5, and excludes number divisible by both... #CRAY!!!