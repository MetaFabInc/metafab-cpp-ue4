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
 * OpenAPITransactionModel
 *
 * 
 */
class OPENAPI_API OpenAPITransactionModel : public Model
{
public:
    virtual ~OpenAPITransactionModel() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* This field has not had a description added. */
	TOptional<FString> Id;
	/* This field has not had a description added. */
	TOptional<FString> ContractId;
	/* This field has not had a description added. */
	TOptional<FString> WalletId;
	/* This field has not had a description added. */
	TOptional<FString> Function;
	/* This field has not had a description added. */
	TOptional<TSharedPtr<FJsonObject>> Args;
	/* This field has not had a description added. */
	TOptional<FString> Hash;
	/* This field has not had a description added. */
	TOptional<FString> UpdatedAt;
	/* This field has not had a description added. */
	TOptional<FString> CreatedAt;
};

}
