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

#include "OpenAPIAuthGame200ResponseAllOf1.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPIAuthGame200ResponseAllOf1::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (FundingWallet.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("fundingWallet")); WriteJsonValue(Writer, FundingWallet.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAuthGame200ResponseAllOf1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("fundingWallet"), FundingWallet);

	return ParseSuccess;
}

}
