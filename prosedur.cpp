#include <iostream>

using namespace std;
void HitungLuasPersegiPanjang();

int main()
{
    int i, N;

    cout << "Banyaknya persegi panjang?: ";
    cin >> N;

    for (i = 1; i <= N; i++)
        HitungLuasPersegiPanjang();
    return 0;
}

void HitungLuasPersegiPanjang()

{
    float panjang;
    float lebar;
    float luas;

    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar   : ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << "Luas persegi panjang = " << luas << endl;
}