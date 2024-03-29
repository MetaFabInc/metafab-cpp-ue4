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

#include "OpenAPIContractsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIContractsApi::CreateContractRequest::ComputePath() const
{
	FString Path(TEXT("/v1/contracts"));
	return Path;
}

void OpenAPIContractsApi::CreateContractRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreateContractRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreateContractRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreateContractRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIContractsApi::CreateContractResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully created a MetaFab contract entry. Returns a contract object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIContractsApi::CreateContractResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIContractsApi::GetContractsRequest::ComputePath() const
{
	FString Path(TEXT("/v1/contracts"));
	return Path;
}

void OpenAPIContractsApi::GetContractsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Game-Key"), XGameKey);

}

void OpenAPIContractsApi::GetContractsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved an array of contracts for the game associated with the provided &#x60;X-Game-Key&#x60;."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIContractsApi::GetContractsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIContractsApi::ReadContractRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("contractId"), ToStringFormatArg(ContractId) } };

	FString Path = FString::Format(TEXT("/v1/contracts/{contractId}/reads"), PathParams);

	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("func=")) + ToUrlString(Func));
	if(Args.IsSet())
	{
		QueryParams.Add(FString(TEXT("args=")) + ToUrlString(Args.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIContractsApi::ReadContractRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIContractsApi::ReadContractResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved value returned by contract function."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIContractsApi::ReadContractResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIContractsApi::TransferContractOwnershipRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("contractId"), ToStringFormatArg(ContractId) } };

	FString Path = FString::Format(TEXT("/v1/contracts/{contractId}/owners"), PathParams);

	return Path;
}

void OpenAPIContractsApi::TransferContractOwnershipRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Wallet-Decrypt-Key"), XWalletDecryptKey);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPITransferContractOwnershipRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPITransferContractOwnershipRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPITransferContractOwnershipRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIContractsApi::TransferContractOwnershipResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully transferred ownership of the target contract. Returns a transaction object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIContractsApi::TransferContractOwnershipResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIContractsApi::UpgradeContractTrustedForwarderRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("contractId"), ToStringFormatArg(ContractId) } };

	FString Path = FString::Format(TEXT("/v1/contracts/{contractId}/forwarders"), PathParams);

	return Path;
}

void OpenAPIContractsApi::UpgradeContractTrustedForwarderRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Wallet-Decrypt-Key"), XWalletDecryptKey);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIUpgradeContractTrustedForwarderRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIUpgradeContractTrustedForwarderRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIUpgradeContractTrustedForwarderRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIContractsApi::UpgradeContractTrustedForwarderResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully upgraded the trusted forwarder for the target contract. Returns a transaction object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIContractsApi::UpgradeContractTrustedForwarderResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIContractsApi::WriteContractRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("contractId"), ToStringFormatArg(ContractId) } };

	FString Path = FString::Format(TEXT("/v1/contracts/{contractId}/writes"), PathParams);

	return Path;
}

void OpenAPIContractsApi::WriteContractRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Wallet-Decrypt-Key"), XWalletDecryptKey);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIWriteContractRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIWriteContractRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIWriteContractRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIContractsApi::WriteContractResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully executed and confirmed the transaction. Returns a transaction object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIContractsApi::WriteContractResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
