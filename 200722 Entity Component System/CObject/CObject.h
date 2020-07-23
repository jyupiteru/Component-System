
#include <vector>
#include <typeinfo>

//クラスの前方宣言
class CComponentBase;
class CPackageBase;

#pragma once
class CObject
{
    std::vector<CComponentBase *> m_pComponentList;

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
            if (typeid(*i) == typeid(*component))
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
    T *GetComponent()
    {
        for (auto component : m_pComponentList)
        {
            if (typeid(*component) == typeid(T))
            {
                T *com = dynamic_cast<T *>(component);
                return com;
            }
        }
        return nullptr;
    }
};
