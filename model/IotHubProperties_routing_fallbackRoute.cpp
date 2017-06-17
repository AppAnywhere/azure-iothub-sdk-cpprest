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



#include "IotHubProperties_routing_fallbackRoute.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubProperties_routing_fallbackRoute::IotHubProperties_routing_fallbackRoute()
{
    m_Source = U("");
    m_Condition = U("");
    m_ConditionIsSet = false;
    m_IsEnabled = false;
    
}

IotHubProperties_routing_fallbackRoute::~IotHubProperties_routing_fallbackRoute()
{
}

void IotHubProperties_routing_fallbackRoute::validate()
{
    // TODO: implement validation
}

web::json::value IotHubProperties_routing_fallbackRoute::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("source")] = ModelBase::toJson(m_Source);
    if(m_ConditionIsSet)
    {
        val[U("condition")] = ModelBase::toJson(m_Condition);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EndpointNames )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("endpointNames")] = web::json::value::array(jsonArray);
            }
    val[U("isEnabled")] = ModelBase::toJson(m_IsEnabled);
    

    return val;
}

void IotHubProperties_routing_fallbackRoute::fromJson(web::json::value& val)
{
    setSource(ModelBase::stringFromJson(val[U("source")]));
    if(val.has_field(U("condition")))
    {
        setCondition(ModelBase::stringFromJson(val[U("condition")]));
        
    }
    {
        m_EndpointNames.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("endpointNames")].as_array() )
        {
            m_EndpointNames.push_back(ModelBase::stringFromJson(item));
            
        }
    }
    setIsEnabled(ModelBase::boolFromJson(val[U("isEnabled")]));
    
}

void IotHubProperties_routing_fallbackRoute::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("source"), m_Source));
    if(m_ConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("condition"), m_Condition));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_EndpointNames )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("endpointNames"), web::json::value::array(jsonArray), U("application/json")));
            }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("isEnabled"), m_IsEnabled));
    
}

void IotHubProperties_routing_fallbackRoute::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setSource(ModelBase::stringFromHttpContent(multipart->getContent(U("source"))));
    if(multipart->hasContent(U("condition")))
    {
        setCondition(ModelBase::stringFromHttpContent(multipart->getContent(U("condition"))));
        
    }
    {
        m_EndpointNames.clear();
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("endpointNames"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_EndpointNames.push_back(ModelBase::stringFromJson(item));
            
        }
    }
    setIsEnabled(ModelBase::boolFromHttpContent(multipart->getContent(U("isEnabled"))));
    
}


utility::string_t IotHubProperties_routing_fallbackRoute::getSource() const
{
    return m_Source;
}
void IotHubProperties_routing_fallbackRoute::setSource(utility::string_t value)
{
    m_Source = value;
    
}
utility::string_t IotHubProperties_routing_fallbackRoute::getCondition() const
{
    return m_Condition;
}
void IotHubProperties_routing_fallbackRoute::setCondition(utility::string_t value)
{
    m_Condition = value;
    m_ConditionIsSet = true;
}
bool IotHubProperties_routing_fallbackRoute::conditionIsSet() const
{
    return m_ConditionIsSet;
}
void IotHubProperties_routing_fallbackRoute::unsetCondition()
{
    m_ConditionIsSet = false;
}
std::vector<utility::string_t>& IotHubProperties_routing_fallbackRoute::getEndpointNames()
{
    return m_EndpointNames;
}
bool IotHubProperties_routing_fallbackRoute::getIsEnabled() const
{
    return m_IsEnabled;
}
void IotHubProperties_routing_fallbackRoute::setIsEnabled(bool value)
{
    m_IsEnabled = value;
    
}

}
}
}
}

