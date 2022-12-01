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

#include "OpenAPILootboxesApiOperations.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace MetaFab
{

FString OpenAPILootboxesApi::CreateLootboxManagerRequest::ComputePath() const
{
	FString Path(TEXT("/v1/lootboxManagers"));
	return Path;
}

void OpenAPILootboxesApi::CreateLootboxManagerRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Password"), XPassword);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreateLootboxManagerRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPICreateLootboxManagerRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPICreateLootboxManagerRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMetaFab, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPILootboxesApi::CreateLootboxManagerResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully created a new lootbox manager and deployed its contract on the chain specified. Returns a lootbox manager object containing a contract property with the deployment transaction."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPILootboxesApi::CreateLootboxManagerResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::GetLootboxManagerLootboxRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("lootboxManagerId"), ToStringFormatArg(LootboxManagerId) },
	{ TEXT("lootboxManagerLootboxId"), ToStringFormatArg(LootboxManagerLootboxId) } };

	FString Path = FString::Format(TEXT("/v1/lootboxManagers/{lootboxManagerId}/lootboxes/{lootboxManagerLootboxId}"), PathParams);

	return Path;
}

void OpenAPILootboxesApi::GetLootboxManagerLootboxRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPILootboxesApi::GetLootboxManagerLootboxResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved lootbox manager lootbox."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPILootboxesApi::GetLootboxManagerLootboxResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::GetLootboxManagerLootboxesRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("lootboxManagerId"), ToStringFormatArg(LootboxManagerId) } };

	FString Path = FString::Format(TEXT("/v1/lootboxManagers/{lootboxManagerId}/lootboxes"), PathParams);

	return Path;
}

void OpenAPILootboxesApi::GetLootboxManagerLootboxesRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPILootboxesApi::GetLootboxManagerLootboxesResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved lootbox manager lootboxes."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPILootboxesApi::GetLootboxManagerLootboxesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::GetLootboxManagersRequest::ComputePath() const
{
	FString Path(TEXT("/v1/lootboxManagers"));
	return Path;
}

void OpenAPILootboxesApi::GetLootboxManagersRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Game-Key"), XGameKey);

}

void OpenAPILootboxesApi::GetLootboxManagersResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved an array of lootbox managers for the game associated with the provided &#x60;X-Game-Key&#x60;"));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPILootboxesApi::GetLootboxManagersResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::OpenLootboxManagerLootboxRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("lootboxManagerId"), ToStringFormatArg(LootboxManagerId) },
	{ TEXT("lootboxManagerLootboxId"), ToStringFormatArg(LootboxManagerLootboxId) } };

	FString Path = FString::Format(TEXT("/v1/lootboxManagers/{lootboxManagerId}/lootboxes/{lootboxManagerLootboxId}/opens"), PathParams);

	return Path;
}

void OpenAPILootboxesApi::OpenLootboxManagerLootboxRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Password"), XPassword);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogMetaFab, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPILootboxesApi::OpenLootboxManagerLootboxResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully opened provided lootbox manager lootbox. Returns an array of transaction objects. The first transaction object being for the lootbox opening, the second for claiming its contents."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPILootboxesApi::OpenLootboxManagerLootboxResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::RemoveLootboxManagerLootboxRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("lootboxManagerId"), ToStringFormatArg(LootboxManagerId) },
	{ TEXT("lootboxManagerLootboxId"), ToStringFormatArg(LootboxManagerLootboxId) } };

	FString Path = FString::Format(TEXT("/v1/lootboxManagers/{lootboxManagerId}/lootboxes/{lootboxManagerLootboxId}"), PathParams);

	return Path;
}

void OpenAPILootboxesApi::RemoveLootboxManagerLootboxRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Password"), XPassword);

}

void OpenAPILootboxesApi::RemoveLootboxManagerLootboxResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully removed the provided lootbox from the provided lootbox manager. Returns a transaction object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPILootboxesApi::RemoveLootboxManagerLootboxResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPILootboxesApi::SetLootboxManagerLootboxRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("lootboxManagerId"), ToStringFormatArg(LootboxManagerId) } };

	FString Path = FString::Format(TEXT("/v1/lootboxManagers/{lootboxManagerId}/lootboxes"), PathParams);

	return Path;
}

void OpenAPILootboxesApi::SetLootboxManagerLootboxRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);
	HttpRequest->SetHeader(TEXT("X-Password"), XPassword);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPISetLootboxManagerLootboxRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPISetLootboxManagerLootboxRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPISetLootboxManagerLootboxRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMetaFab, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPILootboxesApi::SetLootboxManagerLootboxResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully created or updated an lootbox manager lootbox for the provided lootbox id. Returns a transaction object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPILootboxesApi::SetLootboxManagerLootboxResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}