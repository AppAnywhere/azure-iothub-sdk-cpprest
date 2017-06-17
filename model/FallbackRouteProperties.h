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
 * FallbackRouteProperties.h
 *
 * The properties related to the fallback route based on which the IoT hub routes messages to the fallback endpoint.
 */

#ifndef FallbackRouteProperties_H_
#define FallbackRouteProperties_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties related to the fallback route based on which the IoT hub routes messages to the fallback endpoint.
/// </summary>
class  FallbackRouteProperties
    : public ModelBase
{
public:
    FallbackRouteProperties();
    virtual ~FallbackRouteProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FallbackRouteProperties members

    /// <summary>
    /// The source to which the routing rule is to be applied to. e.g. DeviceMessages
    /// </summary>
    utility::string_t getSource() const;
    void setSource(utility::string_t value);
        /// <summary>
    /// The condition which is evaluated in order to apply the fallback route. If the condition is not provided it will evaluate to true by default. For grammar, See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-query-language
    /// </summary>
    utility::string_t getCondition() const;
    void setCondition(utility::string_t value);
    bool conditionIsSet() const;
    void unsetCondition();
    /// <summary>
    /// The list of endpoints to which the messages that satisfy the condition are routed to. Currently only 1 endpoint is allowed.
    /// </summary>
    std::vector<utility::string_t>& getEndpointNames();
        /// <summary>
    /// Used to specify whether the fallback route is enabled or not.
    /// </summary>
    bool getIsEnabled() const;
    void setIsEnabled(bool value);
    
protected:
    utility::string_t m_Source;
    utility::string_t m_Condition;
    bool m_ConditionIsSet;
std::vector<utility::string_t> m_EndpointNames;
    bool m_IsEnabled;
    };

}
}
}
}

#endif /* FallbackRouteProperties_H_ */
