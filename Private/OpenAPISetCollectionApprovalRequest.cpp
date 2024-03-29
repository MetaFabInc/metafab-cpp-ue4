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

#include "OpenAPISetCollectionApprovalRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPISetCollectionApprovalRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("approved")); WriteJsonValue(Writer, Approved);
	if (Address.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("address")); WriteJsonValue(Writer, Address.GetValue());
	}
	if (WalletId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walletId")); WriteJsonValue(Writer, WalletId.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPISetCollectionApprovalRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("approved"), Approved);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("address"), Address);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walletId"), WalletId);

	return ParseSuccess;
}

}
