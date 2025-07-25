#include <iostream> 
using namespace std;

int main() {
	int array[5] = {1,4,2,7,3};
	int biggestValue = 0;

	for (int i = 0; i < 5; i++) {
		if (array[i] >= biggestValue) {
			biggestValue = array[i];
		
		}
	}
	cout << " the biggest value is : " << biggestValue << endl;
}