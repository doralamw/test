#pragma once
#include "GiaSuc.h"

class Cuu : public GiaSuc {
public:
	Cuu() { Loai = "Cuu"; }
	void Keu() override;
	int Sua() override;
	int Sinh() override;
	~Cuu();
};