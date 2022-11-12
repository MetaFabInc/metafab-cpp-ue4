/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.2.1
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

class METAFAB_API OpenAPIItemsApi
{
public:
	OpenAPIItemsApi();
	~OpenAPIItemsApi();

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

	class BatchMintCollectionItemsRequest;
	class BatchMintCollectionItemsResponse;
	class BatchTransferCollectionItemsRequest;
	class BatchTransferCollectionItemsResponse;
	class BurnCollectionItemRequest;
	class BurnCollectionItemResponse;
	class CreateCollectionRequest;
	class CreateCollectionResponse;
	class CreateCollectionItemRequest;
	class CreateCollectionItemResponse;
	class GetCollectionApprovalRequest;
	class GetCollectionApprovalResponse;
	class GetCollectionItemRequest;
	class GetCollectionItemResponse;
	class GetCollectionItemBalanceRequest;
	class GetCollectionItemBalanceResponse;
	class GetCollectionItemBalancesRequest;
	class GetCollectionItemBalancesResponse;
	class GetCollectionItemSuppliesRequest;
	class GetCollectionItemSuppliesResponse;
	class GetCollectionItemSupplyRequest;
	class GetCollectionItemSupplyResponse;
	class GetCollectionItemTimelockRequest;
	class GetCollectionItemTimelockResponse;
	class GetCollectionItemsRequest;
	class GetCollectionItemsResponse;
	class GetCollectionRoleRequest;
	class GetCollectionRoleResponse;
	class GetCollectionsRequest;
	class GetCollectionsResponse;
	class GrantCollectionRoleRequest;
	class GrantCollectionRoleResponse;
	class MintCollectionItemRequest;
	class MintCollectionItemResponse;
	class RevokeCollectionRoleRequest;
	class RevokeCollectionRoleResponse;
	class SetCollectionApprovalRequest;
	class SetCollectionApprovalResponse;
	class SetCollectionItemTimelockRequest;
	class SetCollectionItemTimelockResponse;
	class TransferCollectionItemRequest;
	class TransferCollectionItemResponse;
	
    DECLARE_DELEGATE_OneParam(FBatchMintCollectionItemsDelegate, const BatchMintCollectionItemsResponse&);
    DECLARE_DELEGATE_OneParam(FBatchTransferCollectionItemsDelegate, const BatchTransferCollectionItemsResponse&);
    DECLARE_DELEGATE_OneParam(FBurnCollectionItemDelegate, const BurnCollectionItemResponse&);
    DECLARE_DELEGATE_OneParam(FCreateCollectionDelegate, const CreateCollectionResponse&);
    DECLARE_DELEGATE_OneParam(FCreateCollectionItemDelegate, const CreateCollectionItemResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionApprovalDelegate, const GetCollectionApprovalResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemDelegate, const GetCollectionItemResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemBalanceDelegate, const GetCollectionItemBalanceResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemBalancesDelegate, const GetCollectionItemBalancesResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemSuppliesDelegate, const GetCollectionItemSuppliesResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemSupplyDelegate, const GetCollectionItemSupplyResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemTimelockDelegate, const GetCollectionItemTimelockResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionItemsDelegate, const GetCollectionItemsResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionRoleDelegate, const GetCollectionRoleResponse&);
    DECLARE_DELEGATE_OneParam(FGetCollectionsDelegate, const GetCollectionsResponse&);
    DECLARE_DELEGATE_OneParam(FGrantCollectionRoleDelegate, const GrantCollectionRoleResponse&);
    DECLARE_DELEGATE_OneParam(FMintCollectionItemDelegate, const MintCollectionItemResponse&);
    DECLARE_DELEGATE_OneParam(FRevokeCollectionRoleDelegate, const RevokeCollectionRoleResponse&);
    DECLARE_DELEGATE_OneParam(FSetCollectionApprovalDelegate, const SetCollectionApprovalResponse&);
    DECLARE_DELEGATE_OneParam(FSetCollectionItemTimelockDelegate, const SetCollectionItemTimelockResponse&);
    DECLARE_DELEGATE_OneParam(FTransferCollectionItemDelegate, const TransferCollectionItemResponse&);
    
