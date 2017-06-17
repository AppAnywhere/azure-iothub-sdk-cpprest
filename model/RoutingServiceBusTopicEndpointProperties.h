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
 * RoutingServiceBusTopicEndpointProperties.h
 *
 * The properties related to service bus topic endpoint types.
 */

#ifndef RoutingServiceBusTopicEndpointProperties_H_
#define RoutingServiceBusTopicEndpointProperties_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties related to service bus topic endpoint types.
/// </summary>
class  RoutingServiceBusTopicEndpointProperties
    : public ModelBase
{
public:
    RoutingServiceBusTopicEndpointProperties();
    virtual ~RoutingServiceBusTopicEndpointProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RoutingServiceBusTopicEndpointProperties members

    /// <summary>
    /// The connection string of the service bus topic endpoint.
    /// </summary>
    utility::string_t getConnectionString() const;
    void setConnectionString(utility::string_t value);
        /// <summary>
    /// The name of the service bus topic endpoint. The name can only include alphanumeric characters, periods, underscores, hyphens and has a maximum length of 64 characters. The following names are reserved;  events, operationsMonitoringEvents, fileNotifications, $default. Endpoint names must be unique across endpoint types.  The name need not be the same as the actual topic name.
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The subscription identifier of the service bus topic endpoint.
    /// </summary>
    utility::string_t getSubscriptionId() const;
    void setSubscriptionId(utility::string_t value);
    bool subscriptionIdIsSet() const;
    void unsetSubscriptionId();
    /// <summary>
    /// The name of the resource group of the service bus topic endpoint.
    /// </summary>
    utility::string_t getResourceGroup() const;
    void setResourceGroup(utility::string_t value);
    bool resourceGroupIsSet() const;
    void unsetResourceGroup();

protected:
    utility::string_t m_ConnectionString;
        utility::string_t m_Name;
        utility::string_t m_SubscriptionId;
    bool m_SubscriptionIdIsSet;
    utility::string_t m_ResourceGroup;
    bool m_ResourceGroupIsSet;
};

}
}
}
}

#endif /* RoutingServiceBusTopicEndpointProperties_H_ */
