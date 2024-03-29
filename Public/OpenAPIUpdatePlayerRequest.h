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
 * OpenAPIUpdatePlayerRequest
 *
 * 
 */
class OPENAPI_API OpenAPIUpdatePlayerRequest : public Model
{
public:
    virtual ~OpenAPIUpdatePlayerRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The player's current password. Must be provided if setting `newPassword`. */
	TOptional<FString> CurrentPassword;
	/* A new password. The player's old password will no longer be valid. */
	TOptional<FString> NewPassword;
	/* Revokes the player's previous access token and returns a new one if true. */
	TOptional<bool> ResetAccessToken;
};

}
