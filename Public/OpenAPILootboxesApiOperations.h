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
#include "OpenAPILootboxesApi.h"

#include "OpenAPICreateLootboxManager200Response.h"
#include "OpenAPICreateLootboxManagerRequest.h"
#include "OpenAPIGetLootboxManagers200ResponseInner.h"
#include "OpenAPILootboxManagerLootbox.h"
#include "OpenAPISetLootboxManagerLootboxRequest.h"
#include "OpenAPITransactionModel.h"

namespace OpenAPI
{

/* Create lootbox manager
 *
 * Creates a new game lootbox manager and deploys a lootbox manager contract on behalf of the authenticating game&#39;s primary wallet. The deployed lootbox manager contract allows you to create lootbox behavior for existing items. For example, you can define item id(s) from one of your item collections as the requirement(s) to open a \&quot;lootbox\&quot;. The required item(s) would be burned from the interacting player&#39;s wallet and the player would receive item(s) from a weighted randomized set of possible items the lootbox can contain.
*/
class OPENAPI_API OpenAPILootboxesApi::CreateLootboxManagerRequest : public Request
{
public:
    virtual ~CreateLootboxManagerRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
	OpenAPICreateLootboxManagerRequest OpenAPICreateLootboxManagerRequest;
};

class OPENAPI_API OpenAPILootboxesApi::CreateLootboxManagerResponse : public Response
{
public:
    virtual ~CreateLootboxManagerResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICreateLootboxManager200Response Content;
};

/* Get lootbox manager lootbox
 *
 * Returns a lootbox manager lootbox object for the provided lootboxManagerLootboxId.
*/
class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagerLootboxRequest : public Request
{
public:
    virtual ~GetLootboxManagerLootboxRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any lootbox manager id within the MetaFab platform. */
	FString LootboxManagerId;
	/* Any lootbox manager lootbox id within the MetaFab platform. */
	FString LootboxManagerLootboxId;
};

class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagerLootboxResponse : public Response
{
public:
    virtual ~GetLootboxManagerLootboxResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPILootboxManagerLootbox Content;
};

/* Get lootbox manager lootboxes
 *
 * Returns all lootbox manager lootboxes as an array of lootbox objects.
*/
class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagerLootboxesRequest : public Request
{
public:
    virtual ~GetLootboxManagerLootboxesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any lootbox manager id within the MetaFab platform. */
	FString LootboxManagerId;
};

class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagerLootboxesResponse : public Response
{
public:
    virtual ~GetLootboxManagerLootboxesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPILootboxManagerLootbox> Content;
};

/* Get lootbox managers
 *
 * Returns an array of active lootbox managers for the game associated with the provided &#x60;X-Game-Key&#x60;.
*/
class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagersRequest : public Request
{
public:
    virtual ~GetLootboxManagersRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `publishedKey` of a specific game. This can be shared or included in game clients, websites, etc. */
	FString XGameKey;
};

class OPENAPI_API OpenAPILootboxesApi::GetLootboxManagersResponse : public Response
{
public:
    virtual ~GetLootboxManagersResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIGetLootboxManagers200ResponseInner> Content;
};

/* Open lootbox manager lootbox
 *
 * Opens a lootbox manager lootbox. The required input item(s) are burned from the wallet or player wallet opening the lootbox. The given output item(s) are given to the wallet or player wallet opening the lootbox.
*/
class OPENAPI_API OpenAPILootboxesApi::OpenLootboxManagerLootboxRequest : public Request
{
public:
    virtual ~OpenLootboxManagerLootboxRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any lootbox manager id within the MetaFab platform. */
	FString LootboxManagerId;
	/* Any lootbox manager lootbox id within the MetaFab platform. */
	FString LootboxManagerLootboxId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
};

class OPENAPI_API OpenAPILootboxesApi::OpenLootboxManagerLootboxResponse : public Response
{
public:
    virtual ~OpenLootboxManagerLootboxResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPITransactionModel> Content;
};

/* Remove lootbox manager lootbox
 *
 * Removes the provided lootbox by lootboxId from the provided lootbox manager. Removed lootboxes can no longer be used.
*/
class OPENAPI_API OpenAPILootboxesApi::RemoveLootboxManagerLootboxRequest : public Request
{
public:
    virtual ~RemoveLootboxManagerLootboxRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any lootbox manager id within the MetaFab platform. */
	FString LootboxManagerId;
	/* Any lootbox manager lootbox id within the MetaFab platform. */
	FString LootboxManagerLootboxId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
};

class OPENAPI_API OpenAPILootboxesApi::RemoveLootboxManagerLootboxResponse : public Response
{
public:
    virtual ~RemoveLootboxManagerLootboxResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Set lootbox manager lootbox
 *
 * Sets a new lootbox manager lootbox or updates an existing one for the provided id. Lootboxes allow item(s) to be burned to receive a random set of possible item(s) based on probability weight.  Lootboxes can require any number of unique types of items and quantities to open a created lootbox type within the system. A common pattern with lootboxes is to create a lootbox item type within an item collection, and require it as the input item type.
*/
class OPENAPI_API OpenAPILootboxesApi::SetLootboxManagerLootboxRequest : public Request
{
public:
    virtual ~SetLootboxManagerLootboxRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any lootbox manager id within the MetaFab platform. */
	FString LootboxManagerId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
	OpenAPISetLootboxManagerLootboxRequest OpenAPISetLootboxManagerLootboxRequest;
};

class OPENAPI_API OpenAPILootboxesApi::SetLootboxManagerLootboxResponse : public Response
{
public:
    virtual ~SetLootboxManagerLootboxResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}
