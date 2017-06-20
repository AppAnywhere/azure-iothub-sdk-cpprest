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



#include "RoutingEndpoints.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RoutingEndpoints::RoutingEndpoints()
{
    m_ServiceBusQueuesIsSet = false;
    m_ServiceBusTopicsIsSet = false;
    m_EventHubsIsSet = false;
}

RoutingEndpoints::~RoutingEndpoints()
{
}

void RoutingEndpoints::validate()
{
    // TODO: implement validation
}

web::json::value RoutingEndpoints::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ServiceBusQueues )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("serviceBusQueues")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ServiceBusTopics )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("serviceBusTopics")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EventHubs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("eventHubs")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void RoutingEndpoints::fromJson(web::json::value& val)
{
    {
        m_ServiceBusQueues.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("serviceBusQueues")))
        {
        for( auto& item : val[U("serviceBusQueues")].as_array() )
        {
            if(item.is_null())
            {
                m_ServiceBusQueues.push_back( std::shared_ptr<RoutingServiceBusQueueEndpointProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingServiceBusQueueEndpointProperties> newItem(new RoutingServiceBusQueueEndpointProperties());
                newItem->fromJson(item);
                m_ServiceBusQueues.push_back( newItem );
            }
        }
        }
    }
    {
        m_ServiceBusTopics.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("serviceBusTopics")))
        {
        for( auto& item : val[U("serviceBusTopics")].as_array() )
        {
            if(item.is_null())
            {
                m_ServiceBusTopics.push_back( std::shared_ptr<RoutingServiceBusTopicEndpointProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingServiceBusTopicEndpointProperties> newItem(new RoutingServiceBusTopicEndpointProperties());
                newItem->fromJson(item);
                m_ServiceBusTopics.push_back( newItem );
            }
        }
        }
    }
    {
        m_EventHubs.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("eventHubs")))
        {
        for( auto& item : val[U("eventHubs")].as_array() )
        {
            if(item.is_null())
            {
                m_EventHubs.push_back( std::shared_ptr<RoutingEventHubProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingEventHubProperties> newItem(new RoutingEventHubProperties());
                newItem->fromJson(item);
                m_EventHubs.push_back( newItem );
            }
        }
        }
    }
}

void RoutingEndpoints::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ServiceBusQueues )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("serviceBusQueues"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ServiceBusTopics )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("serviceBusTopics"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EventHubs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("eventHubs"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void RoutingEndpoints::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_ServiceBusQueues.clear();
        if(multipart->hasContent(U("serviceBusQueues")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("serviceBusQueues"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_ServiceBusQueues.push_back( std::shared_ptr<RoutingServiceBusQueueEndpointProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingServiceBusQueueEndpointProperties> newItem(new RoutingServiceBusQueueEndpointProperties());
                newItem->fromJson(item);
                m_ServiceBusQueues.push_back( newItem );
            }
        }
        }
    }
    {
        m_ServiceBusTopics.clear();
        if(multipart->hasContent(U("serviceBusTopics")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("serviceBusTopics"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_ServiceBusTopics.push_back( std::shared_ptr<RoutingServiceBusTopicEndpointProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingServiceBusTopicEndpointProperties> newItem(new RoutingServiceBusTopicEndpointProperties());
                newItem->fromJson(item);
                m_ServiceBusTopics.push_back( newItem );
            }
        }
        }
    }
    {
        m_EventHubs.clear();
        if(multipart->hasContent(U("eventHubs")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("eventHubs"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_EventHubs.push_back( std::shared_ptr<RoutingEventHubProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<RoutingEventHubProperties> newItem(new RoutingEventHubProperties());
                newItem->fromJson(item);
                m_EventHubs.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<RoutingServiceBusQueueEndpointProperties>>& RoutingEndpoints::getServiceBusQueues()
{
    return m_ServiceBusQueues;
}

void RoutingEndpoints::setServiceBusQueues(std::vector<std::shared_ptr<RoutingServiceBusQueueEndpointProperties>> value)
{
    m_ServiceBusQueues = value;
    m_ServiceBusQueuesIsSet = true;
}
bool RoutingEndpoints::serviceBusQueuesIsSet() const
{
    return m_ServiceBusQueuesIsSet;
}

void RoutingEndpoints::unsetServiceBusQueues()
{
    m_ServiceBusQueuesIsSet = false;
}

std::vector<std::shared_ptr<RoutingServiceBusTopicEndpointProperties>>& RoutingEndpoints::getServiceBusTopics()
{
    return m_ServiceBusTopics;
}

void RoutingEndpoints::setServiceBusTopics(std::vector<std::shared_ptr<RoutingServiceBusTopicEndpointProperties>> value)
{
    m_ServiceBusTopics = value;
    m_ServiceBusTopicsIsSet = true;
}
bool RoutingEndpoints::serviceBusTopicsIsSet() const
{
    return m_ServiceBusTopicsIsSet;
}

void RoutingEndpoints::unsetServiceBusTopics()
{
    m_ServiceBusTopicsIsSet = false;
}

std::vector<std::shared_ptr<RoutingEventHubProperties>>& RoutingEndpoints::getEventHubs()
{
    return m_EventHubs;
}

void RoutingEndpoints::setEventHubs(std::vector<std::shared_ptr<RoutingEventHubProperties>> value)
{
    m_EventHubs = value;
    m_EventHubsIsSet = true;
}
bool RoutingEndpoints::eventHubsIsSet() const
{
    return m_EventHubsIsSet;
}

void RoutingEndpoints::unsetEventHubs()
{
    m_EventHubsIsSet = false;
}

}
}
}
}

