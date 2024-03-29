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
#include "OpenAPITransactionsApi.h"

#include "OpenAPITransactionModel.h"

namespace OpenAPI
{

/* Get transaction
 *
 * Returns an executed transaction object for the provided transactionId. Transactions are created by MetaFab when interacting with contracts, currencies, items and other MetaFab resources.
*/
class OPENAPI_API OpenAPITransactionsApi::GetTransactionRequest : public Request
{
public:
    virtual ~GetTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any transaction id within the MetaFab platform. */
	FString TransactionId;
};

class OPENAPI_API OpenAPITransactionsApi::GetTransactionResponse : public Response
{
public:
    virtual ~GetTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}
