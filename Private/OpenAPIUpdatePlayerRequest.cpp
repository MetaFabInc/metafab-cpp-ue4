/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.1
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIUpdatePlayerRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIUpdatePlayerRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (CurrentPassword.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currentPassword")); WriteJsonValue(Writer, CurrentPassword.GetValue());
	}
	if (NewPassword.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("newPassword")); WriteJsonValue(Writer, NewPassword.GetValue());
	}
	if (ResetAccessToken.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resetAccessToken")); WriteJsonValue(Writer, ResetAccessToken.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIUpdatePlayerRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currentPassword"), CurrentPassword);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("newPassword"), NewPassword);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resetAccessToken"), ResetAccessToken);

	return ParseSuccess;
}

}
