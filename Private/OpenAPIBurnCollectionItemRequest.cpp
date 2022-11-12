/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.2.1
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIBurnCollectionItemRequest.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPIBurnCollectionItemRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("quantity")); WriteJsonValue(Writer, Quantity);
	Writer->WriteObjectEnd();
}

bool OpenAPIBurnCollectionItemRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("quantity"), Quantity);

	return ParseSuccess;
}

}
