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

#include "OpenAPICreateContractRequest.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

inline FString ToString(const OpenAPICreateContractRequest::ChainEnum& Value)
{
	switch (Value)
	{
	case OpenAPICreateContractRequest::ChainEnum::Ethereum:
		return TEXT("ETHEREUM");
	case OpenAPICreateContractRequest::ChainEnum::Goerli:
		return TEXT("GOERLI");
	case OpenAPICreateContractRequest::ChainEnum::Matic:
		return TEXT("MATIC");
	case OpenAPICreateContractRequest::ChainEnum::Maticmumbai:
		return TEXT("MATICMUMBAI");
	case OpenAPICreateContractRequest::ChainEnum::Arbitrum:
		return TEXT("ARBITRUM");
	case OpenAPICreateContractRequest::ChainEnum::Arbitrumgoerli:
		return TEXT("ARBITRUMGOERLI");
	}

	UE_LOG(LogMetaFab, Error, TEXT("Invalid OpenAPICreateContractRequest::ChainEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICreateContractRequest::EnumToString(const OpenAPICreateContractRequest::ChainEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICreateContractRequest::ChainEnum& Value)
{
	static TMap<FString, OpenAPICreateContractRequest::ChainEnum> StringToEnum = { 
		{ TEXT("ETHEREUM"), OpenAPICreateContractRequest::ChainEnum::Ethereum },
		{ TEXT("GOERLI"), OpenAPICreateContractRequest::ChainEnum::Goerli },
		{ TEXT("MATIC"), OpenAPICreateContractRequest::ChainEnum::Matic },
		{ TEXT("MATICMUMBAI"), OpenAPICreateContractRequest::ChainEnum::Maticmumbai },
		{ TEXT("ARBITRUM"), OpenAPICreateContractRequest::ChainEnum::Arbitrum },
		{ TEXT("ARBITRUMGOERLI"), OpenAPICreateContractRequest::ChainEnum::Arbitrumgoerli }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICreateContractRequest::EnumFromString(const FString& EnumAsString, OpenAPICreateContractRequest::ChainEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICreateContractRequest::ChainEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICreateContractRequest::ChainEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICreateContractRequest::ChainEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICreateContractRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("address")); WriteJsonValue(Writer, Address);
	Writer->WriteIdentifierPrefix(TEXT("abi")); WriteJsonValue(Writer, Abi);
	Writer->WriteIdentifierPrefix(TEXT("chain")); WriteJsonValue(Writer, Chain);
	Writer->WriteObjectEnd();
}

bool OpenAPICreateContractRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("address"), Address);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("abi"), Abi);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain"), Chain);

	return ParseSuccess;
}

}
