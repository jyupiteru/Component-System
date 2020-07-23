
#include "../Components/CComponentBase.h"

#include <vector>

#pragma once

class CPackageBase
{
    /**
     * @brief このパッケージのコンポーネントリスト
     */
    std::vector<CComponentBase *> m_pComponentList;

public:
    /**
     * @brief  CBasePackagesの生成時処理
     */
    CPackageBase(){};

    /**
     * @brief CBasePackagesの破棄時処理
     */
    virtual ~CPackageBase(){};

    /**
     * @brief コンポーネントを全部セットする処理 継承先でセットする
     */
    virtual void SetComponents(){};

    /**
     * @brief   コンポーネントをObjectにセットするのに使う処理
     * @return std::vector<CBaseComponent *> セットするリスト
     */
    std::vector<CComponentBase *> GetComponentList()
    {
        return m_pComponentList;
    }

    /**
     * @brief  コンポーネントをセットする処理
     * @tparam T 入れたいコンポーネントクラスの型を入れる
     * @return true 成功した
     * @return false 失敗です
     */
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
};
