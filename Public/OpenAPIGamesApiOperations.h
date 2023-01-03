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
#include "OpenAPIGamesApi.h"

#include "OpenAPIAuthGame200Response.h"
#include "OpenAPICreateGameRequest.h"
#include "OpenAPIGameModel.h"
#include "OpenAPIPublicGame.h"
#include "OpenAPIUpdateGameRequest.h"

namespace OpenAPI
{

/* Authenticate game
 *
 * Returns an existing game object containing authorization keys and credentials when provided a valid email (in place of username) and password login using Basic Auth.
*/
class OPENAPI_API OpenAPIGamesApi::AuthGameRequest : public Request
{
public:
    virtual ~AuthGameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIGamesApi::AuthGameResponse : public Response
{
public:
    virtual ~AuthGameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAuthGame200Response Content;
};

/* Create game
 *
 * Create a new game. A game is the root entity required for all API interactions. Contracts, currencies, items and more are deployed by games, player accounts are created and registered to games, etc.  To use any of MetaFab&#39;s services, you must first create a game through this endpoint.  After creating your game through this endpoint, a verification email will be sent to the email address used. Before you can access any of MetaFab&#39;s features, you&#39;ll need to click the link contained in the verification email to verify your account.
*/
class OPENAPI_API OpenAPIGamesApi::CreateGameRequest : public Request
{
public:
    virtual ~CreateGameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPICreateGameRequest OpenAPICreateGameRequest;
};

class OPENAPI_API OpenAPIGamesApi::CreateGameResponse : public Response
{
public:
    virtual ~CreateGameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAuthGame200Response Content;
};

/* Get game
 *
 * Returns a game object for the provided game id.
*/
class OPENAPI_API OpenAPIGamesApi::GetGameRequest : public Request
{
public:
    virtual ~GetGameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any game id within the MetaFab ecosystem. */
	FString GameId;
};

class OPENAPI_API OpenAPIGamesApi::GetGameResponse : public Response
{
public:
    virtual ~GetGameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPublicGame Content;
};

/* Update game
 *
 * Update various fields specific to a game. Such as changing its password, resetting its published or secret key, or updating its RPCs.
*/
class OPENAPI_API OpenAPIGamesApi::UpdateGameRequest : public Request
{
public:
    virtual ~UpdateGameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any game id within the MetaFab ecosystem. */
	FString GameId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	OpenAPIUpdateGameRequest OpenAPIUpdateGameRequest;
};

class OPENAPI_API OpenAPIGamesApi::UpdateGameResponse : public Response
{
public:
    virtual ~UpdateGameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIGameModel Content;
};

}
