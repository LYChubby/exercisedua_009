#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	int r;
	Lingkaran(int pJari) : r(pJari) {
		cout << "Lingkaran DiBuat" << endl;
	}
	void input() {
		cout << "Masukkan Jejari : " << endl;
		cin >> r;
		setX(r);
	}
	float Luas(int a) {
		return 3.17 * a * a;
	}

	float Keliling(int a) {
		return 3.17 * a * 2;
	}

	void setX(int a) {
		this->r = a;
	}

	int getX() {
		return r;
	}
};

class Bujursangkar :public bidangDatar {
public:
	int s;
	Bujursangkar(int pSisi) :s(pSisi) {
		cout << "Bujursangkar Dibuat" << endl;
	}
	void input() {
		cout << "Masukkan Sisi : " << endl;
		cin >> s;
		setX(s);
	}

	float Luas(int a) {
		return a * a;
	}

	float Keliling(int a) {
		return a * 4;
	}

	void setX(int a) {
		this->s = a;
	}

	int getX() {
		return s;
	}
};

int main() {
	bidangDatar Bd;
	Lingakaran a;
	Bujursangkar b;

	a.input();
	a.Luas();
	a.Keliling();
	a.setX();
	a.getX();

	b.input();
	b.Luas();
	b.Keliling();
	b.setX();
	b.getX();
}