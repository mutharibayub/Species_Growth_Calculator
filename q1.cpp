//Mutharib(i200476) assignment 1

#include <cmath>
#include <iostream>
using namespace std;
int main(){
	
	unsigned int A0,A;		//A0 is for initial specie quantity, A is for finaly specie quantity
	float t;			//t is for time passed  (in hours)
	const float k=0.25;		
	cout<<"ALL VALUES OF t WILL BE TAKEN IN HOURS!!\n";		//prompt for input
	cout<<"Enter number of specified specie at t=0:\t";		//prompt for input		
	cin>>A0;		//Get input of the initial amount of the specific specie
	cout<<"How many hours have passed?\t";		//prompt for input
	cin>>t;		//Get input of the number of hours passed
	A=A0*exp(k*t);		//Calculating the amount of specie after the specified time (using formula)
	cout<<"The quantity of specified specie is\t"<<A<<endl;		//Output the amount of specie after specified time
	
	return 0;
}
