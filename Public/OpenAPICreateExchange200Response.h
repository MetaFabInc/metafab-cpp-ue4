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
#include "OpenAPICreateCollection200ResponseAllOfContract.h"

namespace MetaFab
{

/*
 * OpenAPICreateExchange200Response
 *
 * 
 */
class METAFAB_API OpenAPICreateExchange200Response : public Model
{
public:
    virtual ~OpenAPICreateExchange200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* This field has not had a description added. */
	TOptional<FString> Id;
	/* This field has not had a description added. */
	TOptional<FString> GameId;
	/* This field has not had a description added. */
	TOptional<FString> ContractId;
	/* This field has not had a description added. */
	TOptional<FString> UpdatedAt;
	/* This field has not had a description added. */
	TOptional<FString> CreatedAt;
	TOptional<OpenAPICreateCollection200ResponseAllOfContract> Contract;
};

}