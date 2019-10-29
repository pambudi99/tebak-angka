 #include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string kata="universitasdiannuswantoro";
    string tebak;
    int jumlah_huruf;
    srand(static_cast<unsigned int>(time(0)));


    jumlah_huruf = kata.size();
    cout << "\nJumlah huruf dari kata rahasia adalah : " << jumlah_huruf << endl;
    string acak = kata;

    for (int i = 0; i < jumlah_huruf; ++i) {
        int huruf1 = (rand() % jumlah_huruf);
        int huruf2 = (rand() % jumlah_huruf);
        char temp = acak[huruf1];
        acak[huruf1] = acak[huruf2];
        acak[huruf2] = temp;
    }

    cout << "kata yang harus ditebak : " << acak << endl;
    cout << "masukan jawaban yang benar ! ";
    cin >> tebak;

    if(tebak!=kata){
        cout<< "tebakan anda salah"<< endl;
    }
    else{
        cout<< "selamat tebakan anda benar"<< endl;
    }


    return 0;
}
