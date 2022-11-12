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
 * OpenAPITransferCollectionItemRequest
 *
 * 
 */
class METAFAB_API OpenAPITransferCollectionItemRequest : public Model
{
public:
    virtual ~OpenAPITransferCollectionItemRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A valid EVM based addresses to transfer items to. */
	TOptional<FString> Address;
	/* A wallet id within the MetaFab ecosystem to transfer items to. */
	TOptional<TArray<FString>> WalletId;
	/* The quantity of the collectionItemId to transfer. */
	double Quantity;
};

}