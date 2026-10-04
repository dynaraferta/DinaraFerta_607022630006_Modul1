#include <iostream>
using namespace std;
int main (){
	float suhu_fahrenheit;
	cin>>suhu_fahrenheit;
	float hasil_akhir = (suhu_fahrenheit-32)*5/9;
	cout<<"Hasil Akhir:"<<hasil_akhir<<"C";
	return 0;
}
