
#include <vector>
#include <typeinfo>

#include "../Components/CBaseComponent/CBaseComponent.h"
#include "../ComponentPackages/CBasePackage/CBasePackages.h"

#pragma once
class CObject
{
    std::vector<CBaseComponent *> m_pComponentList;

public:
    CObject(){};
    virtual ~CObject()
    {
        Uninit();
    }
    virtual void Init(){};

    virtual void Uninit()
    {
        m_pComponentList.clear();
    }

    virtual void Update(){};

    virtual void Draw(){};

    template <class T>
    bool SetComponent()
    {
        T *component = new T();
        //すでに追加されてないかの確認処理
        for (auto i : m_pComponentList)
        {
            if (typeid(i) == typeid(component))
            {
                return false;
            }
        }
        m_pComponentList.push_back(component);
        component->Init();
        return true;
    }

    template <class T>
    void SetPackage()
    {
    }

    template <class T>
    void GetComponent()
    {
    }
};
