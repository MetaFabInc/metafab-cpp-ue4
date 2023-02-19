/**
 * MetaFab API
 * Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.5.1
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICollectionItemAttributesInner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICollectionItemAttributesInner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (TraitType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("trait_type")); WriteJsonValue(Writer, TraitType.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICollectionItemAttributesInner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("trait_type"), TraitType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);

	return ParseSuccess;
}

}