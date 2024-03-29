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

#include "OpenAPICreateLootboxManagerRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICreateLootboxManagerRequest::ChainEnum& Value)
{
	switch (Value)
	{
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrum:
		return TEXT("ARBITRUM");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrumgoerli:
		return TEXT("ARBITRUMGOERLI");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrumnova:
		return TEXT("ARBITRUMNOVA");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Avalanche:
		return TEXT("AVALANCHE");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Avalanchefuji:
		return TEXT("AVALANCHEFUJI");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Ethereum:
		return TEXT("ETHEREUM");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Fantom:
		return TEXT("FANTOM");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Fantomtest:
		return TEXT("FANTOMTEST");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Goerli:
		return TEXT("GOERLI");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Matic:
		return TEXT("MATIC");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Maticmumbai:
		return TEXT("MATICMUMBAI");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Thundercore:
		return TEXT("THUNDERCORE");
	case OpenAPICreateLootboxManagerRequest::ChainEnum::Thundercoretestnet:
		return TEXT("THUNDERCORETESTNET");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICreateLootboxManagerRequest::ChainEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICreateLootboxManagerRequest::EnumToString(const OpenAPICreateLootboxManagerRequest::ChainEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICreateLootboxManagerRequest::ChainEnum& Value)
{
	static TMap<FString, OpenAPICreateLootboxManagerRequest::ChainEnum> StringToEnum = { 
		{ TEXT("ARBITRUM"), OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrum },
		{ TEXT("ARBITRUMGOERLI"), OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrumgoerli },
		{ TEXT("ARBITRUMNOVA"), OpenAPICreateLootboxManagerRequest::ChainEnum::Arbitrumnova },
		{ TEXT("AVALANCHE"), OpenAPICreateLootboxManagerRequest::ChainEnum::Avalanche },
		{ TEXT("AVALANCHEFUJI"), OpenAPICreateLootboxManagerRequest::ChainEnum::Avalanchefuji },
		{ TEXT("ETHEREUM"), OpenAPICreateLootboxManagerRequest::ChainEnum::Ethereum },
		{ TEXT("FANTOM"), OpenAPICreateLootboxManagerRequest::ChainEnum::Fantom },
		{ TEXT("FANTOMTEST"), OpenAPICreateLootboxManagerRequest::ChainEnum::Fantomtest },
		{ TEXT("GOERLI"), OpenAPICreateLootboxManagerRequest::ChainEnum::Goerli },
		{ TEXT("MATIC"), OpenAPICreateLootboxManagerRequest::ChainEnum::Matic },
		{ TEXT("MATICMUMBAI"), OpenAPICreateLootboxManagerRequest::ChainEnum::Maticmumbai },
		{ TEXT("THUNDERCORE"), OpenAPICreateLootboxManagerRequest::ChainEnum::Thundercore },
		{ TEXT("THUNDERCORETESTNET"), OpenAPICreateLootboxManagerRequest::ChainEnum::Thundercoretestnet }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICreateLootboxManagerRequest::EnumFromString(const FString& EnumAsString, OpenAPICreateLootboxManagerRequest::ChainEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICreateLootboxManagerRequest::ChainEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICreateLootboxManagerRequest::ChainEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICreateLootboxManagerRequest::ChainEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICreateLootboxManagerRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("chain")); WriteJsonValue(Writer, Chain);
	Writer->WriteObjectEnd();
}

bool OpenAPICreateLootboxManagerRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain"), Chain);

	return ParseSuccess;
}

}
