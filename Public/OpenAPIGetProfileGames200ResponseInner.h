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
#include "OpenAPIPublicPlayer.h"

namespace OpenAPI
{

/*
 * OpenAPIGetProfileGames200ResponseInner
 *
 * 
 */
class OPENAPI_API OpenAPIGetProfileGames200ResponseInner : public Model
{
public:
    virtual ~OpenAPIGetProfileGames200ResponseInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Id;
	TOptional<FString> Name;
	TOptional<FString> PublishedKey;
	TOptional<FString> IconImageUrl;
	TOptional<FString> CoverImageUrl;
	TOptional<FString> PrimaryColorHex;
	TOptional<FString> CreatedAt;
	TOptional<TArray<OpenAPIPublicPlayer>> Players;
};

}
