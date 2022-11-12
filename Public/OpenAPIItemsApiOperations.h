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

#include "OpenAPIBaseModel.h"
#include "OpenAPIItemsApi.h"

#include "OpenAPIBatchMintCollectionItemsRequest.h"
#include "OpenAPIBatchTransferCollectionItemsRequest.h"
#include "OpenAPIBurnCollectionItemRequest.h"
#include "OpenAPICreateCollection200Response.h"
#include "OpenAPICreateCollectionItemRequest.h"
#include "OpenAPICreateCollectionRequest.h"
#include "OpenAPIGetCollections200ResponseInner.h"
#include "OpenAPIGrantCollectionRoleRequest.h"
#include "OpenAPIMintCollectionItemRequest.h"
#include "OpenAPIRevokeCollectionRoleRequest.h"
#include "OpenAPISetCollectionApprovalRequest.h"
#include "OpenAPISetCollectionItemTimelockRequest.h"
#include "OpenAPITransactionModel.h"
#include "OpenAPITransferCollectionItemRequest.h"

namespace MetaFab
{

/* Batch mint collection items
 *
 * Creates (mints) the provided itemIds of the specified quantities to the provided wallet address or wallet address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::BatchMintCollectionItemsRequest : public Request
{
public:
    virtual ~BatchMintCollectionItemsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPIBatchMintCollectionItemsRequest OpenAPIBatchMintCollectionItemsRequest;
};

class METAFAB_API OpenAPIItemsApi::BatchMintCollectionItemsResponse : public Response
{
public:
    virtual ~BatchMintCollectionItemsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Batch transfer collection items
 *
 * Transfers one or multiple items of specified quantities to the provided wallet addresses or wallet addresses associated with the provided walletIds. You may also provide a combination of addresses and walletIds in one request.
*/
class METAFAB_API OpenAPIItemsApi::BatchTransferCollectionItemsRequest : public Request
{
public:
    virtual ~BatchTransferCollectionItemsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPIBatchTransferCollectionItemsRequest OpenAPIBatchTransferCollectionItemsRequest;
};

class METAFAB_API OpenAPIItemsApi::BatchTransferCollectionItemsResponse : public Response
{
public:
    virtual ~BatchTransferCollectionItemsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Burn collection item
 *
 * Removes (burns) the provided quantity of the collectionItemId from the authenticating game or players wallet. The quantity is permanently removed from the circulating supply of the item.
*/
class METAFAB_API OpenAPIItemsApi::BurnCollectionItemRequest : public Request
{
public:
    virtual ~BurnCollectionItemRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPIBurnCollectionItemRequest OpenAPIBurnCollectionItemRequest;
};

class METAFAB_API OpenAPIItemsApi::BurnCollectionItemResponse : public Response
{
public:
    virtual ~BurnCollectionItemResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Create collection
 *
 * Creates a new game item collection and deploys an extended functionality ERC1155 contract on behalf of the authenticating game&#39;s primary wallet. The deployed ERC1155 contract is preconfigured to fully support creating unique item types, item transfer timelocks, custom metadata per item, gasless transactions from player managed wallets, and much more.
*/
class METAFAB_API OpenAPIItemsApi::CreateCollectionRequest : public Request
{
public:
    virtual ~CreateCollectionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPICreateCollectionRequest OpenAPICreateCollectionRequest;
};

class METAFAB_API OpenAPIItemsApi::CreateCollectionResponse : public Response
{
public:
    virtual ~CreateCollectionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICreateCollection200Response Content;
};

/* Create collection item
 *
 * Creates a new item type. Item type creation associates all of the relevant item data to a specific itemId. Such as item name, image, description, attributes, any arbitrary data such as 2D or 3D model resolver URLs, and more. It is recommended, but not required, that you create a new item type through this endpoint before minting any quantity of the related itemId.  Any itemId provided will have its existing item type overriden if it already exists.  Item type data is uploaded to, and resolved through IPFS for decentralized persistence.
*/
class METAFAB_API OpenAPIItemsApi::CreateCollectionItemRequest : public Request
{
public:
    virtual ~CreateCollectionItemRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPICreateCollectionItemRequest OpenAPICreateCollectionItemRequest;
};

class METAFAB_API OpenAPIItemsApi::CreateCollectionItemResponse : public Response
{
public:
    virtual ~CreateCollectionItemResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Get collection approval
 *
 * Returns a boolean (true/false) representing if the provided operatorAddress has approval to transfer and burn items from the current collection owned by the address or address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionApprovalRequest : public Request
{
public:
    virtual ~GetCollectionApprovalRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	FString OperatorAddress;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem. */
	TOptional<FString> WalletId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionApprovalResponse : public Response
{
public:
    virtual ~GetCollectionApprovalResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    bool Content;
};

/* Get collection item
 *
 * Returns a metadata object for the provided collectionItemId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemRequest : public Request
{
public:
    virtual ~GetCollectionItemRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemResponse : public Response
{
public:
    virtual ~GetCollectionItemResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonObject> Content;
};

/* Get collection item balance
 *
 * Returns the current collection item balance of the provided collectionItemId for the provided wallet address or the wallet address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemBalanceRequest : public Request
{
public:
    virtual ~GetCollectionItemBalanceRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem. */
	TOptional<FString> WalletId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemBalanceResponse : public Response
{
public:
    virtual ~GetCollectionItemBalanceResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Get collection item balances
 *
 * Returns the current collection item balances of all collection items for the provided wallet address or the wallet address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemBalancesRequest : public Request
{
public:
    virtual ~GetCollectionItemBalancesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem. */
	TOptional<FString> WalletId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemBalancesResponse : public Response
{
public:
    virtual ~GetCollectionItemBalancesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TMap<FString, double> Content;
};

/* Get collection item supplies
 *
 * Returns the currency circulating supply of all collection items.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemSuppliesRequest : public Request
{
public:
    virtual ~GetCollectionItemSuppliesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemSuppliesResponse : public Response
{
public:
    virtual ~GetCollectionItemSuppliesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TMap<FString, double> Content;
};

/* Get collection item supply
 *
 * Returns the current circulating supply of the provided collectionItemId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemSupplyRequest : public Request
{
public:
    virtual ~GetCollectionItemSupplyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem. */
	TOptional<FString> WalletId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemSupplyResponse : public Response
{
public:
    virtual ~GetCollectionItemSupplyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Get collection item timelock
 *
 * Returns a timestamp (in seconds) for when the provided collectionItemId&#39;s transfer timelock expires. A value of 0 means the provided collectionItemId does not have a timelock set. Timelocks prevent items of a specific collectionItemId from being transferred until the set timelock timestamp has been surpassed.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemTimelockRequest : public Request
{
public:
    virtual ~GetCollectionItemTimelockRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemTimelockResponse : public Response
{
public:
    virtual ~GetCollectionItemTimelockResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Get collection items
 *
 * Returns all collection items as an array of metadata objects.  Please note that ONLY items that have had at least 1 quantity minted will be returned. If you&#39;ve created an item that has not been minted yet, it will not be returned in the array response.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionItemsRequest : public Request
{
public:
    virtual ~GetCollectionItemsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionItemsResponse : public Response
{
public:
    virtual ~GetCollectionItemsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<TSharedPtr<FJsonObject>> Content;
};

/* Get collection role
 *
 * Returns a boolean (true/false) representing if the provided role for this collection has been granted to the provided address or address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionRoleRequest : public Request
{
public:
    virtual ~GetCollectionRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* A valid MetaFab role or bytes string representing a role, such as `0xc9eb32e43bf5ecbceacf00b32281dfc5d6d700a0db676ea26ccf938a385ac3b7` */
	FString Role;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem. */
	TOptional<FString> WalletId;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionRoleResponse : public Response
{
public:
    virtual ~GetCollectionRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    bool Content;
};

/* Get collections
 *
 * Returns an array of active item collections for the game associated with the provided &#x60;X-Game-Key&#x60;.
*/
class METAFAB_API OpenAPIItemsApi::GetCollectionsRequest : public Request
{
public:
    virtual ~GetCollectionsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `publishedKey` of a specific game. This can be shared or included in game clients, websites, etc. */
	FString XGameKey;
};

class METAFAB_API OpenAPIItemsApi::GetCollectionsResponse : public Response
{
public:
    virtual ~GetCollectionsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIGetCollections200ResponseInner> Content;
};

/* Grant collection role
 *
 * Grants the provided role for the collection to the provided address or address associated with the provided walletId. Granted roles give different types of authority on behalf of the collection for specific players, addresses, or contracts to perform different types of permissioned collection operations.
*/
class METAFAB_API OpenAPIItemsApi::GrantCollectionRoleRequest : public Request
{
public:
    virtual ~GrantCollectionRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPIGrantCollectionRoleRequest OpenAPIGrantCollectionRoleRequest;
};

class METAFAB_API OpenAPIItemsApi::GrantCollectionRoleResponse : public Response
{
public:
    virtual ~GrantCollectionRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Mint collection item
 *
 * Creates (mints) the specified quantity of the provided collectionItemId to the provided wallet address or wallet address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::MintCollectionItemRequest : public Request
{
public:
    virtual ~MintCollectionItemRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPIMintCollectionItemRequest OpenAPIMintCollectionItemRequest;
};

class METAFAB_API OpenAPIItemsApi::MintCollectionItemResponse : public Response
{
public:
    virtual ~MintCollectionItemResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Revoke collection role
 *
 * Revokes the provided role for the collection to the provided address or address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::RevokeCollectionRoleRequest : public Request
{
public:
    virtual ~RevokeCollectionRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPIRevokeCollectionRoleRequest OpenAPIRevokeCollectionRoleRequest;
};

class METAFAB_API OpenAPIItemsApi::RevokeCollectionRoleResponse : public Response
{
public:
    virtual ~RevokeCollectionRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Set collection approval
 *
 * Sets approval for the provided address or wallet address associated with the provided walletId to operate on behalf of the authenticating game or player&#39;s owned items for this collection. Setting an approved value of &#x60;true&#x60; allows the provided address or address associated with the provided walletId to transfer and burn items from this collection on behalf of the authenticated game or player&#39;s wallet address.
*/
class METAFAB_API OpenAPIItemsApi::SetCollectionApprovalRequest : public Request
{
public:
    virtual ~SetCollectionApprovalRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPISetCollectionApprovalRequest OpenAPISetCollectionApprovalRequest;
};

class METAFAB_API OpenAPIItemsApi::SetCollectionApprovalResponse : public Response
{
public:
    virtual ~SetCollectionApprovalResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Set collection item timelock
 *
 * Sets the item timelock for the provided collection itemId. The timelock is a unix timestamp (in seconds) that defines a period in time of when an item may be transferred by players. Until the timelock timestamp has passed, the itemId for the given timelock may not be transferred, sold, traded, etc. A timelock of 0 (default) means that there is no timelock set on the itemId and it can be freely transferred, traded, etc.
*/
class METAFAB_API OpenAPIItemsApi::SetCollectionItemTimelockRequest : public Request
{
public:
    virtual ~SetCollectionItemTimelockRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPISetCollectionItemTimelockRequest OpenAPISetCollectionItemTimelockRequest;
};

class METAFAB_API OpenAPIItemsApi::SetCollectionItemTimelockResponse : public Response
{
public:
    virtual ~SetCollectionItemTimelockResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Transfer collection item
 *
 * Transfers specified quantity of itemId to the provided wallet address or wallet address associated with the provided walletId.
*/
class METAFAB_API OpenAPIItemsApi::TransferCollectionItemRequest : public Request
{
public:
    virtual ~TransferCollectionItemRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any collection id within the MetaFab ecosystem. */
	FString CollectionId;
	/* Any item id for the collection. Zero, or a positive integer. */
	double CollectionItemId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPITransferCollectionItemRequest OpenAPITransferCollectionItemRequest;
};

class METAFAB_API OpenAPIItemsApi::TransferCollectionItemResponse : public Response
{
public:
    virtual ~TransferCollectionItemResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}