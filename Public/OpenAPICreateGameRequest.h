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
 * OpenAPICreateGameRequest
 *
 * 
 */
class OPENAPI_API OpenAPICreateGameRequest : public Model
{
public:
    virtual ~OpenAPICreateGameRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The name of the game you're creating. */
	FString Name;
	/* The email address associated with this game and used to login/authenticate as the game. */
	FString Email;
	/* The password to authenticate as the game. Additionally, this password is used to encrypt/decrypt your game's primary wallet and must be provided anytime this game makes blockchain interactions through various endpoints. */
	FString Password;
};

}
