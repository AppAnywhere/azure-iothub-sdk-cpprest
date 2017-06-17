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
 * IotHubProperties.h
 *
 * The properties of an IoT hub.
 */

#ifndef IotHubProperties_H_
#define IotHubProperties_H_


#include "ModelBase.h"

#include "EventHubProperties.h"
#include "IpFilterRule.h"
#include "StorageEndpointProperties.h"
#include <cpprest/details/basic_types.h>
#include "OperationsMonitoringProperties.h"
#include "SharedAccessSignatureAuthorizationRule.h"
#include "MessagingEndpointProperties.h"
#include <map>
#include "CloudToDeviceProperties.h"
#include <vector>
#include "RoutingProperties.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of an IoT hub.
/// </summary>
class  IotHubProperties
    : public ModelBase
{
public:
    IotHubProperties();
    virtual ~IotHubProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IotHubProperties members

    /// <summary>
    /// The shared access policies you can use to secure a connection to the IoT hub.
    /// </summary>
    std::vector<std::shared_ptr<SharedAccessSignatureAuthorizationRule>>& getAuthorizationPolicies();
    bool authorizationPoliciesIsSet() const;
    void unsetAuthorizationPolicies();
    /// <summary>
    /// The IP filter rules.
    /// </summary>
    std::vector<std::shared_ptr<IpFilterRule>>& getIpFilterRules();
    bool ipFilterRulesIsSet() const;
    void unsetIpFilterRules();
    /// <summary>
    /// The provisioning state.
    /// </summary>
    utility::string_t getProvisioningState() const;
    void setProvisioningState(utility::string_t value);
    bool provisioningStateIsSet() const;
    void unsetProvisioningState();
    /// <summary>
    /// The name of the host.
    /// </summary>
    utility::string_t getHostName() const;
    void setHostName(utility::string_t value);
    bool hostNameIsSet() const;
    void unsetHostName();
    /// <summary>
    /// The Event Hub-compatible endpoint properties. The possible keys to this dictionary are events and operationsMonitoringEvents. Both of these keys have to be present in the dictionary while making create or update calls for the IoT hub.
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<EventHubProperties>>& getEventHubEndpoints();
    bool eventHubEndpointsIsSet() const;
    void unsetEventHubEndpoints();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RoutingProperties> getRouting() const;
    void setRouting(std::shared_ptr<RoutingProperties> value);
    bool routingIsSet() const;
    void unsetRouting();
    /// <summary>
    /// The list of Azure Storage endpoints where you can upload files. Currently you can configure only one Azure Storage account and that MUST have its key as $default. Specifying more than one storage account causes an error to be thrown. Not specifying a value for this property when the enableFileUploadNotifications property is set to True, causes an error to be thrown.
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<StorageEndpointProperties>>& getStorageEndpoints();
    bool storageEndpointsIsSet() const;
    void unsetStorageEndpoints();
    /// <summary>
    /// The messaging endpoint properties for the file upload notification queue.
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<MessagingEndpointProperties>>& getMessagingEndpoints();
    bool messagingEndpointsIsSet() const;
    void unsetMessagingEndpoints();
    /// <summary>
    /// If True, file upload notifications are enabled.
    /// </summary>
    bool getEnableFileUploadNotifications() const;
    void setEnableFileUploadNotifications(bool value);
    bool enableFileUploadNotificationsIsSet() const;
    void unsetEnableFileUploadNotifications();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CloudToDeviceProperties> getCloudToDevice() const;
    void setCloudToDevice(std::shared_ptr<CloudToDeviceProperties> value);
    bool cloudToDeviceIsSet() const;
    void unsetCloudToDevice();
    /// <summary>
    /// Comments.
    /// </summary>
    utility::string_t getComments() const;
    void setComments(utility::string_t value);
    bool commentsIsSet() const;
    void unsetComments();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OperationsMonitoringProperties> getOperationsMonitoringProperties() const;
    void setOperationsMonitoringProperties(std::shared_ptr<OperationsMonitoringProperties> value);
    bool operationsMonitoringPropertiesIsSet() const;
    void unsetOperationsMonitoringProperties();
    /// <summary>
    /// The capabilities and features enabled for the IoT hub.
    /// </summary>
    utility::string_t getFeatures() const;
    void setFeatures(utility::string_t value);
    bool featuresIsSet() const;
    void unsetFeatures();

protected:
    std::vector<std::shared_ptr<SharedAccessSignatureAuthorizationRule>> m_AuthorizationPolicies;
    bool m_AuthorizationPoliciesIsSet;
    std::vector<std::shared_ptr<IpFilterRule>> m_IpFilterRules;
    bool m_IpFilterRulesIsSet;
    utility::string_t m_ProvisioningState;
    bool m_ProvisioningStateIsSet;
    utility::string_t m_HostName;
    bool m_HostNameIsSet;
    std::map<utility::string_t, std::shared_ptr<EventHubProperties>> m_EventHubEndpoints;
    bool m_EventHubEndpointsIsSet;
    std::shared_ptr<RoutingProperties> m_Routing;
    bool m_RoutingIsSet;
    std::map<utility::string_t, std::shared_ptr<StorageEndpointProperties>> m_StorageEndpoints;
    bool m_StorageEndpointsIsSet;
    std::map<utility::string_t, std::shared_ptr<MessagingEndpointProperties>> m_MessagingEndpoints;
    bool m_MessagingEndpointsIsSet;
    bool m_EnableFileUploadNotifications;
    bool m_EnableFileUploadNotificationsIsSet;
    std::shared_ptr<CloudToDeviceProperties> m_CloudToDevice;
    bool m_CloudToDeviceIsSet;
    utility::string_t m_Comments;
    bool m_CommentsIsSet;
    std::shared_ptr<OperationsMonitoringProperties> m_OperationsMonitoringProperties;
    bool m_OperationsMonitoringPropertiesIsSet;
    utility::string_t m_Features;
    bool m_FeaturesIsSet;
};

}
}
}
}

#endif /* IotHubProperties_H_ */
