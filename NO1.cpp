#include <iostream>
using namespace std;

int main() {
    int jmlh_mahasiswa; //Variabel untuk menyimpan jumlah mahasiswa.
    string nama_mahasiswa[10]; //Array yang akan menyimpan nama mahasiswa. Ukuran array adalah 10.
    string* pNm; //Pointer yang akan digunakan untuk mengakses elemen-elemen dari array 'nama_mahasiswa'.
    pNm = &nama_mahasiswa[0]; //Menginisialisasi pointer 'pNm' dengan alamat dari elemen pertama dalam array 'nama_mahasiswa'.

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jmlh_mahasiswa;
    cout << "\n";

    //Meminta pengguna memasukkan nama-nama mahasiswa dan menyimpannya dalam array 'nama_mahasiswa'.
    for (int i = 0; i < 10; i++){
        cout << "Masukkan data nama mahasiswa ke - " << i+1 << ":";
        cin >> nama_mahasiswa[i];
        cout << "\n";
    }
    for (int j = 0;j < 55; j++){ //Garis pembatas
    cout << "=";}
    cout << endl;
    cout << "Nama Mahasiswa\t\t\tAlamat pada Komputer" << "\n";
    for (int j = 0;j < 55; j++){
    cout << "=";}
    cout << endl;

    //Mencetak nama mahasiswa beserta alamat memori tempat nama tersebut disimpan dalam array.
    for (int i = 0; i < 10; i++){
        cout << *pNm << "\t\t\t\t";
        cout << pNm << "\n";
        pNm++;
        cout << "\n";
    }
    for (int j = 0;j < 55; j++){
    cout << "=";}
    cout << endl;
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105";
    cout << "\nProgram Input Nama Mahasiswa "<<endl;
    for (int j = 0;j < 55; j++){
    cout << "=";}
    cout << endl;

    return 0;
}
