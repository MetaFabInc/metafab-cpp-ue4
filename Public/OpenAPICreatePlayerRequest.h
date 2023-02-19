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

namespace OpenAPI
{

/*
 * OpenAPICreatePlayerRequest
 *
 * 
 */
class OPENAPI_API OpenAPICreatePlayerRequest : public Model
{
public:
    virtual ~OpenAPICreatePlayerRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The players username, used to authenticate the player and if desired represent them in game. Usernames are unique. There cannot be 2 users with the same username created for a game. */
	FString Username;
	/* The password to authenticate as the player. Additionally, this password is used to encrypt/decrypt a player's primary wallet and must be provided anytime this player makes blockchain interactions through various endpoints. */
	FString Password;
};

}
