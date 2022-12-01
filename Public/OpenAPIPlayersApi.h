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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace MetaFab
{

class METAFAB_API OpenAPIPlayersApi
{
public:
	OpenAPIPlayersApi();
	~OpenAPIPlayersApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class AuthPlayerRequest;
	class AuthPlayerResponse;
	class CreatePlayerRequest;
	class CreatePlayerResponse;
	class GetPlayerRequest;
	class GetPlayerResponse;
	class GetPlayerDataRequest;
	class GetPlayerDataResponse;
	class GetPlayersRequest;
	class GetPlayersResponse;
	class SetPlayerDataRequest;
	class SetPlayerDataResponse;
	class UpdatePlayerRequest;
	class UpdatePlayerResponse;
	
    DECLARE_DELEGATE_OneParam(FAuthPlayerDelegate, const AuthPlayerResponse&);
    DECLARE_DELEGATE_OneParam(FCreatePlayerDelegate, const CreatePlayerResponse&);
    DECLARE_DELEGATE_OneParam(FGetPlayerDelegate, const GetPlayerResponse&);
    DECLARE_DELEGATE_OneParam(FGetPlayerDataDelegate, const GetPlayerDataResponse&);
    DECLARE_DELEGATE_OneParam(FGetPlayersDelegate, const GetPlayersResponse&);
    DECLARE_DELEGATE_OneParam(FSetPlayerDataDelegate, const SetPlayerDataResponse&);
    DECLARE_DELEGATE_OneParam(FUpdatePlayerDelegate, const UpdatePlayerResponse&);
    
    FHttpRequestPtr AuthPlayer(const AuthPlayerRequest& Request, const FAuthPlayerDelegate& Delegate = FAuthPlayerDelegate()) const;
    FHttpRequestPtr CreatePlayer(const CreatePlayerRequest& Request, const FCreatePlayerDelegate& Delegate = FCreatePlayerDelegate()) const;
    FHttpRequestPtr GetPlayer(const GetPlayerRequest& Request, const FGetPlayerDelegate& Delegate = FGetPlayerDelegate()) const;
    FHttpRequestPtr GetPlayerData(const GetPlayerDataRequest& Request, const FGetPlayerDataDelegate& Delegate = FGetPlayerDataDelegate()) const;
    FHttpRequestPtr GetPlayers(const GetPlayersRequest& Request, const FGetPlayersDelegate& Delegate = FGetPlayersDelegate()) const;
    FHttpRequestPtr SetPlayerData(const SetPlayerDataRequest& Request, const FSetPlayerDataDelegate& Delegate = FSetPlayerDataDelegate()) const;
    FHttpRequestPtr UpdatePlayer(const UpdatePlayerRequest& Request, const FUpdatePlayerDelegate& Delegate = FUpdatePlayerDelegate()) const;
    
private:
    void OnAuthPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAuthPlayerDelegate Delegate) const;
    void OnCreatePlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreatePlayerDelegate Delegate) const;
    void OnGetPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetPlayerDelegate Delegate) const;
    void OnGetPlayerDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetPlayerDataDelegate Delegate) const;
    void OnGetPlayersResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetPlayersDelegate Delegate) const;
    void OnSetPlayerDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetPlayerDataDelegate Delegate) const;
    void OnUpdatePlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdatePlayerDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
