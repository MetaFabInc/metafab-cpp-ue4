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

class OPENAPI_API OpenAPIWalletsApi
{
public:
	OpenAPIWalletsApi();
	~OpenAPIWalletsApi();

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

	class CreateWalletSignatureRequest;
	class CreateWalletSignatureResponse;
	class GetWalletRequest;
	class GetWalletResponse;
	class GetWalletBalancesRequest;
	class GetWalletBalancesResponse;
	class GetWalletTransactionsRequest;
	class GetWalletTransactionsResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateWalletSignatureDelegate, const CreateWalletSignatureResponse&);
    DECLARE_DELEGATE_OneParam(FGetWalletDelegate, const GetWalletResponse&);
    DECLARE_DELEGATE_OneParam(FGetWalletBalancesDelegate, const GetWalletBalancesResponse&);
    DECLARE_DELEGATE_OneParam(FGetWalletTransactionsDelegate, const GetWalletTransactionsResponse&);
    
    FHttpRequestPtr CreateWalletSignature(const CreateWalletSignatureRequest& Request, const FCreateWalletSignatureDelegate& Delegate = FCreateWalletSignatureDelegate()) const;
    FHttpRequestPtr GetWallet(const GetWalletRequest& Request, const FGetWalletDelegate& Delegate = FGetWalletDelegate()) const;
    FHttpRequestPtr GetWalletBalances(const GetWalletBalancesRequest& Request, const FGetWalletBalancesDelegate& Delegate = FGetWalletBalancesDelegate()) const;
    FHttpRequestPtr GetWalletTransactions(const GetWalletTransactionsRequest& Request, const FGetWalletTransactionsDelegate& Delegate = FGetWalletTransactionsDelegate()) const;
    
private:
    void OnCreateWalletSignatureResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateWalletSignatureDelegate Delegate) const;
    void OnGetWalletResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetWalletDelegate Delegate) const;
    void OnGetWalletBalancesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetWalletBalancesDelegate Delegate) const;
    void OnGetWalletTransactionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetWalletTransactionsDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
