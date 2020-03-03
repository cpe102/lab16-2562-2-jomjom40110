#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int n){
	vector<int>x(n);
	x.clear();
	for(int i=0;i<n;i++){
		x.push_back(rand()%10);
	}
	return x;
}
void showVector(vector<int>x){
	cout << "[ ";
	for(int i=0;i<x.size();i++)cout << x[i] <<" ";
	cout << " ]";
}
int dotProduct(vector<int>x,vector<int>y){
	int z=0;
	for(int i=0;i<x.size();i++){
		z=z+x[i]*y[i];
	}
	return z;
}