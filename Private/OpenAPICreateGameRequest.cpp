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

#include "OpenAPICreateGameRequest.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPICreateGameRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("email")); WriteJsonValue(Writer, Email);
	Writer->WriteIdentifierPrefix(TEXT("password")); WriteJsonValue(Writer, Password);
	Writer->WriteObjectEnd();
}

bool OpenAPICreateGameRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("email"), Email);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("password"), Password);

	return ParseSuccess;
}

}