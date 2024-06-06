#pragma once
#include "GiaSuc.h"

class Bo : public GiaSuc {
public:
	Bo() { Loai = "Bo"; }
	void Keu() override;
	int Sua() override;
	int Sinh() override;
	~Bo();
};