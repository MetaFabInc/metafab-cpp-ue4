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

#include "OpenAPISetLootboxManagerLootboxRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPISetLootboxManagerLootboxRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	if (InputCollectionAddress.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionAddress")); WriteJsonValue(Writer, InputCollectionAddress.GetValue());
	}
	if (InputCollectionId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionId")); WriteJsonValue(Writer, InputCollectionId.GetValue());
	}
	if (InputCollectionItemIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionItemIds")); WriteJsonValue(Writer, InputCollectionItemIds.GetValue());
	}
	if (InputCollectionItemAmounts.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionItemAmounts")); WriteJsonValue(Writer, InputCollectionItemAmounts.GetValue());
	}
	if (OutputCollectionAddress.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollectionAddress")); WriteJsonValue(Writer, OutputCollectionAddress.GetValue());
	}
	if (OutputCollectionId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollectionId")); WriteJsonValue(Writer, OutputCollectionId.GetValue());
	}
	if (OutputCollectionItemIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollectionItemIds")); WriteJsonValue(Writer, OutputCollectionItemIds.GetValue());
	}
	if (OutputCollectionItemAmounts.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollectionItemAmounts")); WriteJsonValue(Writer, OutputCollectionItemAmounts.GetValue());
	}
	if (OutputCollectionItemWeights.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollectionItemWeights")); WriteJsonValue(Writer, OutputCollectionItemWeights.GetValue());
	}
	if (OutputTotalItems.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputTotalItems")); WriteJsonValue(Writer, OutputTotalItems.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPISetLootboxManagerLootboxRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionAddress"), InputCollectionAddress);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionId"), InputCollectionId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionItemIds"), InputCollectionItemIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionItemAmounts"), InputCollectionItemAmounts);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionAddress"), OutputCollectionAddress);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionId"), OutputCollectionId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemIds"), OutputCollectionItemIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemAmounts"), OutputCollectionItemAmounts);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemWeights"), OutputCollectionItemWeights);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputTotalItems"), OutputTotalItems);

	return ParseSuccess;
}

}
