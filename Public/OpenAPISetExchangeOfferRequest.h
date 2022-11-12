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

#pragma once

#include "OpenAPIBaseModel.h"

namespace MetaFab
{

/*
 * OpenAPISetExchangeOfferRequest
 *
 * 
 */
class METAFAB_API OpenAPISetExchangeOfferRequest : public Model
{
public:
    virtual ~OpenAPISetExchangeOfferRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A unique offer id to use for this offer for the exchange. If an existing offer id is used, the current offer will be updated but the existing number of uses will be kept. If you want to reset the number of uses for an existing offer, first remove it using the remove offer endpoint, then set it. */
	double Id;
	/* A valid EVM based ERC1155 or MetaFab game items contract address that represents the collection for input items required by this offer. `inputCollectionAddress` or `inputCollectionId` can optionally be provided. */
	TOptional<FString> InputCollectionAddress;
	/* A valid MetaFab collection id that represents the collection for input items required by this offer. `inputCollectionAddress` or `inputCollectionId` can optionally be provided. */
	TOptional<FString> InputCollectionId;
	/* An array of item ids from the provided input collection that are required to use this offer. Input items are transferred from the wallet to the exchange contract upon using an offer. */
	TOptional<TArray<double>> InputCollectionItemIds;
	/* An array of amounts for each item id from the provided input collection that are required to use this offer. Item amounts array indices are reflective of the amount required for a given item id at the same index. */
	TOptional<TArray<double>> InputCollectionItemAmounts;
	/* A valid EVM based ERC20 or MetaFab game currency contract address that for the currency required by this offer. */
	TOptional<FString> InputCurrencyAddress;
	/* A valid MetaFab currency id that represents the currency required by this offer. */
	TOptional<FString> InputCurrencyId;
	/* The amount of currency required by this offer. If an inputCurrencyAmount is provided without in input currency address or id, the native chain currency is used as the required currency. */
	TOptional<double> InputCurrencyAmount;
	/* A valid EVM based ERC1155 or MetaFab game items contract address that represents the collection for output items given by this offer. `outputCollectionAddress` or `outputCollectionId` can optionally be provided. */
	TOptional<FString> OutputCollectionAddress;
	/* A valid MetaFab collection id that represents the collection for output items given by this offer. `outputCollectionAddress` or `outputCollectionId` can optionally be provided. */
	TOptional<FString> OutputCollectionId;
	/* An array of item ids from the provided output collection that are given by this offer. Output items are automatically minted if the exchange contract has the `minter` role for the output collection contract. Otherwise, they are transferred from the item balance held by the exchange contract. */
	TOptional<TArray<double>> OutputCollectionItemIds;
	/* An array of amounts for each item id from the provided output collection that are given by this offer. Item amounts array indices are reflective of the amount required for a given item id at the same index. */
	TOptional<TArray<double>> OutputCollectionItemAmounts;
	/* A valid EVM based ERC20 or MetaFab game currency contract address that for the currency given by this offer. The output currency amount is automatically minted if the exchange contract has the `minter` role for the output currency contract. Otherwise, they are transferred from the currency balance held by the exchange contract. */
	TOptional<FString> OutputCurrencyAddress;
	/* A valid MetaFab currency id for the currency given by this offer. */
	TOptional<FString> OutputCurrencyId;
	/* The amount of currency given by this offer. If an outputCurrencyAmount is provided without an output currency address or id, the native chain currency is used as the given currency. */
	TOptional<double> OutputCurrencyAmount;
	/* The maximum number of times this offer can be used in total. maxUses is collective across all uses of the offer. If 5 unique players use an offer, that counts as 5 offer uses. Exclude this or use 0 to allow unlimited uses. */
	TOptional<double> MaxUses;
};

}
