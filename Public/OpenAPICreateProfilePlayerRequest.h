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
#include "OpenAPIProfilePermissionsValue.h"

namespace OpenAPI
{

/*
 * OpenAPICreateProfilePlayerRequest
 *
 * 
 */
class OPENAPI_API OpenAPICreateProfilePlayerRequest : public Model
{
public:
    virtual ~OpenAPICreateProfilePlayerRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The username to assign to the created player. */
	FString Username;
	/* A properly formatted permissions object that validates against the MetaFab profile permissions schema. */
	TOptional<TMap<FString, OpenAPIProfilePermissionsValue>> Permissions;
};

}
