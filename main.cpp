#include "GiaSuc.h"
#include "Bo.h"
#include "De.h"
#include "Cuu.h"
#include <vector>

int main() {
	int sum; 
	cout << "Nhap so luong gia suc: "; cin >> sum;
	vector <GiaSuc*> list(sum);
	for (int i = 0; i < sum; i++){
		cin.ignore();
		string cattle; cin >> cattle;
		if (cattle == "Bo")
			list[i] = new Bo();
		if (cattle == "De")
			list[i] = new De();
		if (cattle == "Cuu")
			list[i] = new Cuu();
	}
	for (int i = 0; i < sum; ++i) {
		list[i]->Keu();
	}
	int soLuongBo = 0;
	int soLuongCuu = 0;
	int soLuongDe = 0;
	for (int i = 0; i < sum; i++) {
		if (list[i]->getLoai() == "Bo") soLuongBo += list[i]->Sinh();
		if (list[i]->getLoai() == "De") soLuongDe += list[i]->Sinh();
		if (list[i]->getLoai() == "Cuu") soLuongCuu += list[i]->Sinh();
	}

	cout << "So luong gia suc sau 1 lua sinh " << endl;
	cout << "So luong bo la: " << soLuongBo << endl;
	cout << "Soluog de la: " << soLuongDe << endl;
	cout << "So luong cuu la: " << soLuongCuu << endl;
	int soLuongSua = 0;
	for (int i = 0; i < sum; i++) {
		soLuongSua += list[i]->Sua();
	}
	cout << "So luong sua sau 1 dot cho sua la: " << soLuongSua << endl;
	system("pause");
}