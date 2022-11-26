#include<bits/stdc++.h>
using namespace std;

main(){
	int a;
	for(int i=1;i<32;i*=2){
		a=0;
		for(int j=1;j<32;j++){
			if((j&i)==i){
				a++;
				cout<<j<<" ";
			if(a%5==0) cout <<"\n";
			}
			cout<<" ";
		}cout<<"\n";
	}
}
