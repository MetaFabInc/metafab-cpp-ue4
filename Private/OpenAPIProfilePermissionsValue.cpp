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

#include "OpenAPIProfilePermissionsValue.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIProfilePermissionsValue::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Chain.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("chain")); WriteJsonValue(Writer, Chain.GetValue());
	}
	if (Scopes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("scopes")); WriteJsonValue(Writer, Scopes.GetValue());
	}
	if (Functions.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("functions")); WriteJsonValue(Writer, Functions.GetValue());
	}
	if (Erc20Limit.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("erc20Limit")); WriteJsonValue(Writer, Erc20Limit.GetValue());
	}
	if (Erc1155Limits.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("erc1155Limits")); WriteJsonValue(Writer, Erc1155Limits.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIProfilePermissionsValue::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain"), Chain);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("scopes"), Scopes);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("functions"), Functions);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("erc20Limit"), Erc20Limit);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("erc1155Limits"), Erc1155Limits);

	return ParseSuccess;
}

}
