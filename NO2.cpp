#include <iostream>
using namespace std;

int main() {
    //Mendeklarasikan array karakter sebagai input
    char input[] = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'c', 'd'};
    int n = sizeof(input) / sizeof(input[0]);

    //Menggunakan array untuk menyimpan hasil kompresi
    char compressed[2 * n];  // Ukuran maksimum adalah dua kali ukuran input
    int compressed_index = 0;

    //Iterasi melalui array input untuk melakukan kompresi
    for (int i = 0; i < n; ++i) {
        //Menyimpan karakter saat ini
        char current_char = input[i];

        //Menghitung jumlah karakter berurutan
        int count = 1;
        while (i < n - 1 && input[i] == input[i + 1]) {
            ++count;
            ++i;
        }

        //Menambahkan karakter dan jumlahnya ke dalam array hasil kompresi
        compressed[compressed_index++] = current_char;
        compressed[compressed_index++] = static_cast<char>(count + '0');
    }

    //Menampilkan hasil kompresi
    cout << "Input    = ";
    for (char c : input) {
        cout << "'" << c << "', ";
    }

    cout << "\nOutput = ";
    for (int i = 0; i < compressed_index; ++i) {
        cout << "'" << compressed[i] << "', ";
    }

    cout << endl;
    for (int j = 0;j < 55; j++){
    cout << "=";}
    cout << endl;
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105" << "\n";
    for (int j = 0;j < 55; j++){
    cout << "=";}
    cout << endl;

    return 0;
}
