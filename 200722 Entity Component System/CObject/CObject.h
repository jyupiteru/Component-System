
#include <unordered_map>

#include "../Components/CBaseComponent/CBaseComponent.h"
#include "../ComponentPackages/CBasePackage/CBasePackages.h"

#pragma once
class CObject
{
    std::unordered_map<CBaseComponent *, std::string> m_pComponentList;

public:
    CObject();
    virtual ~CObject()
    {
        Uninit();
    }
    virtual void Init();

    virtual void Uninit()
    {
    }

    virtual void Update();
};
