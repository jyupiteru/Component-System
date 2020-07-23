
#include "Components/CComponentPosition.h"
#include "CObject/CObject.h"
#include "ComponentPackages/CPackageTransform.h"

int main()
{
	CObject *obj = new CObject();
	obj->SetComponent<CComponentPosition>();
	//obj->SetComponent<CObject>();

	obj->SetPackage<CPackageTransform>();

	obj->GetComponent<CComponentPosition>()->x = 0;
	printf("%f\n", obj->GetComponent<CComponentPosition>()->x);
	obj->GetComponent<CComponentAngle>()->x = 10;
	printf("%f\n", obj->GetComponent<CComponentAngle>()->x);

	getchar();
}
