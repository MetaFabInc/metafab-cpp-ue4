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
#include "OpenAPICreateCollection200ResponseAllOfContract.h"

namespace OpenAPI
{

/*
 * OpenAPICreateCollection200Response
 *
 * 
 */
class OPENAPI_API OpenAPICreateCollection200Response : public Model
{
public:
    virtual ~OpenAPICreateCollection200Response() {}
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
