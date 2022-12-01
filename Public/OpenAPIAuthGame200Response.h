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
#include "OpenAPIWalletModel.h"

namespace MetaFab
{

/*
 * OpenAPIAuthGame200Response
 *
 * 
 */
class METAFAB_API OpenAPIAuthGame200Response : public Model
{
public:
    virtual ~OpenAPIAuthGame200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* This field has not had a description added. */
	TOptional<FString> Id;
	/* This field has not had a description added. */
	TOptional<FString> WalletId;
	/* This field has not had a description added. */
	TOptional<FString> FundingWalletId;
	/* This field has not had a description added. */
	TOptional<FString> Email;
	/* This field has not had a description added. */
	TOptional<FString> Name;
	/* This field has not had a description added. */
	TOptional<TSharedPtr<FJsonObject>> Rpcs;
	/* This field has not had a description added. */
	TOptional<FString> PublishedKey;
	/* This field has not had a description added. */
	TOptional<FString> SecretKey;
	/* This field has not had a description added. */
	TOptional<bool> Verified;
	/* This field has not had a description added. */
	TOptional<FString> UpdatedAt;
	/* This field has not had a description added. */
	TOptional<FString> CreatedAt;
	TOptional<OpenAPIWalletModel> Wallet;
	TOptional<OpenAPIWalletModel> FundingWallet;
};

}
