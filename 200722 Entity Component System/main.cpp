
#include "Components/CPosition.h"
#include "CObject/CObject.h"

int main()
{
    CObject *obj = new CObject();
	obj->SetComponent<CPosition>();
	obj->SetComponent<CPosition>();
	obj->SetComponent<CPosition>();

	obj->GetComponent<CPosition>();
	obj->GetComponent<CBaseComponent>();

}
