#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char teks1[10], teks2 [10];
	cout << "Masukkan Nama Depan Anda : ";
	cin >> teks1;
	cout << "Masukkan Nama Keluarga Anda : ";
	cin >> teks2;
	strcat (teks1, teks2);
	cout << "Nama Lengkap Anda : " << teks1 << endl;
	system ("PAUSE");
	return 0;
}
