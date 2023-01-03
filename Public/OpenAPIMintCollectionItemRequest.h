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
 * OpenAPIMintCollectionItemRequest
 *
 * 
 */
class OPENAPI_API OpenAPIMintCollectionItemRequest : public Model
{
public:
    virtual ~OpenAPIMintCollectionItemRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A valid EVM based address to create (mint) the item(s) for. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* The quantity of the specified item id to create (mint). */
	int32 Quantity = 0;
	/* Any wallet id within the MetaFab ecosystem to create (mint) the item(s) for. */
	TOptional<FString> WalletId;
};

}
