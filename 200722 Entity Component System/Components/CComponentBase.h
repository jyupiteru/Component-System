
#include "../CObject/CObject.h"
#pragma once

class CComponentBase
{
public:
    /**
     * @brief Update、Drawの実行優先順位
     * @n     0は最後に使用 数字は小さいほど優先度が高い
     */
    int m_priority = 0;

    CObject *m_pCparent;

    CComponentBase(){};
    virtual ~CComponentBase(){};

    virtual void Init(){};
    virtual void Uninit(){};
    virtual void Update(){};
    virtual void Draw(){};
};
