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
 * IotHubCapacity.h
 *
 * IoT Hub capacity information.
 */

#ifndef IotHubCapacity_H_
#define IotHubCapacity_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// IoT Hub capacity information.
/// </summary>
class  IotHubCapacity
    : public ModelBase
{
public:
    IotHubCapacity();
    virtual ~IotHubCapacity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IotHubCapacity members

    /// <summary>
    /// The minimum number of units.
    /// </summary>
    int64_t getMinimum() const;
    void setMinimum(int64_t value);
    bool minimumIsSet() const;
    void unsetMinimum();
    /// <summary>
    /// The maximum number of units.
    /// </summary>
    int64_t getMaximum() const;
    void setMaximum(int64_t value);
    bool maximumIsSet() const;
    void unsetMaximum();
    /// <summary>
    /// The default number of units.
    /// </summary>
    int64_t getDefault() const;
    void setDefault(int64_t value);
    bool defaultIsSet() const;
    void unsetDefault();
    /// <summary>
    /// The type of the scaling enabled.
    /// </summary>
    utility::string_t getScaleType() const;
    void setScaleType(utility::string_t value);
    bool scaleTypeIsSet() const;
    void unsetScaleType();

protected:
    int64_t m_Minimum;
    bool m_MinimumIsSet;
int64_t m_Maximum;
    bool m_MaximumIsSet;
int64_t m_Default;
    bool m_DefaultIsSet;
utility::string_t m_ScaleType;
    bool m_ScaleTypeIsSet;
};

}
}
}
}

#endif /* IotHubCapacity_H_ */
