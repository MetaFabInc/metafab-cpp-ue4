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

class METAFAB_API OpenAPIShopsApi
{
public:
	OpenAPIShopsApi();
	~OpenAPIShopsApi();

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

	class CreateShopRequest;
	class CreateShopResponse;
	class GetShopOfferRequest;
	class GetShopOfferResponse;
	class GetShopOffersRequest;
	class GetShopOffersResponse;
	class GetShopsRequest;
	class GetShopsResponse;
	class RemoveShopOfferRequest;
	class RemoveShopOfferResponse;
	class SetShopOfferRequest;
	class SetShopOfferResponse;
	class UseShopOfferRequest;
	class UseShopOfferResponse;
	class WithdrawFromShopRequest;
	class WithdrawFromShopResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateShopDelegate, const CreateShopResponse&);
    DECLARE_DELEGATE_OneParam(FGetShopOfferDelegate, const GetShopOfferResponse&);
    DECLARE_DELEGATE_OneParam(FGetShopOffersDelegate, const GetShopOffersResponse&);
    DECLARE_DELEGATE_OneParam(FGetShopsDelegate, const GetShopsResponse&);
    DECLARE_DELEGATE_OneParam(FRemoveShopOfferDelegate, const RemoveShopOfferResponse&);
    DECLARE_DELEGATE_OneParam(FSetShopOfferDelegate, const SetShopOfferResponse&);
    DECLARE_DELEGATE_OneParam(FUseShopOfferDelegate, const UseShopOfferResponse&);
    DECLARE_DELEGATE_OneParam(FWithdrawFromShopDelegate, const WithdrawFromShopResponse&);
    
    FHttpRequestPtr CreateShop(const CreateShopRequest& Request, const FCreateShopDelegate& Delegate = FCreateShopDelegate()) const;
    FHttpRequestPtr GetShopOffer(const GetShopOfferRequest& Request, const FGetShopOfferDelegate& Delegate = FGetShopOfferDelegate()) const;
    FHttpRequestPtr GetShopOffers(const GetShopOffersRequest& Request, const FGetShopOffersDelegate& Delegate = FGetShopOffersDelegate()) const;
    FHttpRequestPtr GetShops(const GetShopsRequest& Request, const FGetShopsDelegate& Delegate = FGetShopsDelegate()) const;
    FHttpRequestPtr RemoveShopOffer(const RemoveShopOfferRequest& Request, const FRemoveShopOfferDelegate& Delegate = FRemoveShopOfferDelegate()) const;
    FHttpRequestPtr SetShopOffer(const SetShopOfferRequest& Request, const FSetShopOfferDelegate& Delegate = FSetShopOfferDelegate()) const;
    FHttpRequestPtr UseShopOffer(const UseShopOfferRequest& Request, const FUseShopOfferDelegate& Delegate = FUseShopOfferDelegate()) const;
    FHttpRequestPtr WithdrawFromShop(const WithdrawFromShopRequest& Request, const FWithdrawFromShopDelegate& Delegate = FWithdrawFromShopDelegate()) const;
    
private:
    void OnCreateShopResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateShopDelegate Delegate) const;
    void OnGetShopOfferResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetShopOfferDelegate Delegate) const;
    void OnGetShopOffersResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetShopOffersDelegate Delegate) const;
    void OnGetShopsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetShopsDelegate Delegate) const;
    void OnRemoveShopOfferResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRemoveShopOfferDelegate Delegate) const;
    void OnSetShopOfferResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetShopOfferDelegate Delegate) const;
    void OnUseShopOfferResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUseShopOfferDelegate Delegate) const;
    void OnWithdrawFromShopResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FWithdrawFromShopDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}