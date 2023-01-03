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
 * OpenAPIBatchMintCollectionItemsRequest
 *
 * 
 */
class OPENAPI_API OpenAPIBatchMintCollectionItemsRequest : public Model
{
public:
    virtual ~OpenAPIBatchMintCollectionItemsRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A valid EVM based address to create (mint) the items for. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* An array of unique itemIds to create (mint). */
	TArray<int32> ItemIds;
	/* An array of the quantities of each of the unique itemIds provided to create (mint). The quantity of each itemId in itemIds should be at the same index as the specific itemId in the itemIds array. For example, quantities[2] defines the quantity to mint for itemIds[2], etc. */
	TArray<int32> Quantities;
	/* Any wallet id within the MetaFab ecosystem to create (mint) the items for. */
	TOptional<FString> WalletId;
};

}
