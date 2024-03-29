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

#include "OpenAPITransactionModel.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITransactionModel::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (ContractId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contractId")); WriteJsonValue(Writer, ContractId.GetValue());
	}
	if (WalletId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walletId")); WriteJsonValue(Writer, WalletId.GetValue());
	}
	if (Function.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("function")); WriteJsonValue(Writer, Function.GetValue());
	}
	if (Args.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("args")); WriteJsonValue(Writer, Args.GetValue());
	}
	if (Hash.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("hash")); WriteJsonValue(Writer, Hash.GetValue());
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

bool OpenAPITransactionModel::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contractId"), ContractId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walletId"), WalletId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("function"), Function);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("args"), Args);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("hash"), Hash);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updatedAt"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("createdAt"), CreatedAt);

	return ParseSuccess;
}

}
