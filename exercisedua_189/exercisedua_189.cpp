#include <iostream>
#include <string>
using namespace std;
class buku
{
	string judul;

public:
	buku setJudul(string judl);
	{
		this->judul = judul;
		return;
	}
	string getJudl()
	{
		return this->judul
	}

	bukunya;
};

class mahasiswa {
private:
	int pengarang;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iPengarang, string iNama);
	void cetak();
};

mahasiswa :: mahasiswa() {
	 Pengarang = 0;
	 nama = "joko";
}

mahasiswa::mahasiswa(int iPengarang) {
	pengarang = iPengarang;
}

mahasiswa::mahasiswa(int iNama) {
	nama = iNama;
}

mahasiswa::mahasiswa(int iPengarang, int iNama) {
	pengarang = iPengarang;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "pengarang =" << pengarang << endl;
	cout << endl << "nama =" << nama << endl;
}

int main() {
	mahasiswa mhs1("joko");
	mahasiswa mhs2("lia");
	mahasiswa mhs3("giga");
	mahasiswa mhs4("Asroni")

		return 0;
}

int main() {
	cout << "Daftar pengarang pada penerbit "Game Press" ";
	cout << "joko";
	cout << "lia";
	Cout << "giga";

	return 0;

};
