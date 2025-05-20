// Buatlah program c++ dengan class Barang yang meiliki atribut : namaBarang,
// KodeBarang
// program memiliki construktor berparameter
//untuk mengisi nilai namaBarang dan kodeBarang
// serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
using namespace std;

class barang
{
    public: 
    barang(string namaBarang, int kodeBarang);
};

barang::barang(string namaBarang, int kodeBarang){
    cout << "Construct dengan Parameter" << endl;
    cout << "Nama Barang : " << kodeBarang << endl;
    cout << "kode Barang : " << kodeBarang << endl;
}

int main(){
    barang b("bola", 8700);
    return 0;
}