#include <iostream>
using namespace std;

int main (){
	char nama[30], nh[14], alamat[20], nr[20], kl[20];
	int nim, np, um;
	float bb;
	
	cout<<"Masukan No Presensi	: ";
	cin>> np;
	
	cout<<"Masukan NIM		: ";
	cin>> nim; cin.ignore();
	
	cout<<"Masukan Nama		: ";
	cin.getline(nama,30);
	
	cout<<"Masukan No Hp		: ";
	cin.getline(nh,14);
	
	cout<<"Masukan Alamat		: ";
	cin.getline(alamat,20);
	
	cout<<"Masukan Nama Prodi	: ";
	cin.getline(nr,20);
	
	cout<<"Masukan Kelas		: ";
	cin.getline(kl,20);
	
	cout<<"Masukan Umur		: ";
	cin>> um;
	
	cout<<"Masukan Berat Badan	: ";
	cin>> bb;
	
	cout<<endl;
	
	cout<<"Identitas Mahasiswa"<<endl;
	cout<<"No Presensi	: "<<np<<endl;
	cout<<"NIM 		: "<<nim<<endl;
	cout<<"Nama 		: "<<nama<<endl;
	cout<<"No Hp 		: "<<nh<<endl;
	cout<<"Alamat 		: "<<alamat<<endl;
	cout<<"Prodi 		: "<<nr<<endl;
	cout<<"Kelas 		: "<<kl<<endl;
	cout<<"Umur 		: "<<um<<endl;
	cout<<"Berat Badan 	: "<<bb;
}
