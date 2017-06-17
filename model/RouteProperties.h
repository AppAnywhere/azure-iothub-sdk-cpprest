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
 * RouteProperties.h
 *
 * The properties of a routing rule that your IoT hub uses to route messages to endpoints.
 */

#ifndef RouteProperties_H_
#define RouteProperties_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of a routing rule that your IoT hub uses to route messages to endpoints.
/// </summary>
class  RouteProperties
    : public ModelBase
{
public:
    RouteProperties();
    virtual ~RouteProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RouteProperties members

    /// <summary>
    /// The name of the route. The name can only include alphanumeric characters, periods, underscores, hyphens, has a maximum length of 64 characters,  and must be unique.
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The source that the routing rule is to be applied to, such as DeviceMessages.
    /// </summary>
    utility::string_t getSource() const;
    void setSource(utility::string_t value);
        /// <summary>
    /// The condition that is evaluated to apply the routing rule. If no condition is provided, it evaluates to true by default. For grammar, See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-query-language
    /// </summary>
    utility::string_t getCondition() const;
    void setCondition(utility::string_t value);
    bool conditionIsSet() const;
    void unsetCondition();
    /// <summary>
    /// The list of endpoints to which messages that satisfy the condition are routed. Currently only one endpoint is allowed.
    /// </summary>
    std::vector<utility::string_t>& getEndpointNames();
        /// <summary>
    /// Used to specify whether a route is enabled.
    /// </summary>
    bool getIsEnabled() const;
    void setIsEnabled(bool value);
    
protected:
    utility::string_t m_Name;
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

#endif /* RouteProperties_H_ */
