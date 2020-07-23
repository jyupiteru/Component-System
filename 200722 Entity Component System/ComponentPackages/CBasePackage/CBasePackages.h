
#include <vector>

#pragma once

class CBasePackages
{
    std::vector<CBaseComponent *> m_pComponentList;

public:
    CBasePackages(){};
    virtual ~CBasePackages(){};

    virtual void SetComponent(){};

    std::vector<CBaseComponent *> GetComponentList()
    {
        return
    }
};
