#include <iostream>
using namespace std;

int nilai[] = {2,5,9,10,34};
int skor[5] = {8,12,18,5};
string nama[3];

int main(){
    cout << "skor ke 3 = " << skor [2] << endl;
    skor [2] = 25;
    cout << "skor ke 3 = " << skor[2] << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama Mahasiswa ke-" << i+1 << " = ";
        cin >> nama[i];
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Data Mahasiswa ke-" << i+1 << " = " << nama[i]
        << endl;
    }
    
}

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
    mhs.alamat = "Kasihan";

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


#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat

};

