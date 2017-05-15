#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	vector<int> sliderInput;
	int temp;
	cin >> temp;
	while (temp){
		sliderInput.push_back(temp);
	}
	for(int i = 0; i < sliderInput.size(); i++){
		cout << sliderInput[i] << endl;
	}
	cout << "hello world" << endl;
	
	return 0;
}