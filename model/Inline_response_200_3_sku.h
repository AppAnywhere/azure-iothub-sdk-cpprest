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
 * Inline_response_200_3_sku.h
 *
 * Information about the SKU of the IoT hub.
 */

#ifndef Inline_response_200_3_sku_H_
#define Inline_response_200_3_sku_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Information about the SKU of the IoT hub.
/// </summary>
class  Inline_response_200_3_sku
    : public ModelBase
{
public:
    Inline_response_200_3_sku();
    virtual ~Inline_response_200_3_sku();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_200_3_sku members

    /// <summary>
    /// The name of the SKU.
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The billing tier for the IoT hub.
    /// </summary>
    utility::string_t getTier() const;
    void setTier(utility::string_t value);
    bool tierIsSet() const;
    void unsetTier();
    /// <summary>
    /// The number of provisioned IoT Hub units. See: https://docs.microsoft.com/azure/azure-subscription-service-limits#iot-hub-limits.
    /// </summary>
    int64_t getCapacity() const;
    void setCapacity(int64_t value);
    
protected:
    utility::string_t m_Name;
    utility::string_t m_Tier;
    bool m_TierIsSet;
int64_t m_Capacity;
    };

}
}
}
}

#endif /* Inline_response_200_3_sku_H_ */