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

namespace OpenAPI
{

/*
 * OpenAPIMintCurrencyRequest
 *
 * 
 */
class OPENAPI_API OpenAPIMintCurrencyRequest : public Model
{
public:
    virtual ~OpenAPIMintCurrencyRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The amount of currency to create (mint). */
	double Amount;
	/* A valid EVM based address to create (mint) currency for. For example, `0x39cb70F972E0EE920088AeF97Dbe5c6251a9c25D`. */
	TOptional<FString> Address;
	/* Any wallet id within the MetaFab ecosystem to create (mint) currency for. */
	TOptional<FString> WalletId;
};

}
