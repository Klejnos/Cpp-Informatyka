#include <iostream>
#include <cstdlib>
using namespace std;

int a[5][5];

int main(int argc, char** argv) {
	
	for(int i=0;i<5;i++) { 
		for(int j=0;j<5;j++) {
			if(i==j) a[i][j]=9; 
			else a[i][j]=1; 
		} 
	}
	for(int i=0;i<5;i++) { 
		for(int j=0;j<5;j++) { 
			cout<<a[i][j]<<" "; 
		} 
		system("PAUSE");
	} 
	return 0;
}
