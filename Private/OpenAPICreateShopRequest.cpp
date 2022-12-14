/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.1
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICreateShopRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICreateShopRequest::ChainEnum& Value)
{
	switch (Value)
	{
	case OpenAPICreateShopRequest::ChainEnum::Ethereum:
		return TEXT("ETHEREUM");
	case OpenAPICreateShopRequest::ChainEnum::Goerli:
		return TEXT("GOERLI");
	case OpenAPICreateShopRequest::ChainEnum::Matic:
		return TEXT("MATIC");
	case OpenAPICreateShopRequest::ChainEnum::Maticmumbai:
		return TEXT("MATICMUMBAI");
	case OpenAPICreateShopRequest::ChainEnum::Arbitrum:
		return TEXT("ARBITRUM");
	case OpenAPICreateShopRequest::ChainEnum::Arbitrumgoerli:
		return TEXT("ARBITRUMGOERLI");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICreateShopRequest::ChainEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICreateShopRequest::EnumToString(const OpenAPICreateShopRequest::ChainEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICreateShopRequest::ChainEnum& Value)
{
	static TMap<FString, OpenAPICreateShopRequest::ChainEnum> StringToEnum = { 
		{ TEXT("ETHEREUM"), OpenAPICreateShopRequest::ChainEnum::Ethereum },
		{ TEXT("GOERLI"), OpenAPICreateShopRequest::ChainEnum::Goerli },
		{ TEXT("MATIC"), OpenAPICreateShopRequest::ChainEnum::Matic },
		{ TEXT("MATICMUMBAI"), OpenAPICreateShopRequest::ChainEnum::Maticmumbai },
		{ TEXT("ARBITRUM"), OpenAPICreateShopRequest::ChainEnum::Arbitrum },
		{ TEXT("ARBITRUMGOERLI"), OpenAPICreateShopRequest::ChainEnum::Arbitrumgoerli }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICreateShopRequest::EnumFromString(const FString& EnumAsString, OpenAPICreateShopRequest::ChainEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICreateShopRequest::ChainEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICreateShopRequest::ChainEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICreateShopRequest::ChainEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICreateShopRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("chain")); WriteJsonValue(Writer, Chain);
	Writer->WriteObjectEnd();
}

bool OpenAPICreateShopRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain"), Chain);

	return ParseSuccess;
}

}
