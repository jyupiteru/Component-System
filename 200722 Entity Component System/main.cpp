
#include "Components/CPosition.h"
#include "CObject/CObject.h"

int main()
{
	CObject *obj = new CObject();
	obj->SetComponent<CPosition>();
	obj->SetComponent<CPosition>();
	obj->SetComponent<CPosition>();

	obj->GetComponent<CPosition>()->x = 0;
	printf("%f\n", obj->GetComponent<CPosition>()->x);
	obj->GetComponent<CBaseComponent>();
	obj->GetComponent<CPosition>()->x += 1;
	printf("%f", obj->GetComponent<CPosition>()->x);

	getchar();
}
