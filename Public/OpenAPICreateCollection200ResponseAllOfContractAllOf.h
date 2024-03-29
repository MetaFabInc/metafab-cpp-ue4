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
#include "OpenAPITransactionModel.h"

namespace OpenAPI
{

/*
 * OpenAPICreateCollection200ResponseAllOfContractAllOf
 *
 * 
 */
class OPENAPI_API OpenAPICreateCollection200ResponseAllOfContractAllOf : public Model
{
public:
    virtual ~OpenAPICreateCollection200ResponseAllOfContractAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPITransactionModel>> Transactions;
};

}
