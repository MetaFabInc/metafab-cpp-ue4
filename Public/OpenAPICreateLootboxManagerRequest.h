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

#pragma once

#include "OpenAPIBaseModel.h"

namespace MetaFab
{

/*
 * OpenAPICreateLootboxManagerRequest
 *
 * 
 */
class METAFAB_API OpenAPICreateLootboxManagerRequest : public Model
{
public:
    virtual ~OpenAPICreateLootboxManagerRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class ChainEnum
	{
		Ethereum,
		Goerli,
		Matic,
		Maticmumbai,
		Arbitrum,
		Arbitrumgoerli,
  	};

	static FString EnumToString(const ChainEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ChainEnum& EnumValue);
	/* The blockchain you want to deploy this lootbox manager on. Support for new blockchains are added over time. */
	ChainEnum Chain;
};

}
