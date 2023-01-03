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

#include "OpenAPIGetPlayerData200Response.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIGetPlayerData200Response::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ProtectedData.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("protectedData")); WriteJsonValue(Writer, ProtectedData.GetValue());
	}
	if (PublicData.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("publicData")); WriteJsonValue(Writer, PublicData.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIGetPlayerData200Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("protectedData"), ProtectedData);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("publicData"), PublicData);

	return ParseSuccess;
}

}
