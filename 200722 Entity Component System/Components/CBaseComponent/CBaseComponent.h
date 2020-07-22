
#pragma once

class CBaseComponent
{
    CBaseComponent(){};
    virtual ~CBaseComponent(){};
    
    virtual void Init(){};
    virtual void Uninit(){};
    virtual void Update(){};
};
