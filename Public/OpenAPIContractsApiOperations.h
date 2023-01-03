/**
 * MetaFab API
 *  Complete MetaFab API references and guides can be found at: https://trymetafab.com
 *
 * OpenAPI spec version: 1.4.1
 * Contact: metafabproject@gmail.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIContractsApi.h"

#include "OpenAPIContractModel.h"
#include "OpenAPICreateContractRequest.h"
#include "OpenAPITransactionModel.h"
#include "OpenAPITransferContractOwnershipRequest.h"
#include "OpenAPIUpgradeContractTrustedForwarderRequest.h"
#include "OpenAPIWriteContractRequest.h"

namespace OpenAPI
{

/* Create custom contract
 *
 * Create a MetaFab custom contract entry from an existing contract address and contract abi. This allows the game and players belonging to the authenticated game to interact with the contract&#39;s read and write functions through MetaFab&#39;s read and write contract endpoints.
*/
class OPENAPI_API OpenAPIContractsApi::CreateContractRequest : public Request
{
public:
    virtual ~CreateContractRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	OpenAPICreateContractRequest OpenAPICreateContractRequest;
};

class OPENAPI_API OpenAPIContractsApi::CreateContractResponse : public Response
{
public:
    virtual ~CreateContractResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIContractModel Content;
};

/* Get contracts
 *
 * Returns an array of active contracts deployed by the game associated with the provided &#x60;X-Game-Key&#x60;.
*/
class OPENAPI_API OpenAPIContractsApi::GetContractsRequest : public Request
{
public:
    virtual ~GetContractsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The `publishedKey` of a specific game. This can be shared or included in game clients, websites, etc. */
	FString XGameKey;
};

class OPENAPI_API OpenAPIContractsApi::GetContractsResponse : public Response
{
public:
    virtual ~GetContractsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIContractModel> Content;
};

/* Read contract data
 *
 * Oftentimes you&#39;ll want to query and retrieve some data from a contract. This is incredibly easy to do for any contract deployed through MetaFab.  Using this endpoint, you can get the data returned by any readable function listed in a contracts ABI. This could be things like querying the totalSupply of a currency contract, the number of owners of an items contract, and more.
*/
class OPENAPI_API OpenAPIContractsApi::ReadContractRequest : public Request
{
public:
    virtual ~ReadContractRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any contract id within the MetaFab ecosystem. */
	FString ContractId;
	/* A contract function name. This can be any valid function from the the ABI of the contract you are interacting with. For example, `balanceOf`. */
	FString Func;
	/* A comma seperated list of basic data type arguments. This is optional and only necessary if the function being invoked requires arguments per the contract ABI. For example, `123,\"Hello\",false`. */
	TOptional<FString> Args;
};

class OPENAPI_API OpenAPIContractsApi::ReadContractResponse : public Response
{
public:
    virtual ~ReadContractResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonValue> Content;
};

/* Transfer contract ownership
 *
 * Transfer ownership and control of a MetaFab deployed smart contract to another wallet you control. Transferring control does not disrupt your usage of MetaFab APIs and can be done so without causing any service outages for your game. The new owner wallet will have full control over any relevant item collections and marketplace related pages this contract may be associated with, such as for MetaFab item or NFT contracts.  Your game&#39;s custodial wallet will retain a &#x60;MANAGER_ROLE&#x60; on your contracts, allowing you to still use MetaFab APIs without issue while you retain full contract ownership and the contract&#39;s administrator role. If ever you want eject from using the MetaFab APIs but still retain your deployed smart contracts, you can revoke the &#x60;MANAGER_ROLE&#x60; from your game&#39;s custodial wallet address for your contract. We do not lock you into our systems.  Please be certain that the wallet address you transfer ownership to is one you control. Once ownership and admin permissions are transferred, your game&#39;s custodial wallet no longer has permission to reassign ownership or administrative priveleges for your contract.
*/
class OPENAPI_API OpenAPIContractsApi::TransferContractOwnershipRequest : public Request
{
public:
    virtual ~TransferContractOwnershipRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any contract id within the MetaFab ecosystem. */
	FString ContractId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPITransferContractOwnershipRequest OpenAPITransferContractOwnershipRequest;
};

class OPENAPI_API OpenAPIContractsApi::TransferContractOwnershipResponse : public Response
{
public:
    virtual ~TransferContractOwnershipResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Upgrade contract trusted forwarder
 *
 * In rare circumstances, you may need to upgrade the underlying trusted forwarder contract address attached to your game&#39;s contracts. Using this endpoint, you can provide a new trusted forwarder contract address to assign to any of your contracts that implement the &#x60;upgradeTrustedForwarder&#x60; function.
*/
class OPENAPI_API OpenAPIContractsApi::UpgradeContractTrustedForwarderRequest : public Request
{
public:
    virtual ~UpgradeContractTrustedForwarderRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any contract id within the MetaFab ecosystem. */
	FString ContractId;
	/* The `secretKey` of the authenticating game. */
	FString XAuthorization;
	/* The password of the authenticating game. Required to decrypt and perform blockchain transactions with the game primary wallet. */
	FString XPassword;
	OpenAPIUpgradeContractTrustedForwarderRequest OpenAPIUpgradeContractTrustedForwarderRequest;
};

class OPENAPI_API OpenAPIContractsApi::UpgradeContractTrustedForwarderResponse : public Response
{
public:
    virtual ~UpgradeContractTrustedForwarderResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

/* Write contract data
 *
 * MetaFab&#39;s convenience endpoints for contract interactions may not be flexible enough depending on your use case. For these situations, you can interact with contracts and create transactions directly.  Using this endpoint, you can execute a transaction for any writeable contract method as defined in the contract&#39;s ABI for the MetaFab contractId provided. Both Games and Player resources have authority to use this endpoint to execute transactions against any valid MetaFab contractId.  Additionally, MetaFab will automatically attempt to perform a gasless transaction for players interacting with a contract through this endpoint. Gasless transactions by players through this endpoint will only work if the target contract was deployed through MetaFab or supports MetaFab&#39;s ERC2771 trusted forwarder contract.
*/
class OPENAPI_API OpenAPIContractsApi::WriteContractRequest : public Request
{
public:
    virtual ~WriteContractRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Any contract id within the MetaFab ecosystem. */
	FString ContractId;
	/* The `secretKey` of a specific game or the `accessToken` of a specific player. */
	FString XAuthorization;
	/* The password of the authenticating game or player. Required to decrypt and perform blockchain transactions with the game or player primary wallet. */
	FString XPassword;
	OpenAPIWriteContractRequest OpenAPIWriteContractRequest;
};

class OPENAPI_API OpenAPIContractsApi::WriteContractResponse : public Response
{
public:
    virtual ~WriteContractResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionModel Content;
};

}
