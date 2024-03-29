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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIGamesApi
{
public:
	OpenAPIGamesApi();
	~OpenAPIGamesApi();

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

	class AuthGameRequest;
	class AuthGameResponse;
	class CreateGameRequest;
	class CreateGameResponse;
	class GetGameRequest;
	class GetGameResponse;
	class UpdateGameRequest;
	class UpdateGameResponse;
	
    DECLARE_DELEGATE_OneParam(FAuthGameDelegate, const AuthGameResponse&);
    DECLARE_DELEGATE_OneParam(FCreateGameDelegate, const CreateGameResponse&);
    DECLARE_DELEGATE_OneParam(FGetGameDelegate, const GetGameResponse&);
    DECLARE_DELEGATE_OneParam(FUpdateGameDelegate, const UpdateGameResponse&);
    
    FHttpRequestPtr AuthGame(const AuthGameRequest& Request, const FAuthGameDelegate& Delegate = FAuthGameDelegate()) const;
    FHttpRequestPtr CreateGame(const CreateGameRequest& Request, const FCreateGameDelegate& Delegate = FCreateGameDelegate()) const;
    FHttpRequestPtr GetGame(const GetGameRequest& Request, const FGetGameDelegate& Delegate = FGetGameDelegate()) const;
    FHttpRequestPtr UpdateGame(const UpdateGameRequest& Request, const FUpdateGameDelegate& Delegate = FUpdateGameDelegate()) const;
    
private:
    void OnAuthGameResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAuthGameDelegate Delegate) const;
    void OnCreateGameResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateGameDelegate Delegate) const;
    void OnGetGameResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetGameDelegate Delegate) const;
    void OnUpdateGameResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateGameDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
