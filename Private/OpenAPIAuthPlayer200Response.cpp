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

#include "OpenAPIAuthPlayer200Response.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAuthPlayer200Response::WriteJson(JsonWriter& Writer) const
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
	if (WalletId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walletId")); WriteJsonValue(Writer, WalletId.GetValue());
	}
	if (ConnectedWalletId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("connectedWalletId")); WriteJsonValue(Writer, ConnectedWalletId.GetValue());
	}
	if (Username.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("username")); WriteJsonValue(Writer, Username.GetValue());
	}
	if (AccessToken.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("accessToken")); WriteJsonValue(Writer, AccessToken.GetValue());
	}
	if (UpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updatedAt")); WriteJsonValue(Writer, UpdatedAt.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("createdAt")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (Wallet.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("wallet")); WriteJsonValue(Writer, Wallet.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAuthPlayer200Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gameId"), GameId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walletId"), WalletId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("connectedWalletId"), ConnectedWalletId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("username"), Username);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("accessToken"), AccessToken);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updatedAt"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("createdAt"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("wallet"), Wallet);

	return ParseSuccess;
}

}
