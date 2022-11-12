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

#include "OpenAPICreateCollectionItemRequest.h"

#include "MetaFabModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MetaFab
{

void OpenAPICreateCollectionItemRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description);
	if (ImageBase64.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("imageBase64")); WriteJsonValue(Writer, ImageBase64.GetValue());
	}
	if (ImageUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("imageUrl")); WriteJsonValue(Writer, ImageUrl.GetValue());
	}
	if (ExternalUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("externalUrl")); WriteJsonValue(Writer, ExternalUrl.GetValue());
	}
	if (Attributes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("attributes")); WriteJsonValue(Writer, Attributes.GetValue());
	}
	if (Data.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreateCollectionItemRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("imageBase64"), ImageBase64);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("imageUrl"), ImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("externalUrl"), ExternalUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("attributes"), Attributes);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);

	return ParseSuccess;
}

}
