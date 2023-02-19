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
#include "OpenAPICollectionItemAttributesInnerValue.h"

namespace OpenAPI
{

/*
 * OpenAPICollectionItemAttributesInner
 *
 * 
 */
class OPENAPI_API OpenAPICollectionItemAttributesInner : public Model
{
public:
    virtual ~OpenAPICollectionItemAttributesInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* This field has not had a description added. */
	TOptional<FString> TraitType;
	TOptional<OpenAPICollectionItemAttributesInnerValue> Value;
};

}
