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

class METAFAB_API OpenAPIContractsApi
{
public:
	OpenAPIContractsApi();
	~OpenAPIContractsApi();

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

	class CreateContractRequest;
	class CreateContractResponse;
	class GetContractsRequest;
	class GetContractsResponse;
	class ReadContractRequest;
	class ReadContractResponse;
	class WriteContractRequest;
	class WriteContractResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateContractDelegate, const CreateContractResponse&);
    DECLARE_DELEGATE_OneParam(FGetContractsDelegate, const GetContractsResponse&);
    DECLARE_DELEGATE_OneParam(FReadContractDelegate, const ReadContractResponse&);
    DECLARE_DELEGATE_OneParam(FWriteContractDelegate, const WriteContractResponse&);
    
    FHttpRequestPtr CreateContract(const CreateContractRequest& Request, const FCreateContractDelegate& Delegate = FCreateContractDelegate()) const;
    FHttpRequestPtr GetContracts(const GetContractsRequest& Request, const FGetContractsDelegate& Delegate = FGetContractsDelegate()) const;
    FHttpRequestPtr ReadContract(const ReadContractRequest& Request, const FReadContractDelegate& Delegate = FReadContractDelegate()) const;
    FHttpRequestPtr WriteContract(const WriteContractRequest& Request, const FWriteContractDelegate& Delegate = FWriteContractDelegate()) const;
    
private:
    void OnCreateContractResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateContractDelegate Delegate) const;
    void OnGetContractsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetContractsDelegate Delegate) const;
    void OnReadContractResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FReadContractDelegate Delegate) const;
    void OnWriteContractResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FWriteContractDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
