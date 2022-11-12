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

#pragma once

#include "OpenAPIBaseModel.h"

namespace MetaFab
{

/*
 * OpenAPIGrantCurrencyRoleRequest
 *
 * 
 */
class METAFAB_API OpenAPIGrantCurrencyRoleRequest : public Model
{
public:
    virtual ~OpenAPIGrantCurrencyRoleRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A valid MetaFab role or bytes string representing a role, such as `minter` or `0xc9eb32e43bf5ecbceacf00b32281dfc5d6d700a0db676ea26ccf938a385ac3b7` */
	FString Role;
	/* A valid EVM based address to grant the role to. */
	TOptional<FString> Address;
	/* A wallet id within the MetaFab ecosystem to grant the role to. */
	TOptional<TArray<FString>> WalletId;
};

}