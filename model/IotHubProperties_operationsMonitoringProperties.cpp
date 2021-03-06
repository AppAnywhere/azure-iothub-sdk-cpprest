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



#include "IotHubProperties_operationsMonitoringProperties.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubProperties_operationsMonitoringProperties::IotHubProperties_operationsMonitoringProperties()
{
    m_EventsIsSet = false;
    
}

IotHubProperties_operationsMonitoringProperties::~IotHubProperties_operationsMonitoringProperties()
{
}

void IotHubProperties_operationsMonitoringProperties::validate()
{
    // TODO: implement validation
}

web::json::value IotHubProperties_operationsMonitoringProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EventsIsSet)
    {
        val[U("events")] = ModelBase::toJson(m_Events);
    }
    

    return val;
}

void IotHubProperties_operationsMonitoringProperties::fromJson(web::json::value& val)
{
    if(val.has_field(U("events")))
    {
        if(!val[U("events")].is_null())
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, InnerEnum>());
            newItem->fromJson(val[U("events")]);
            setEvents( newItem );
        }
        
    }
    
}

void IotHubProperties_operationsMonitoringProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_EventsIsSet)
    {
        if (m_Events.get())
        {
            m_Events->toMultipart(multipart, U("events."));
        }
        
    }
    
}

void IotHubProperties_operationsMonitoringProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("events")))
    {
        if(multipart->hasContent(U("events")))
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, InnerEnum>());
            newItem->fromMultiPart(multipart, U("events."));
            setEvents( newItem );
        }
        
    }
    
}


std::map<utility::string_t, utility::string_t>& IotHubProperties_operationsMonitoringProperties::getEvents()
{
    return m_Events;
}
bool IotHubProperties_operationsMonitoringProperties::eventsIsSet() const
{
    return m_EventsIsSet;
}
void IotHubProperties_operationsMonitoringProperties::unsetEvents()
{
    m_EventsIsSet = false;
}

}
}
}
}

