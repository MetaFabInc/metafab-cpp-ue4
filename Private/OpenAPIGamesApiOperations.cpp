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

#include "OpenAPIGamesApiOperations.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace MetaFab
{

FString OpenAPIGamesApi::AuthGameRequest::ComputePath() const
{
	FString Path(TEXT("/v1/games/auth"));
	return Path;
}

void OpenAPIGamesApi::AuthGameRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIGamesApi::AuthGameResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Succesfully authorized the request and retrieved a game object containing authorization keys and credentials."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIGamesApi::AuthGameResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIGamesApi::CreateGameRequest::ComputePath() const
{
	FString Path(TEXT("/v1/games"));
	return Path;
}

void OpenAPIGamesApi::CreateGameRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreateGameRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPICreateGameRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPICreateGameRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMetaFab, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIGamesApi::CreateGameResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully created a new game. Returns a game object containing a wallet and fundingWallet property, respectively representing the games primary wallet address (used to deploy &amp; interact with contract) and funding wallet address (used to cover gasless transaction fees)."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIGamesApi::CreateGameResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIGamesApi::GetGameRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("gameId"), ToStringFormatArg(GameId) } };

	FString Path = FString::Format(TEXT("/v1/games/{gameId}"), PathParams);

	return Path;
}

void OpenAPIGamesApi::GetGameRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIGamesApi::GetGameResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successfully retrieved game."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	}
}

bool OpenAPIGamesApi::GetGameResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIGamesApi::UpdateGameRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("gameId"), ToStringFormatArg(GameId) } };

	FString Path = FString::Format(TEXT("/v1/games/{gameId}"), PathParams);

	return Path;
}

void OpenAPIGamesApi::UpdateGameRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PATCH"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("X-Authorization"), XAuthorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIUpdateGameRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPIUpdateGameRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMetaFab, Error, TEXT("Body parameter (OpenAPIUpdateGameRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMetaFab, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIGamesApi::UpdateGameResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Returns the updated game object."));
		break;
	case 400:
		SetResponseString(TEXT("An API level error occurred. This is often due to problematic data being provided by you."));
		break;
	case 401:
		SetResponseString(TEXT("An authorization error occured. This is often due to incorrect tokens or keys being provided, or accessing a resource that the provided tokens or keys do not have access to."));
		break;
	}
}

bool OpenAPIGamesApi::UpdateGameResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}