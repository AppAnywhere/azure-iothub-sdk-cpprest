/**
 * iotHubClient
 * Use this API to manage the IoT hubs in your Azure subscription.
 *
 * OpenAPI spec version: 2017-01-19
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * IotHubSkuDescription.h
 *
 * SKU properties.
 */

#ifndef IotHubSkuDescription_H_
#define IotHubSkuDescription_H_


#include "ModelBase.h"

#include "Inline_response_200_3_capacity.h"
#include "Inline_response_200_3_sku.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// SKU properties.
/// </summary>
class  IotHubSkuDescription
    : public ModelBase
{
public:
    IotHubSkuDescription();
    virtual ~IotHubSkuDescription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IotHubSkuDescription members

    /// <summary>
    /// The type of the resource.
    /// </summary>
    utility::string_t getResourceType() const;
    void setResourceType(utility::string_t value);
    bool resourceTypeIsSet() const;
    void unsetResourceType();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Inline_response_200_3_sku> getSku() const;
    void setSku(std::shared_ptr<Inline_response_200_3_sku> value);
    bool skuIsSet() const;
    void unsetSku();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Inline_response_200_3_capacity> getCapacity() const;
    void setCapacity(std::shared_ptr<Inline_response_200_3_capacity> value);
    bool capacityIsSet() const;
    void unsetCapacity();

protected:
    utility::string_t m_ResourceType;
    bool m_ResourceTypeIsSet;
std::shared_ptr<Inline_response_200_3_sku> m_Sku;
    bool m_SkuIsSet;
std::shared_ptr<Inline_response_200_3_capacity> m_Capacity;
    bool m_CapacityIsSet;
};

}
}
}
}

#endif /* IotHubSkuDescription_H_ */
