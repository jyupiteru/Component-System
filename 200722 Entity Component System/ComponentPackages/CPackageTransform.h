
#include "CPackageBase.h"
#include "../Components/CComponentAngle.h"
#include "../Components/CComponentPosition.h"

#pragma once

class CPackageTransform : public CPackageBase
{
public:
	CPackageTransform() {};
	~CPackageTransform() {};
    void SetComponents()
    {
        SetComponent<CComponentAngle>();
        SetComponent<CComponentPosition>();
    }
};