    FHttpRequestPtr BatchMintCollectionItems(const BatchMintCollectionItemsRequest& Request, const FBatchMintCollectionItemsDelegate& Delegate = FBatchMintCollectionItemsDelegate()) const;
    FHttpRequestPtr BatchTransferCollectionItems(const BatchTransferCollectionItemsRequest& Request, const FBatchTransferCollectionItemsDelegate& Delegate = FBatchTransferCollectionItemsDelegate()) const;
    FHttpRequestPtr BurnCollectionItem(const BurnCollectionItemRequest& Request, const FBurnCollectionItemDelegate& Delegate = FBurnCollectionItemDelegate()) const;
    FHttpRequestPtr CreateCollection(const CreateCollectionRequest& Request, const FCreateCollectionDelegate& Delegate = FCreateCollectionDelegate()) const;
    FHttpRequestPtr CreateCollectionItem(const CreateCollectionItemRequest& Request, const FCreateCollectionItemDelegate& Delegate = FCreateCollectionItemDelegate()) const;
    FHttpRequestPtr GetCollectionApproval(const GetCollectionApprovalRequest& Request, const FGetCollectionApprovalDelegate& Delegate = FGetCollectionApprovalDelegate()) const;
    FHttpRequestPtr GetCollectionItem(const GetCollectionItemRequest& Request, const FGetCollectionItemDelegate& Delegate = FGetCollectionItemDelegate()) const;
    FHttpRequestPtr GetCollectionItemBalance(const GetCollectionItemBalanceRequest& Request, const FGetCollectionItemBalanceDelegate& Delegate = FGetCollectionItemBalanceDelegate()) const;
    FHttpRequestPtr GetCollectionItemBalances(const GetCollectionItemBalancesRequest& Request, const FGetCollectionItemBalancesDelegate& Delegate = FGetCollectionItemBalancesDelegate()) const;
    FHttpRequestPtr GetCollectionItemSupplies(const GetCollectionItemSuppliesRequest& Request, const FGetCollectionItemSuppliesDelegate& Delegate = FGetCollectionItemSuppliesDelegate()) const;
    FHttpRequestPtr GetCollectionItemSupply(const GetCollectionItemSupplyRequest& Request, const FGetCollectionItemSupplyDelegate& Delegate = FGetCollectionItemSupplyDelegate()) const;
    FHttpRequestPtr GetCollectionItemTimelock(const GetCollectionItemTimelockRequest& Request, const FGetCollectionItemTimelockDelegate& Delegate = FGetCollectionItemTimelockDelegate()) const;
    FHttpRequestPtr GetCollectionItems(const GetCollectionItemsRequest& Request, const FGetCollectionItemsDelegate& Delegate = FGetCollectionItemsDelegate()) const;
    FHttpRequestPtr GetCollectionRole(const GetCollectionRoleRequest& Request, const FGetCollectionRoleDelegate& Delegate = FGetCollectionRoleDelegate()) const;
    FHttpRequestPtr GetCollections(const GetCollectionsRequest& Request, const FGetCollectionsDelegate& Delegate = FGetCollectionsDelegate()) const;
    FHttpRequestPtr GrantCollectionRole(const GrantCollectionRoleRequest& Request, const FGrantCollectionRoleDelegate& Delegate = FGrantCollectionRoleDelegate()) const;
    FHttpRequestPtr MintCollectionItem(const MintCollectionItemRequest& Request, const FMintCollectionItemDelegate& Delegate = FMintCollectionItemDelegate()) const;
    FHttpRequestPtr RevokeCollectionRole(const RevokeCollectionRoleRequest& Request, const FRevokeCollectionRoleDelegate& Delegate = FRevokeCollectionRoleDelegate()) const;
    FHttpRequestPtr SetCollectionApproval(const SetCollectionApprovalRequest& Request, const FSetCollectionApprovalDelegate& Delegate = FSetCollectionApprovalDelegate()) const;
    FHttpRequestPtr SetCollectionItemTimelock(const SetCollectionItemTimelockRequest& Request, const FSetCollectionItemTimelockDelegate& Delegate = FSetCollectionItemTimelockDelegate()) const;
    FHttpRequestPtr TransferCollectionItem(const TransferCollectionItemRequest& Request, const FTransferCollectionItemDelegate& Delegate = FTransferCollectionItemDelegate()) const;
    
private:
    void OnBatchMintCollectionItemsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBatchMintCollectionItemsDelegate Delegate) const;
    void OnBatchTransferCollectionItemsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBatchTransferCollectionItemsDelegate Delegate) const;
    void OnBurnCollectionItemResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBurnCollectionItemDelegate Delegate) const;
    void OnCreateCollectionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateCollectionDelegate Delegate) const;
    void OnCreateCollectionItemResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateCollectionItemDelegate Delegate) const;
    void OnGetCollectionApprovalResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionApprovalDelegate Delegate) const;
    void OnGetCollectionItemResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemDelegate Delegate) const;
    void OnGetCollectionItemBalanceResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemBalanceDelegate Delegate) const;
    void OnGetCollectionItemBalancesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemBalancesDelegate Delegate) const;
    void OnGetCollectionItemSuppliesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemSuppliesDelegate Delegate) const;
    void OnGetCollectionItemSupplyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemSupplyDelegate Delegate) const;
    void OnGetCollectionItemTimelockResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemTimelockDelegate Delegate) const;
    void OnGetCollectionItemsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionItemsDelegate Delegate) const;
    void OnGetCollectionRoleResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionRoleDelegate Delegate) const;
    void OnGetCollectionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetCollectionsDelegate Delegate) const;
    void OnGrantCollectionRoleResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGrantCollectionRoleDelegate Delegate) const;
    void OnMintCollectionItemResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintCollectionItemDelegate Delegate) const;
    void OnRevokeCollectionRoleResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRevokeCollectionRoleDelegate Delegate) const;
    void OnSetCollectionApprovalResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetCollectionApprovalDelegate Delegate) const;
    void OnSetCollectionItemTimelockResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetCollectionItemTimelockDelegate Delegate) const;
    void OnTransferCollectionItemResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTransferCollectionItemDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
