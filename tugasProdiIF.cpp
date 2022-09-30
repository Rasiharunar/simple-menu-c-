// variable

#include <iostream>

using namespace std;

int main(){
    int opsi;
    string pk [] = {"Tiara Humaira Putri", "Araa", "Purwokerto, 21 September 2002", "Teknik Informatika", "Pengusaha Sukses", "Menggambar", "bau tidak sedap", "085711478769", "@tiara_hp"};
    double r, pi = 3.14, lLingkaran, tTabung, vTabung, lPTabung;
    string IF [] = {"AZFA FAIRUZIA HARTOYO", "MALIK AZIZ RAMADHAN", "GANGSAR REKA PAMBUDI", "RAHMA AYU RIYANTINI", "FRADIA ADHELIA FRIADIANI", "FERDY PERMANA", "MUHAMMAD RIZKY NUGROHO", "MUHAMMAD AHMES MAULANA", "AQILAH FIKRY ALBARI", "AKMELIA ZAHARA", "RIDWAN", "HARUN AR RASYID" };
    
    char lagi;
    do
    {
        /* code */
  
    cout <<"---------------------------"<<endl;
    cout <<"            MENU           "<<endl;
    cout <<"---------------------------"<<endl;
    cout <<"1. Biodata PK"<<endl;
    cout <<"2. Hitung Luas Lingkaran dan Volume luas permukaan tabung"<<endl;
    cout <<"3. TEMAN Prodi S1 Teknik Informatika"<<endl;
    cout <<"Opsi Menu Ke : "<<endl;
    cin >>opsi;

    switch (opsi)
    {
    case 1:
        cout <<"-------------------------------"<<endl;
        cout <<"  Biodata Pembimbing Kelompok  "<<endl;
        cout <<"-------------------------------"<<endl;
        cout <<"Nama Lengkap : "<< pk[0] <<endl;
        cout <<"Nama Panggilan : "<< pk[1]<<endl;
        cout <<"TTL : "<<pk[2]<<endl;
        cout <<"Jurusan : "<<pk[3]<<endl;
        cout <<"Cita-Cita : "<<pk[4]<<endl;
        cout <<"Hal-hal yang disukai : "<<pk[5]<<endl;
        cout <<"Hal-hal yang tidak disukai : "<<pk[6]<<endl;
        cout <<"Akun Instagram : "<<pk[7]<<endl;    

        break;
    case 2:
    //luas Lingkaran
        cout <<"-----------------------------------------------"<<endl;
        cout <<"Luas Lingkaran dan Volume Luas Permukaan Tabung"<<endl;
        cout <<"-----------------------------------------------"<<endl;
        
        cout <<"Input jari jari lingkaran : "<<endl;
        cin >>r;
        lLingkaran = (r*r)*pi;
        cout <<"Luas Lingkaran = " << lLingkaran << " cm"<<endl;

    //Volume tabung
        cout <<"Input Tinggi tabung :  "<<endl;
        cin >>tTabung;
        vTabung = lLingkaran * tTabung;
        cout <<"Volume Tabung : "<< vTabung << " cm"<<endl;
        
    //luas Permukaan tabung
        lPTabung = 2*pi*r *(r+tTabung);
        cout <<"luas Permukaan Tabung : "<< lPTabung << " cm"<<endl;
        break;

    case 3:
    // Get data temen se prodi Informatika
        cout<<"------------------------------------------------"<<endl;
        cout<<"Teman-teman Kelompok MATLAB Prodi Informatika : "<<endl;
        cout<<"------------------------------------------------"<<endl;
        for(int a = 0; a<= 11; a++){
        cout << a+1 <<". "<<IF[a] <<"\n";
        }
        break;
    default :
        cout<<"tidak tersedia"<<endl;
    }
    
    cout << "Menuju Menu Awal ? (y/t)?";
    cin >> lagi;
    cout << endl;
} while (lagi!= 't');


}

// funtion menu

// function matematika

// function select friend 