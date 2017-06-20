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
 * IotHubNameAvailabilityInfo.h
 *
 * The properties indicating whether a given IoT hub name is available.
 */

#ifndef IotHubNameAvailabilityInfo_H_
#define IotHubNameAvailabilityInfo_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties indicating whether a given IoT hub name is available.
/// </summary>
class  IotHubNameAvailabilityInfo
    : public ModelBase
{
public:
    IotHubNameAvailabilityInfo();
    virtual ~IotHubNameAvailabilityInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IotHubNameAvailabilityInfo members

    /// <summary>
    /// The value which indicates whether the provided name is available.
    /// </summary>
    bool getNameAvailable() const;
    bool nameAvailableIsSet() const;
    void unsetNameAvailable();
    void setNameAvailable(bool value);
    /// <summary>
    /// The reason for unavailability.
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();
    void setReason(utility::string_t value);
    /// <summary>
    /// The detailed reason message.
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);

protected:
    bool m_NameAvailable;
    bool m_NameAvailableIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};

}
}
}
}

#endif /* IotHubNameAvailabilityInfo_H_ */
