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
#include "OpenAPICurrenciesApi.h"

#include "OpenAPIBatchTransferCurrencyRequest.h"
#include "OpenAPIBurnCurrencyRequest.h"
#include "OpenAPICreateCurrency200Response.h"
#include "OpenAPICreateCurrencyRequest.h"
#include "OpenAPIGetCurrencies200ResponseInner.h"
#include "OpenAPIGetCurrencyFees200Response.h"
#include "OpenAPIGrantCurrencyRoleRequest.h"
#include "OpenAPIMintCurrencyRequest.h"
#include "OpenAPIRevokeCollectionRoleRequest.h"
#include "OpenAPISetCurrencyFeesRequest.h"
#include "OpenAPITransactionModel.h"
#include "OpenAPITransferCurrencyRequest.h"

namespace OpenAPI
{

/* Batch transfer currency
 *
 * Transfers multiple amounts of currency to multiple provided wallet addresses or wallet addresses associated with the provided walletIds. You may also provide a combination of addresses and walletIds in one request, the proper receipients will be automatically determined, with &#x60;addresses&#x60; getting &#x60;amounts&#x60; order priority first.  Optional references may be included for the transfer. References are useful for identifying transfers intended to pay for items, trades, services and more.
*/
class OPENAPI_API OpenAPICurrenciesApi::BatchTransferCurrencyRequest : public Request
{
public:
    virtual ~BatchTransferCurrencyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
	OpenAPIBatchTransferCurrencyRequest OpenAPIBatchTransferCurrencyRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::BatchTransferCurrencyResponse : public Response
{
public:
    virtual ~BatchTransferCurrencyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Burn currency
 *
 * Removes (burns) the provided amount of currency from the authenticating game or players wallet. The currency amount is permanently removed from the circulating supply of the currency.
*/
class OPENAPI_API OpenAPICurrenciesApi::BurnCurrencyRequest : public Request
{
public:
    virtual ~BurnCurrencyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
	OpenAPIBurnCurrencyRequest OpenAPIBurnCurrencyRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::BurnCurrencyResponse : public Response
{
public:
    virtual ~BurnCurrencyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Create currency
 *
 * Creates a new game currency and deploys an ERC20 token contract on behalf of the authenticating game&#39;s primary wallet. The deployed ERC20 contract is preconfigured to fully support bridging across blockchains, batched transfers and gasless transactions on any supported blockchain as well as full support for gasless transactions from player managed wallets.
*/
class OPENAPI_API OpenAPICurrenciesApi::CreateCurrencyRequest : public Request
{
public:
    virtual ~CreateCurrencyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
	OpenAPICreateCurrencyRequest OpenAPICreateCurrencyRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::CreateCurrencyResponse : public Response
{
public:
    virtual ~CreateCurrencyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICreateCurrency200Response Content;
};

/* Get currencies
 *
 * Returns an array of active currencies for the game associated with the provided &#x60;X-Game-Key&#x60;.
*/
class OPENAPI_API OpenAPICurrenciesApi::GetCurrenciesRequest : public Request
{
public:
    virtual ~GetCurrenciesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `publishedKey` of a specific game. This can be shared or included in game clients, websites, etc. */
	FString XGameKey;
};

class OPENAPI_API OpenAPICurrenciesApi::GetCurrenciesResponse : public Response
{
public:
    virtual ~GetCurrenciesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIGetCurrencies200ResponseInner> Content;
};

/* Get currency balance
 *
 * Returns the current currency balance of the provided wallet address or or the wallet address associated with the provided walletId.
*/
class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyBalanceRequest : public Request
{
public:
    virtual ~GetCurrencyBalanceRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab platform. */
	TOptional<FString> WalletId;
};

class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyBalanceResponse : public Response
{
public:
    virtual ~GetCurrencyBalanceResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Get currency fees
 *
 * Returns the current fee recipient address and fees of the currency for the provided currencyId. Fees are only applicable for gasless transactions performed by default by players.
*/
class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyFeesRequest : public Request
{
public:
    virtual ~GetCurrencyFeesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
};

class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyFeesResponse : public Response
{
public:
    virtual ~GetCurrencyFeesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIGetCurrencyFees200Response Content;
};

/* Get currency role
 *
 * Returns a boolean (true/false) representing if the provided role for this currency has been granted to the provided address or address associated with the provided walletId.
*/
class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyRoleRequest : public Request
{
public:
    virtual ~GetCurrencyRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* A valid MetaFab role or bytes string representing a role, such as `0xc9eb32e43bf5ecbceacf00b32281dfc5d6d700a0db676ea26ccf938a385ac3b7` */
	FString Role;
	/* A valid EVM based address. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab platform. */
	TOptional<FString> WalletId;
};

class OPENAPI_API OpenAPICurrenciesApi::GetCurrencyRoleResponse : public Response
{
public:
    virtual ~GetCurrencyRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    bool Content;
};

/* Grant currency role
 *
 * Grants the provided role for the currency to the provided address or address associated with the provided walletId. Granted roles give different types of authority on behalf of the currency for specific players, addresses, or contracts to perform different types of permissioned currency operations.
*/
class OPENAPI_API OpenAPICurrenciesApi::GrantCurrencyRoleRequest : public Request
{
public:
    virtual ~GrantCurrencyRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
	OpenAPIGrantCurrencyRoleRequest OpenAPIGrantCurrencyRoleRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::GrantCurrencyRoleResponse : public Response
{
public:
    virtual ~GrantCurrencyRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Mint currency
 *
 * Creates (mints) the provided amount of currency to the provided wallet address or wallet address associated with the provided walletId.
*/
class OPENAPI_API OpenAPICurrenciesApi::MintCurrencyRequest : public Request
{
public:
    virtual ~MintCurrencyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
	OpenAPIMintCurrencyRequest OpenAPIMintCurrencyRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::MintCurrencyResponse : public Response
{
public:
    virtual ~MintCurrencyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Revoke currency role
 *
 * Revokes the provided role for the currency to the provided address or address associated with the provided walletId.
*/
class OPENAPI_API OpenAPICurrenciesApi::RevokeCurrencyRoleRequest : public Request
{
public:
    virtual ~RevokeCurrencyRoleRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
	OpenAPIRevokeCollectionRoleRequest OpenAPIRevokeCollectionRoleRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::RevokeCurrencyRoleResponse : public Response
{
public:
    virtual ~RevokeCurrencyRoleResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Set currency fees
 *
 * Sets the recipient address, basis points, fixed amount and cap amount for a currency&#39;s fees.
*/
class OPENAPI_API OpenAPICurrenciesApi::SetCurrencyFeesRequest : public Request
{
public:
    virtual ~SetCurrencyFeesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XWalletDecryptKey;
	OpenAPISetCurrencyFeesRequest OpenAPISetCurrencyFeesRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::SetCurrencyFeesResponse : public Response
{
public:
    virtual ~SetCurrencyFeesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Transfer currency
 *
 * Transfers an amount of currency to the provided wallet address or wallet address associated with the provided walletId. If you want to transfer to multiple wallets with different amounts and optional references in one API request, please see the Batch transfer currency documentation.  An optional reference may be included for the transfer. References are useful for identifying transfers intended to pay for items, trades, services and more.
*/
class OPENAPI_API OpenAPICurrenciesApi::TransferCurrencyRequest : public Request
{
public:
    virtual ~TransferCurrencyRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any currency id within the MetaFab platform. */
	FString CurrencyId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The `walletDecryptKey` of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XWalletDecryptKey;
	OpenAPITransferCurrencyRequest OpenAPITransferCurrencyRequest;
};

class OPENAPI_API OpenAPICurrenciesApi::TransferCurrencyResponse : public Response
{
public:
    virtual ~TransferCurrencyResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}
