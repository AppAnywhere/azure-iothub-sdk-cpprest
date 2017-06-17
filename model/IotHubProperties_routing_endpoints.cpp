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



#include "IotHubProperties_routing_endpoints.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubProperties_routing_endpoints::IotHubProperties_routing_endpoints()
{
    m_ServiceBusQueuesIsSet = false;
    m_ServiceBusTopicsIsSet = false;
    m_EventHubsIsSet = false;
    
}

IotHubProperties_routing_endpoints::~IotHubProperties_routing_endpoints()
{
}

void IotHubProperties_routing_endpoints::validate()
{
    // TODO: implement validation
}

web::json::value IotHubProperties_routing_endpoints::toJson() const
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

void IotHubProperties_routing_endpoints::fromJson(web::json::value& val)
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
                m_ServiceBusQueues.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusQueues>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusQueues> newItem(new IotHubProperties_routing_endpoints_serviceBusQueues());
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
                m_ServiceBusTopics.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusTopics>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusTopics> newItem(new IotHubProperties_routing_endpoints_serviceBusTopics());
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
                m_EventHubs.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_eventHubs>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_eventHubs> newItem(new IotHubProperties_routing_endpoints_eventHubs());
                newItem->fromJson(item);
                m_EventHubs.push_back( newItem );
            }
            
        }
        }
    }
    
}

void IotHubProperties_routing_endpoints::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void IotHubProperties_routing_endpoints::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
                m_ServiceBusQueues.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusQueues>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusQueues> newItem(new IotHubProperties_routing_endpoints_serviceBusQueues());
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
                m_ServiceBusTopics.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusTopics>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusTopics> newItem(new IotHubProperties_routing_endpoints_serviceBusTopics());
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
                m_EventHubs.push_back( std::shared_ptr<IotHubProperties_routing_endpoints_eventHubs>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_endpoints_eventHubs> newItem(new IotHubProperties_routing_endpoints_eventHubs());
                newItem->fromJson(item);
                m_EventHubs.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::vector<std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusQueues>>& IotHubProperties_routing_endpoints::getServiceBusQueues()
{
    return m_ServiceBusQueues;
}
bool IotHubProperties_routing_endpoints::serviceBusQueuesIsSet() const
{
    return m_ServiceBusQueuesIsSet;
}
void IotHubProperties_routing_endpoints::unsetServiceBusQueues()
{
    m_ServiceBusQueuesIsSet = false;
}
std::vector<std::shared_ptr<IotHubProperties_routing_endpoints_serviceBusTopics>>& IotHubProperties_routing_endpoints::getServiceBusTopics()
{
    return m_ServiceBusTopics;
}
bool IotHubProperties_routing_endpoints::serviceBusTopicsIsSet() const
{
    return m_ServiceBusTopicsIsSet;
}
void IotHubProperties_routing_endpoints::unsetServiceBusTopics()
{
    m_ServiceBusTopicsIsSet = false;
}
std::vector<std::shared_ptr<IotHubProperties_routing_endpoints_eventHubs>>& IotHubProperties_routing_endpoints::getEventHubs()
{
    return m_EventHubs;
}
bool IotHubProperties_routing_endpoints::eventHubsIsSet() const
{
    return m_EventHubsIsSet;
}
void IotHubProperties_routing_endpoints::unsetEventHubs()
{
    m_EventHubsIsSet = false;
}

}
}
}
}
