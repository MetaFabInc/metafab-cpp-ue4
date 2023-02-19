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

#include "OpenAPIEcosystemGameModel.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIEcosystemGameModel::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (EcosystemId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ecosystemId")); WriteJsonValue(Writer, EcosystemId.GetValue());
	}
	if (GameId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gameId")); WriteJsonValue(Writer, GameId.GetValue());
	}
	if (UpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updatedAt")); WriteJsonValue(Writer, UpdatedAt.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("createdAt")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIEcosystemGameModel::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ecosystemId"), EcosystemId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gameId"), GameId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updatedAt"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("createdAt"), CreatedAt);

	return ParseSuccess;
}

}