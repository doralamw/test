#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class GiaSuc {
protected:
	string Loai;
public:
	GiaSuc() { Loai = ""; }
	virtual void Keu() = 0;
	virtual int Sua() = 0;
	virtual int Sinh() = 0;
	string getLoai() { return Loai; }
	~GiaSuc() {}
};