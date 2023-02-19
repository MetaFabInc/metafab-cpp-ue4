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

#include "OpenAPIGetProfileGames200ResponseInner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIGetProfileGames200ResponseInner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (PublishedKey.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("publishedKey")); WriteJsonValue(Writer, PublishedKey.GetValue());
	}
	if (IconImageUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("iconImageUrl")); WriteJsonValue(Writer, IconImageUrl.GetValue());
	}
	if (CoverImageUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("coverImageUrl")); WriteJsonValue(Writer, CoverImageUrl.GetValue());
	}
	if (PrimaryColorHex.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("primaryColorHex")); WriteJsonValue(Writer, PrimaryColorHex.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("createdAt")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (Players.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("players")); WriteJsonValue(Writer, Players.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIGetProfileGames200ResponseInner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("publishedKey"), PublishedKey);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("iconImageUrl"), IconImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coverImageUrl"), CoverImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("primaryColorHex"), PrimaryColorHex);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("createdAt"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("players"), Players);

	return ParseSuccess;
}

}