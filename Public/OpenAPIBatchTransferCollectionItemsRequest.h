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
 * OpenAPIBatchTransferCollectionItemsRequest
 *
 * 
 */
class OPENAPI_API OpenAPIBatchTransferCollectionItemsRequest : public Model
{
public:
    virtual ~OpenAPIBatchTransferCollectionItemsRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* An array of valid EVM based addresses to transfer items to. */
	TOptional<TArray<FString>> Addresses;
	/* An array of wallet ids within the MetaFab ecosystem to transfer items to. */
	TOptional<TArray<FString>> WalletIds;
	/* An array of unique itemIds to transfer. Each recipient will receive the same set of items provided. */
	TArray<int32> ItemIds;
	/* The quantities of each unique itemId to transfer. Each recipient will receive the same quantities of items provided. */
	TArray<int32> Quantities;
};

}
