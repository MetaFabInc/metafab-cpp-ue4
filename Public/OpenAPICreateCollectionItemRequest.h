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
#include "OpenAPICreateCollectionItemRequestAttributesInner.h"
#include "OpenAPIURI.h"

namespace OpenAPI
{

/*
 * OpenAPICreateCollectionItemRequest
 *
 * 
 */
class OPENAPI_API OpenAPICreateCollectionItemRequest : public Model
{
public:
    virtual ~OpenAPICreateCollectionItemRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A unique itemId to use for this item within the collection. If an existing itemId is used, the current metadata will be overriden. Any number may be used.  The terms `itemId` and `collectionItemId` are used interchangeably and equivalent to one another throughout MetaFab documentation. */
	int32 Id = 0;
	/* The name of this item. */
	FString Name;
	/* A text description of this item. This is a great spot to include lore, game mechanics and more related to this item. */
	FString Description;
	/* A base64 string of the image for this item. Either `imageBase64` or `imageUrl` must be provided. Supported image formats are `jpg`, `jpeg`, `png`, `gif`. Recommended size of 1:1 aspect ratio and no more than 1500x1500 pixels. */
	TOptional<TArray<uint8>> ImageBase64;
	/* An external url that resolves to an image to use for this item. This can also be set to an ipfs:// uri. Recommended size of 1:1 aspect ratio and no more than 1500x1500 pixels. */
	TOptional<OpenAPIURI> ImageUrl;
	/* An optional URL where players can go to learn more about this item specifically, or your game, or any other link. */
	TOptional<OpenAPIURI> ExternalUrl;
	/* An array of objects that conform with the [metadata attributes standard that can be found here](https://docs.opensea.io/docs/metadata-standards#attributes) */
	TOptional<TArray<OpenAPICreateCollectionItemRequestAttributesInner>> Attributes;
	/* An arbitrary object of data attached to the top level metadata object. This is useful for including data or resource URLs specific to your game. Such as URLs that point to 3D models, music files, bitmaps, or anything else you need to reference. */
	TOptional<TSharedPtr<FJsonObject>> Data;
};

}
