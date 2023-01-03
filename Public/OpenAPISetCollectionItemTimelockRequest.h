/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.1
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
 * OpenAPISetCollectionItemTimelockRequest
 *
 * 
 */
class OPENAPI_API OpenAPISetCollectionItemTimelockRequest : public Model
{
public:
    virtual ~OpenAPISetCollectionItemTimelockRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A unix timestamp (in seconds) defining when the set timelock expires. */
	int32 Timelock = 0;
};

}
