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
#include "OpenAPIWalletModel.h"

namespace MetaFab
{

/*
 * OpenAPIAuthGame200ResponseAllOf1
 *
 * 
 */
class METAFAB_API OpenAPIAuthGame200ResponseAllOf1 : public Model
{
public:
    virtual ~OpenAPIAuthGame200ResponseAllOf1() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIWalletModel> FundingWallet;
};

}
