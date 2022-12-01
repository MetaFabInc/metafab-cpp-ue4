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
#include "OpenAPIWalletsApi.h"

#include "OpenAPITransactionModel.h"

namespace MetaFab
{

/* Get wallet balances
 *
 * Returns the current native token balance for all chains supported by MetaFab for the provided walletId. This includes balances like Eth, Matic and other native tokens from chains MetaFab supports.
*/
class METAFAB_API OpenAPIWalletsApi::GetWalletBalancesRequest : public Request
{
public:
    virtual ~GetWalletBalancesRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any wallet id within the MetaFab ecosystem. */
	FString WalletId;
};

class METAFAB_API OpenAPIWalletsApi::GetWalletBalancesResponse : public Response
{
public:
    virtual ~GetWalletBalancesResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TMap<FString, double> Content;
};

/* Get wallet transactions
 *
 * Returns an array of MetaFab initiated transactions performed by the provided walletId. Transactions returned are ordered chronologically from newest to oldest.
*/
class METAFAB_API OpenAPIWalletsApi::GetWalletTransactionsRequest : public Request
{
public:
    virtual ~GetWalletTransactionsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any wallet id within the MetaFab ecosystem. */
	FString WalletId;
};

class METAFAB_API OpenAPIWalletsApi::GetWalletTransactionsResponse : public Response
{
public:
    virtual ~GetWalletTransactionsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPITransactionModel> Content;
};

}
