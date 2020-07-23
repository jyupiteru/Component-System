
#include "Components/CPosition.h"
#include "CObject/CObject.h"

int main()
{
	CObject *obj = new CObject();
	obj->SetComponent<CComponentPosition>();
	obj->SetComponent<CComponentPosition>();
	obj->SetComponent<CComponentPosition>();

	obj->GetComponent<CComponentPosition>()->x = 0;
	printf("%f\n", obj->GetComponent<CComponentPosition>()->x);
	obj->GetComponent<CComponentBase>();
	obj->GetComponent<CComponentPosition>()->x =10;
	printf("%f", obj->GetComponent<CComponentPosition>()->x);

	getchar();
}
