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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIShopOffer
 *
 * 
 */
class OPENAPI_API OpenAPIShopOffer : public Model
{
public:
    virtual ~OpenAPIShopOffer() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The id of this offer. */
	TOptional<int32> Id;
	/* The address of the ERC1155 or MetaFab game items contract for input items required by this offer. */
	TOptional<FString> InputCollection;
	/* An array of item ids from the input collection that are required for this offer. */
	TOptional<TArray<int32>> InputCollectionItemIds;
	/* An array of amounts for each item id for the input collection that are required to use this offer. */
	TOptional<TArray<int32>> InputCollectionItemAmounts;
	/* The address of the ERC20 or MetaFab game currency for the currency required by this offer. */
	TOptional<FString> InputCurrency;
	/* The amount of currency required by this offer. */
	TOptional<double> InputCurrencyAmount;
	/* The address of the ERC1155 or MetaFab game items contract for output items given by this offer. */
	TOptional<FString> OutputCollection;
	/* An array of item ids from the output collection that are given for this offer. */
	TOptional<TArray<int32>> OutputCollectionItemIds;
	/* An array of amounts for each item id for the output collection that are given by this offer. */
	TOptional<TArray<int32>> OutputCollectionItemAmounts;
	/* The address of the ERC20 or MetaFab game currency for the output currency given by this offer. */
	TOptional<FString> OutputCurrency;
	/* The amount of currency given by this offer. */
	TOptional<double> OutputCurrencyAmount;
	/* The number of times this offer has been used. */
	TOptional<int32> Uses;
	/* The maximum number of times this offer can be used. A value of `0` means there is no limit on how many times this offer can be used. */
	TOptional<int32> MaxUses;
	/* A unix timestamp in seconds that represents the last time this offer was set or updated. */
	TOptional<int32> LastUpdatedAt;
};

}
