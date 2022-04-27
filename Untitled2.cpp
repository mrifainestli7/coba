#include <cstdlib>
#include <iostream>
using namespace std;
main (){
	int a[5];
	int n=5;
	for(int i=0; i<5; i++){
		cout<<"Masukkan Nilai Array Posisi Ke-"<<i<<"= ";
		cin>>a[i];
	}
	int temp=a[n-1];
 	for(int i=n-1;i>=0;i--)
	a[i+1]=a[i];
 	a[0]=temp;
 	
 	for(int i=0;i<5;i++){
	cout<<a[i]<<" ";}

}
