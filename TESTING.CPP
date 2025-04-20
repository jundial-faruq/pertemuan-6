#include <iostream>
using namespace std;

//membuat struct mahasiswa
struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "2024014001";
    mhs.nama = "Abra";
    mhs.alamat = "kasihan";

    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan Nama = ";
    cin >> mhs.nama;
    cout << "Masukan Alamat = ";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;

}

