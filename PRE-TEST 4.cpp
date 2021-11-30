#include <iostream>
using namespace std;

int main (){
	int jumlah_simpanan_pokok;
	int bunga_perbulan;
	int lama_simpanan;
	
    int F;
    
    cin>>jumlah_simpanan_pokok;
    cin>>bunga_perbulan;
    cin>>lama_simpanan;
    
    cout<<"jumlah_simpanan:"<<jumlah_simpanan_pokok<<endl;
    for(int F=1; F<=5 ; F++){
    	jumlah_simpanan_pokok+=(jumlah_simpanan_pokok*bunga_perbulan/100);
    	cout<<(jumlah_simpanan_pokok+(bunga_perbulan*lama_simpanan/100))<<endl;
    	
	}
}
