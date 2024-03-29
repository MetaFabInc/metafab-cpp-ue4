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

#include "OpenAPIUpdateGameRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIUpdateGameRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Email.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("email")); WriteJsonValue(Writer, Email.GetValue());
	}
	if (CurrentPassword.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currentPassword")); WriteJsonValue(Writer, CurrentPassword.GetValue());
	}
	if (NewPassword.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("newPassword")); WriteJsonValue(Writer, NewPassword.GetValue());
	}
	if (Rpcs.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("rpcs")); WriteJsonValue(Writer, Rpcs.GetValue());
	}
	if (RedirectUris.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("redirectUris")); WriteJsonValue(Writer, RedirectUris.GetValue());
	}
	if (IconImageBase64.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("iconImageBase64")); WriteJsonValue(Writer, IconImageBase64.GetValue());
	}
	if (CoverImageBase64.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("coverImageBase64")); WriteJsonValue(Writer, CoverImageBase64.GetValue());
	}
	if (PrimaryColorHex.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("primaryColorHex")); WriteJsonValue(Writer, PrimaryColorHex.GetValue());
	}
	if (ResetPublishedKey.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resetPublishedKey")); WriteJsonValue(Writer, ResetPublishedKey.GetValue());
	}
	if (ResetSecretKey.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resetSecretKey")); WriteJsonValue(Writer, ResetSecretKey.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIUpdateGameRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("email"), Email);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currentPassword"), CurrentPassword);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("newPassword"), NewPassword);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rpcs"), Rpcs);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("redirectUris"), RedirectUris);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("iconImageBase64"), IconImageBase64);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coverImageBase64"), CoverImageBase64);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("primaryColorHex"), PrimaryColorHex);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resetPublishedKey"), ResetPublishedKey);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resetSecretKey"), ResetSecretKey);

	return ParseSuccess;
}

}
