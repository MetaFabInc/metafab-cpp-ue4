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

#include "OpenAPIBatchTransferCurrencyRequest.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPIBatchTransferCurrencyRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Addresses.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("addresses")); WriteJsonValue(Writer, Addresses.GetValue());
	}
	if (WalletIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walletIds")); WriteJsonValue(Writer, WalletIds.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("amounts")); WriteJsonValue(Writer, Amounts);
	if (References.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("references")); WriteJsonValue(Writer, References.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIBatchTransferCurrencyRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("addresses"), Addresses);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walletIds"), WalletIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amounts"), Amounts);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("references"), References);

	return ParseSuccess;
}

}