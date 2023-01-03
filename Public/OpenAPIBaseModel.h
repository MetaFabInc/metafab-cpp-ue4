/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.0
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonWriter.h"
#include "Dom/JsonObject.h"
#include "HttpRetrySystem.h"
#include "Containers/Ticker.h"
#include "Runtime/Launch/Resources/Version.h"

namespace OpenAPI
{

typedef TSharedRef<TJsonWriter<>> JsonWriter;
using namespace FHttpRetrySystem;

struct OPENAPI_API HttpRetryManager
	: public FManager
#if ENGINE_MAJOR_VERSION <= 4
	, public FTickerObjectBase
#else
	, public FTSTickerObjectBase
#endif
{
	using FManager::FManager;

	bool Tick(float DeltaTime) final;
};

struct OPENAPI_API HttpRetryParams
{
	HttpRetryParams(
		const FRetryLimitCountSetting& InRetryLimitCountOverride = FRetryLimitCountSetting(),
		const FRetryTimeoutRelativeSecondsSetting& InRetryTimeoutRelativeSecondsOverride = FRetryTimeoutRelativeSecondsSetting(),
		const FRetryResponseCodes& InRetryResponseCodes = FRetryResponseCodes(),
		const FRetryVerbs& InRetryVerbs = FRetryVerbs(),
		const FRetryDomainsPtr& InRetryDomains = FRetryDomainsPtr()
	);

	FRetryLimitCountSetting              RetryLimitCountOverride;
	FRetryTimeoutRelativeSecondsSetting  RetryTimeoutRelativeSecondsOverride;
	FRetryResponseCodes					 RetryResponseCodes;
	FRetryVerbs                          RetryVerbs;
	FRetryDomainsPtr					 RetryDomains;
};

class OPENAPI_API Model
{
public:
	virtual ~Model() {}
	virtual void WriteJson(JsonWriter& Writer) const = 0;
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) = 0;
};

class OPENAPI_API Request
{
public:
	virtual ~Request() {}
	virtual void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const = 0;
	virtual FString ComputePath() const = 0;

	/* Enables retry and optionally sets a retry policy for this request */
	void SetShouldRetry(const HttpRetryParams& Params = HttpRetryParams()) { RetryParams = Params; }
	const TOptional<HttpRetryParams>& GetRetryParams() const { return RetryParams; }

private:
	TOptional<HttpRetryParams> RetryParams;
};

class OPENAPI_API Response
{
public:
	virtual ~Response() {}
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) = 0;

	void SetSuccessful(bool InSuccessful) { Successful = InSuccessful; }
	bool IsSuccessful() const { return Successful; }

	virtual void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode);
	EHttpResponseCodes::Type GetHttpResponseCode() const { return ResponseCode; }

	void SetResponseString(const FString& InResponseString) { ResponseString = InResponseString; }
	const FString& GetResponseString() const { return ResponseString; }

	void SetHttpResponse(const FHttpResponsePtr& InHttpResponse) { HttpResponse = InHttpResponse; }
	const FHttpResponsePtr& GetHttpResponse() const { return HttpResponse; }

private:
	bool Successful;
	EHttpResponseCodes::Type ResponseCode;
	FString ResponseString;
	FHttpResponsePtr HttpResponse;
};

}
