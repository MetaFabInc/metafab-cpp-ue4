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

#include "OpenAPIBaseModel.h"
#include "OpenAPIShopsApi.h"

#include "OpenAPICreateShop200Response.h"
#include "OpenAPICreateShopRequest.h"
#include "OpenAPIGetShops200ResponseInner.h"
#include "OpenAPISetShopOfferRequest.h"
#include "OpenAPIShopOffer.h"
#include "OpenAPITransactionModel.h"
#include "OpenAPIWithdrawFromShopRequest.h"

namespace MetaFab
{

/* Create shop
 *
 * Creates a new game shop and deploys a shop contract on behalf of the authenticating game&#39;s primary wallet. The deployed shop contract allows you to create fixed price rates for players to buy specific items from any item collection or ERC1155 contract. Additionally, a shop allows you to create shop offers for some set of item(s) to another set of item(s) or any mix of currency. Shops completely support gasless player transactions.
*/
class METAFAB_API OpenAPIShopsApi::CreateShopRequest : public Request
{
public:
    virtual ~CreateShopRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPICreateShopRequest OpenAPICreateShopRequest;
};

class METAFAB_API OpenAPIShopsApi::CreateShopResponse : public Response
{
public:
    virtual ~CreateShopResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICreateShop200Response Content;
};

/* Get shop offer
 *
 * Returns a shop offer object for the provided shopOfferId.
*/
class METAFAB_API OpenAPIShopsApi::GetShopOfferRequest : public Request
{
public:
    virtual ~GetShopOfferRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
	/* Any offer id for the shop. Zero, or a positive integer. */
	FString ShopOfferId;
};

class METAFAB_API OpenAPIShopsApi::GetShopOfferResponse : public Response
{
public:
    virtual ~GetShopOfferResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIShopOffer Content;
};

/* Get shop offers
 *
 * Returns all shop offers as an array of shop offer objects.
*/
class METAFAB_API OpenAPIShopsApi::GetShopOffersRequest : public Request
{
public:
    virtual ~GetShopOffersRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
};

class METAFAB_API OpenAPIShopsApi::GetShopOffersResponse : public Response
{
public:
    virtual ~GetShopOffersResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIShopOffer> Content;
};

/* Get shops
 *
 * Returns an array of active shops for the game associated with the provided &#x60;X-Game-Key&#x60;.
*/
class METAFAB_API OpenAPIShopsApi::GetShopsRequest : public Request
{
public:
    virtual ~GetShopsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `publishedKey` of a specific game. This can be shared or included in game clients, websites, etc. */
	FString XGameKey;
};

class METAFAB_API OpenAPIShopsApi::GetShopsResponse : public Response
{
public:
    virtual ~GetShopsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIGetShops200ResponseInner> Content;
};

/* Remove shop offer
 *
 * Removes the provided offer by offerId from the provided shop. Removed offers can no longer be used.
*/
class METAFAB_API OpenAPIShopsApi::RemoveShopOfferRequest : public Request
{
public:
    virtual ~RemoveShopOfferRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
	/* Any offer id for the shop. Zero, or a positive integer. */
	FString ShopOfferId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
};

class METAFAB_API OpenAPIShopsApi::RemoveShopOfferResponse : public Response
{
public:
    virtual ~RemoveShopOfferResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Set shop offer
 *
 * Sets a new shop offer or updates an existing one for the provided id. Shop offers allow currency to item, item to currency or item to item exchanges.  All request fields besides &#x60;id&#x60; are optional. Any optional fields omitted will not be used for the offer. This allows you to create many different combinations of offers. For example, you can create an offer that may require 3 unique item ids of specified quantities from a given item collection and gives the user 1 new unique item id in exchange.  Another example, you may want to make a shop offer from one ERC20 token to another. This is also possible - simple set the input and output currency fields and leave the others blank.
*/
class METAFAB_API OpenAPIShopsApi::SetShopOfferRequest : public Request
{
public:
    virtual ~SetShopOfferRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPISetShopOfferRequest OpenAPISetShopOfferRequest;
};

class METAFAB_API OpenAPIShopsApi::SetShopOfferResponse : public Response
{
public:
    virtual ~SetShopOfferResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Use shop offer
 *
 * Uses a shop offer. The required (input) item(s) and/or currency are removed from the wallet or player wallet using the offer. The given (output) item(s) and/or currency are given to the wallet or player wallet using the offer.
*/
class METAFAB_API OpenAPIShopsApi::UseShopOfferRequest : public Request
{
public:
    virtual ~UseShopOfferRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
	/* Any offer id for the shop. Zero, or a positive integer. */
	FString ShopOfferId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
};

class METAFAB_API OpenAPIShopsApi::UseShopOfferResponse : public Response
{
public:
    virtual ~UseShopOfferResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Withdraw from shop
 *
 * Withdraws native token, currency or items from a shop. Whenever a shop offer has input requirements, the native tokens, currencies or items for the requirements of that offer are deposited into the shop contract when the offer is used. These can be withdrawn to any other address.
*/
class METAFAB_API OpenAPIShopsApi::WithdrawFromShopRequest : public Request
{
public:
    virtual ~WithdrawFromShopRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any shop id within the MetaFab ecosystem. */
	FString ShopId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPIWithdrawFromShopRequest OpenAPIWithdrawFromShopRequest;
};

class METAFAB_API OpenAPIShopsApi::WithdrawFromShopResponse : public Response
{
public:
    virtual ~WithdrawFromShopResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}