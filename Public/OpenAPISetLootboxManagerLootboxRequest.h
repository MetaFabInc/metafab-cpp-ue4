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

#pragma once

#include "OpenAPIBaseModel.h"

namespace MetaFab
{

/*
 * OpenAPISetLootboxManagerLootboxRequest
 *
 * 
 */
class METAFAB_API OpenAPISetLootboxManagerLootboxRequest : public Model
{
public:
    virtual ~OpenAPISetLootboxManagerLootboxRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* A unique lootbox id to use for this lootbox for the lootbox manager. If an existing lootbox id is used, the current lootbox will be updated but the existing number of opens will be kept. If you want to reset the number of opens for an existing lootbox, first remove it using the remove lootbox endpoint, then set it. */
	int32 Id = 0;
	/* A valid EVM based ERC1155 or MetaFab game items contract address that represents the collection for input items required by this lootbox. `inputCollectionAddress` or `inputCollectionId` can optionally be provided. */
	TOptional<FString> InputCollectionAddress;
	/* A valid MetaFab collection id that represents the collection for input items required by this lootbox. `inputCollectionAddress` or `inputCollectionId` can optionally be provided. */
	TOptional<FString> InputCollectionId;
	/* An array of item ids from the provided input collection that are required to open this lootbox. Input items are burn upon opening a lootbox. */
	TOptional<TArray<int32>> InputCollectionItemIds;
	/* An array of amounts for each item id from the provided input collection that are required to open this lootbox. Item amounts array indices are reflective of the amount required for a given item id at the same index. */
	TOptional<TArray<int32>> InputCollectionItemAmounts;
	/* A valid EVM based ERC1155 or MetaFab game items contract address that represents the collection for possible output items given by this lootbox. `outputCollectionAddress` or `outputCollectionId` can optionally be provided. */
	TOptional<FString> OutputCollectionAddress;
	/* A valid MetaFab collection id that represents the collection for possible output items given by this lootbox. `outputCollectionAddress` or `outputCollectionId` can optionally be provided. */
	TOptional<FString> OutputCollectionId;
	/* An array of item ids from the provided output collection that are possibly given by this lootbox. Randomly selected output items are automatically minted if the lootbox manager contract has the `minter` role for the output collection contract. Otherwise, they are transferred from the item balance held by the lootbox manager contract. */
	TOptional<TArray<int32>> OutputCollectionItemIds;
	/* An array of amounts for each item id that can be randomly selected from the provided output collection that are given by this lootbox. Item amounts array indices are reflective of the amount required for a given item id at the same index. */
	TOptional<TArray<int32>> OutputCollectionItemAmounts;
	/* An array of weights for each item id that can be randomly selected from the provided output collection that are given by this lootbox. Any positive integer for an item's weight can be provided. The weight for an item relative to the sum of all possible item weights determines the probability that an item will be picked upon a lootbox being opened. Item weights array indices are reflective of the probability weight for a given item id at the same index. */
	TOptional<TArray<int32>> OutputCollectionItemWeights;
	/* The number of items randomly selected from the possible output items when this lootbox is open. If you provide a value greater than 1, it is possible for the same item to be selected more than once, giving the opener more than one of that item's output from the lootbox. */
	TOptional<int32> OutputTotalItems;
};

}
