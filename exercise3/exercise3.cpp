#include <iostream>
#include <vector>
using namespace std;
class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*>daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
	}
	void tambahpengarang(pengarang*);
	void cetakpengarang();
};
class pengarang {
public:
	string nama;
	vector<penerbit*>daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
	}
	void tambahpenerbit(pengarang*);
	void cetakpenerbit();
};

class judulbuku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	judulbuku(string pNama) :nama(pNama) {}
	void tambahpengarang(pengarang*);
	void cetakpengarang();
};

void penerbit::tambahpengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakpengarang() {
	cout << "daftar penerbit yang diikuti\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void judulbuku::tambahpengarang(pengarang* pPengarang) {

}
void judulbuku::cetakpengarang(){

}

int main(){
	pengarang* varPengarang1 = new pengarang("gama pres");
	pengarang* varPengarang2 = new pengarang("intan pariwara");


	penerbit* varPenerbit1 = new penerbit("joko\n""lia\n""giga\n");
	penerbit* varPenerbit2 = new penerbit("asroni\n""giga\n");

	judulbuku* varBuku1 = new judulbuku("giga");
	judulbuku* varBuku1 = new judulbuku("joko");
	judulbuku* varBuku1 = new judulbuku("lia");
	judulbuku* varBuku1 = new judulbuku("asroni");
}
