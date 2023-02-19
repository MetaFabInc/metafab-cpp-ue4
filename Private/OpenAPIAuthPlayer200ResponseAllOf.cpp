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

#include "OpenAPIAuthPlayer200ResponseAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAuthPlayer200ResponseAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (WalletDecryptKey.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walletDecryptKey")); WriteJsonValue(Writer, WalletDecryptKey.GetValue());
	}
	if (Wallet.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("wallet")); WriteJsonValue(Writer, Wallet.GetValue());
	}
	if (CustodialWallet.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custodialWallet")); WriteJsonValue(Writer, CustodialWallet.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAuthPlayer200ResponseAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walletDecryptKey"), WalletDecryptKey);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("wallet"), Wallet);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custodialWallet"), CustodialWallet);

	return ParseSuccess;
}

}