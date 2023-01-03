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

#include "OpenAPILootboxManagerLootbox.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPILootboxManagerLootbox::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (InputCollection.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollection")); WriteJsonValue(Writer, InputCollection.GetValue());
	}
	if (InputCollectionItemIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionItemIds")); WriteJsonValue(Writer, InputCollectionItemIds.GetValue());
	}
	if (InputCollectionItemAmounts.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("inputCollectionItemAmounts")); WriteJsonValue(Writer, InputCollectionItemAmounts.GetValue());
	}
	if (OutputCollection.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("outputCollection")); WriteJsonValue(Writer, OutputCollection.GetValue());
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
	if (LastUpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lastUpdatedAt")); WriteJsonValue(Writer, LastUpdatedAt.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPILootboxManagerLootbox::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollection"), InputCollection);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionItemIds"), InputCollectionItemIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("inputCollectionItemAmounts"), InputCollectionItemAmounts);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollection"), OutputCollection);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemIds"), OutputCollectionItemIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemAmounts"), OutputCollectionItemAmounts);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputCollectionItemWeights"), OutputCollectionItemWeights);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("outputTotalItems"), OutputTotalItems);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lastUpdatedAt"), LastUpdatedAt);

	return ParseSuccess;
}

}
