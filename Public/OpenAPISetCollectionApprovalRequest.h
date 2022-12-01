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
 * OpenAPISetCollectionApprovalRequest
 *
 * 
 */
class METAFAB_API OpenAPISetCollectionApprovalRequest : public Model
{
public:
    virtual ~OpenAPISetCollectionApprovalRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A true or false value approves or disapproves the provided address or address associated with the provided walletId. */
	bool Approved = false;
	/* A valid EVM based address to allow control over the authenticating game or player's wallet items for this collection. */
	TOptional<FString> Address;
	/* A wallet id within the MetaFab ecosystem to allow control over the authenticating game or player's wallet items for this collection. */
	TOptional<TArray<FString>> WalletId;
};

}
