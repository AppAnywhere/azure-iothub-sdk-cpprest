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
 * Inline_response_200_2.h
 *
 * Identity registry statistics.
 */

#ifndef Inline_response_200_2_H_
#define Inline_response_200_2_H_


#include "ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Identity registry statistics.
/// </summary>
class  Inline_response_200_2
    : public ModelBase
{
public:
    Inline_response_200_2();
    virtual ~Inline_response_200_2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_200_2 members

    /// <summary>
    /// The total count of devices in the identity registry.
    /// </summary>
    int64_t getTotalDeviceCount() const;
    void setTotalDeviceCount(int64_t value);
    bool totalDeviceCountIsSet() const;
    void unsetTotalDeviceCount();
    /// <summary>
    /// The count of enabled devices in the identity registry.
    /// </summary>
    int64_t getEnabledDeviceCount() const;
    void setEnabledDeviceCount(int64_t value);
    bool enabledDeviceCountIsSet() const;
    void unsetEnabledDeviceCount();
    /// <summary>
    /// The count of disabled devices in the identity registry.
    /// </summary>
    int64_t getDisabledDeviceCount() const;
    void setDisabledDeviceCount(int64_t value);
    bool disabledDeviceCountIsSet() const;
    void unsetDisabledDeviceCount();

protected:
    int64_t m_TotalDeviceCount;
    bool m_TotalDeviceCountIsSet;
int64_t m_EnabledDeviceCount;
    bool m_EnabledDeviceCountIsSet;
int64_t m_DisabledDeviceCount;
    bool m_DisabledDeviceCountIsSet;
};

}
}
}
}

#endif /* Inline_response_200_2_H_ */