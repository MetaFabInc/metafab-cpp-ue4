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
 * OpenAPIUpgradeContractTrustedForwarderRequest
 *
 * 
 */
class OPENAPI_API OpenAPIUpgradeContractTrustedForwarderRequest : public Model
{
public:
    virtual ~OpenAPIUpgradeContractTrustedForwarderRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A ERC2771 forwarder smart contract address to assign as the new trusted forwarder of the target smart contract. */
	FString ForwarderAddress;
};

}
