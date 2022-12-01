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
 * OpenAPICreateCollectionItemRequestAttributesInner
 *
 * 
 */
class METAFAB_API OpenAPICreateCollectionItemRequestAttributesInner : public Model
{
public:
    virtual ~OpenAPICreateCollectionItemRequestAttributesInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString TraitType;
	TSharedPtr<FJsonValue> Value;
};

}
