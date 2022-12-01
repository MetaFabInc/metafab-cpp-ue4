/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.3.0
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICreateCollection200Response.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPICreateCollection200Response::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (GameId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gameId")); WriteJsonValue(Writer, GameId.GetValue());
	}
	if (ContractId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contractId")); WriteJsonValue(Writer, ContractId.GetValue());
	}
	if (UpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updatedAt")); WriteJsonValue(Writer, UpdatedAt.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("createdAt")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (Contract.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contract")); WriteJsonValue(Writer, Contract.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreateCollection200Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gameId"), GameId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contractId"), ContractId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updatedAt"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("createdAt"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contract"), Contract);

	return ParseSuccess;
}

}
