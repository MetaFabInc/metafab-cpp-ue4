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

#include "OpenAPIWalletsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIWalletsApi::CreateWalletSignatureRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("walletId"), ToStringFormatArg(WalletId) } };

	FString Path = FString::Format(TEXT("/v1/wallets/{walletId}/signatures"), PathParams);

	return Path;
}

void OpenAPIWalletsApi::CreateWalletSignatureRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Wallet-Decrypt-Key"), XWalletDecryptKey);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreateWalletSignatureRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreateWalletSignatureRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreateWalletSignatureRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIWalletsApi::CreateWalletSignatureResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully created a wallet signature from the provided message using the provided wallet."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIWalletsApi::CreateWalletSignatureResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIWalletsApi::GetWalletRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("walletId"), ToStringFormatArg(WalletId) } };

	FString Path = FString::Format(TEXT("/v1/wallets/{walletId}"), PathParams);

	return Path;
}

void OpenAPIWalletsApi::GetWalletRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIWalletsApi::GetWalletResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved a wallet object for the provided walletId."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIWalletsApi::GetWalletResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIWalletsApi::GetWalletBalancesRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("walletId"), ToStringFormatArg(WalletId) } };

	FString Path = FString::Format(TEXT("/v1/wallets/{walletId}/balances"), PathParams);

	return Path;
}

void OpenAPIWalletsApi::GetWalletBalancesRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIWalletsApi::GetWalletBalancesResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved native token balances of the provided walletId&#39;s address for each chain supported by MetaFab."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIWalletsApi::GetWalletBalancesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIWalletsApi::GetWalletTransactionsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("walletId"), ToStringFormatArg(WalletId) } };

	FString Path = FString::Format(TEXT("/v1/wallets/{walletId}/transactions"), PathParams);

	return Path;
}

void OpenAPIWalletsApi::GetWalletTransactionsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIWalletsApi::GetWalletTransactionsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved an array of transactions performed by the provided walletId."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIWalletsApi::GetWalletTransactionsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
