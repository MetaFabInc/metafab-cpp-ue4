/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.0
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICreateCollection200ResponseAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICreateCollection200ResponseAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Contract.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contract")); WriteJsonValue(Writer, Contract.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreateCollection200ResponseAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contract"), Contract);

	return ParseSuccess;
}

}
