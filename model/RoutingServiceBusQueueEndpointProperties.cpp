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



#include "RoutingServiceBusQueueEndpointProperties.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RoutingServiceBusQueueEndpointProperties::RoutingServiceBusQueueEndpointProperties()
{
    m_ConnectionString = U("");
    m_Name = U("");
    m_SubscriptionId = U("");
    m_SubscriptionIdIsSet = false;
    m_ResourceGroup = U("");
    m_ResourceGroupIsSet = false;
    
}

RoutingServiceBusQueueEndpointProperties::~RoutingServiceBusQueueEndpointProperties()
{
}

void RoutingServiceBusQueueEndpointProperties::validate()
{
    // TODO: implement validation
}

web::json::value RoutingServiceBusQueueEndpointProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("connectionString")] = ModelBase::toJson(m_ConnectionString);
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_SubscriptionIdIsSet)
    {
        val[U("subscriptionId")] = ModelBase::toJson(m_SubscriptionId);
    }
    if(m_ResourceGroupIsSet)
    {
        val[U("resourceGroup")] = ModelBase::toJson(m_ResourceGroup);
    }
    

    return val;
}

void RoutingServiceBusQueueEndpointProperties::fromJson(web::json::value& val)
{
    setConnectionString(ModelBase::stringFromJson(val[U("connectionString")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("subscriptionId")))
    {
        setSubscriptionId(ModelBase::stringFromJson(val[U("subscriptionId")]));
        
    }
    if(val.has_field(U("resourceGroup")))
    {
        setResourceGroup(ModelBase::stringFromJson(val[U("resourceGroup")]));
        
    }
    
}

void RoutingServiceBusQueueEndpointProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("connectionString"), m_ConnectionString));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_SubscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("subscriptionId"), m_SubscriptionId));
        
    }
    if(m_ResourceGroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("resourceGroup"), m_ResourceGroup));
        
    }
    
}

void RoutingServiceBusQueueEndpointProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setConnectionString(ModelBase::stringFromHttpContent(multipart->getContent(U("connectionString"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("subscriptionId")))
    {
        setSubscriptionId(ModelBase::stringFromHttpContent(multipart->getContent(U("subscriptionId"))));
        
    }
    if(multipart->hasContent(U("resourceGroup")))
    {
        setResourceGroup(ModelBase::stringFromHttpContent(multipart->getContent(U("resourceGroup"))));
        
    }
    
}


utility::string_t RoutingServiceBusQueueEndpointProperties::getConnectionString() const
{
    return m_ConnectionString;
}
void RoutingServiceBusQueueEndpointProperties::setConnectionString(utility::string_t value)
{
    m_ConnectionString = value;
    
}
utility::string_t RoutingServiceBusQueueEndpointProperties::getName() const
{
    return m_Name;
}
void RoutingServiceBusQueueEndpointProperties::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t RoutingServiceBusQueueEndpointProperties::getSubscriptionId() const
{
    return m_SubscriptionId;
}
void RoutingServiceBusQueueEndpointProperties::setSubscriptionId(utility::string_t value)
{
    m_SubscriptionId = value;
    m_SubscriptionIdIsSet = true;
}
bool RoutingServiceBusQueueEndpointProperties::subscriptionIdIsSet() const
{
    return m_SubscriptionIdIsSet;
}
void RoutingServiceBusQueueEndpointProperties::unsetSubscriptionId()
{
    m_SubscriptionIdIsSet = false;
}
utility::string_t RoutingServiceBusQueueEndpointProperties::getResourceGroup() const
{
    return m_ResourceGroup;
}
void RoutingServiceBusQueueEndpointProperties::setResourceGroup(utility::string_t value)
{
    m_ResourceGroup = value;
    m_ResourceGroupIsSet = true;
}
bool RoutingServiceBusQueueEndpointProperties::resourceGroupIsSet() const
{
    return m_ResourceGroupIsSet;
}
void RoutingServiceBusQueueEndpointProperties::unsetResourceGroup()
{
    m_ResourceGroupIsSet = false;
}

}
}
}
}
