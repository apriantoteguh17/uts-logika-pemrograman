#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int bil;
	cout<<"Aprianto Teguh Abdi || Soal Type B"<<endl;
	cout<<"[1]Menghitung Total Gaji Karyawan"<<endl;
	cout<<"[2]Menghitung Bilangan Positif & Negatif"<<endl;
	cout<<"Silahkan Pilih Menu [1.......2] =";
	cin>>bil;
	
	cout<<"=================================================\n";
	switch (bil){
		case 1:
			
		char nama[10],gol;
		int tj,gp,mk,tmk,total,lama;//ket:tmk= tunjangan masa kerja, tj=tunjangan jabatan, gp=gaji pokok, mk=masa kerja, gol=golongan
		
		cout<<"Masukkan Nama anda :";
		cin>>nama;
		cout<<"Masukkan Golongan kerja Anda : ";
		cin>>gol;
		cout<<"\n=========================\n";
		if((gol == 'X')||(gol == 'x')){
			cout<<"Masa Kerja Anda:";
			cin>>mk;
			if(mk>=3){
				gp=6000000;
				tj=2500000;
				tmk=1500000;
				total=gp+tj+tmk;
				cout<<"Nama Anda :"<<nama<<endl;
				cout<<"Gaji Pokok Gol A : Rp. "<<gp<<endl;
				cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
				cout<<"Tunjangan Masa Kerja :Rp. "<<tmk<<endl;
				cout<<"Total Gaji Anda : Rp. "<<total<<endl;
			}
			else{
				gp=6000000;
				tj=2500000;
				cout<<"Nama Anda :"<<nama<<endl;
				cout<<"Gaji Pokok Gol A : Rp. "<<gp<<endl;
				cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
				cout<<"Total Gaji Anda : Rp. "<<gp+tj<<endl;
			}
						
		}else if((gol == 'Y')||(gol == 'y')){
			cout<<"Masa kerja:";
			cin>>mk;
			if(mk>=3){
			gp=5000000;
			tj=2000000;
			tmk=1250000;
			total=gp+tj+tmk;
			cout<<"Nama Anda :"<<nama<<endl;
			cout<<"Gaji Pokok Gol B : Rp. "<<gp<<endl;
			cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
			cout<<"Tunjangan Masa Kerja :Rp. "<<tmk<<endl;
			cout<<"Total Gaji Anda : Rp. "<<total<<endl;	
			}else {
			gp=5000000;
			tj=2000000;
			tmk=1250000;
			cout<<"Nama Anda :"<<nama<<endl;
			cout<<"Gaji Pokok Gol B : Rp. "<<gp<<endl;
			cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
			cout<<"Total Gaji Anda : Rp. "<<gp+tj<<endl;
			}
		}else if((gol == 'Z')||(gol == 'z')){
			cout<<"Masa kerja:";
			cin>>mk;
			if(mk>=3){
			gp=4000000;
			tj=1500000;
			tmk=1000000;
			total=gp+tj+tmk;
			cout<<"Nama Anda :"<<nama<<endl;
			cout<<"Gaji Pokok Gol C : Rp. "<<gp<<endl;
			cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
			cout<<"Tunjangan Masa Kerja :Rp. "<<tmk<<endl;
			cout<<"Total Gaji Anda : Rp. "<<total<<endl;
			}else{
			gp=4000000;
			tj=1500000;
			tmk=1000000;
			cout<<"Nama Anda :"<<nama<<endl;
			cout<<"Gaji Pokok Gol C : Rp. "<<gp<<endl;
			cout<<"Tunjangan Jabatan : Rp. "<<tj<<endl;
			cout<<"Total Gaji Anda : Rp. "<<gp+tj<<endl;
			}
		}break;
		
		case 2: {
			int nilai;
		cout<<"Masukan Nilai Anda : ";
		cin>>nilai;
		(nilai >=0)?(cout<<" positif "):
		(cout<<" negatif.");
				break;
	}
	 default :
	 cout<<"Maaf anda salah Menu";	
    }
	
		return 0;
}
