#pragma once
#include "GiaSuc.h"

class De : public GiaSuc {
public:
	De() { Loai = "De"; }
	void Keu() override;
	int Sua() override;
	int Sinh() override;
	~De();
};