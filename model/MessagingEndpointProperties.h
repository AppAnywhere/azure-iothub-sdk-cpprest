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
 * MessagingEndpointProperties.h
 *
 * The properties of the messaging endpoints used by this IoT hub.
 */

#ifndef MessagingEndpointProperties_H_
#define MessagingEndpointProperties_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of the messaging endpoints used by this IoT hub.
/// </summary>
class  MessagingEndpointProperties
    : public ModelBase
{
public:
    MessagingEndpointProperties();
    virtual ~MessagingEndpointProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessagingEndpointProperties members

    /// <summary>
    /// The lock duration. See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-file-upload.
    /// </summary>
    utility::string_t getLockDurationAsIso8601() const;
    void setLockDurationAsIso8601(utility::string_t value);
    bool lockDurationAsIso8601IsSet() const;
    void unsetLockDurationAsIso8601();
    /// <summary>
    /// The period of time for which a message is available to consume before it is expired by the IoT hub. See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-file-upload.
    /// </summary>
    utility::string_t getTtlAsIso8601() const;
    void setTtlAsIso8601(utility::string_t value);
    bool ttlAsIso8601IsSet() const;
    void unsetTtlAsIso8601();
    /// <summary>
    /// The number of times the IoT hub attempts to deliver a message. See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-file-upload.
    /// </summary>
    int32_t getMaxDeliveryCount() const;
    void setMaxDeliveryCount(int32_t value);
    bool maxDeliveryCountIsSet() const;
    void unsetMaxDeliveryCount();

protected:
    utility::string_t m_LockDurationAsIso8601;
    bool m_LockDurationAsIso8601IsSet;
utility::string_t m_TtlAsIso8601;
    bool m_TtlAsIso8601IsSet;
int32_t m_MaxDeliveryCount;
    bool m_MaxDeliveryCountIsSet;
};

}
}
}
}

#endif /* MessagingEndpointProperties_H_ */
