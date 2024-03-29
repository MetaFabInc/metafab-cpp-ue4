/**
 * MetaFab API
 * Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.5.1
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
 * OpenAPIUpdatePlayer200Response
 *
 * 
 */
class OPENAPI_API OpenAPIUpdatePlayer200Response : public Model
{
public:
    virtual ~OpenAPIUpdatePlayer200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* This field has not had a description added. */
	TOptional<FString> Id;
	/* This field has not had a description added. */
	TOptional<FString> GameId;
	/* This field has not had a description added. */
	TOptional<FString> WalletId;
	/* This field has not had a description added. */
	TOptional<FString> ConnectedWalletId;
	/* This field has not had a description added. */
	TOptional<FString> ProfileId;
	/* This field has not had a description added. */
	TOptional<FString> Username;
	/* This field has not had a description added. */
	TOptional<FString> AccessToken;
	/* This field has not had a description added. */
	TOptional<TSharedPtr<FJsonObject>> ProfilePermissions;
	/* This field has not had a description added. */
	TOptional<FString> UpdatedAt;
	/* This field has not had a description added. */
	TOptional<FString> CreatedAt;
	/* This field has not had a description added. */
	TOptional<FString> WalletDecryptKey;
};

}
