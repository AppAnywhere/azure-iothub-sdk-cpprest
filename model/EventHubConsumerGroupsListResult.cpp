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



#include "EventHubConsumerGroupsListResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

EventHubConsumerGroupsListResult::EventHubConsumerGroupsListResult()
{
    m_ValueIsSet = false;
    m_NextLink = U("");
    m_NextLinkIsSet = false;
    
}

EventHubConsumerGroupsListResult::~EventHubConsumerGroupsListResult()
{
}

void EventHubConsumerGroupsListResult::validate()
{
    // TODO: implement validation
}

web::json::value EventHubConsumerGroupsListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Value )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("value")] = web::json::value::array(jsonArray);
        }
    }
    if(m_NextLinkIsSet)
    {
        val[U("nextLink")] = ModelBase::toJson(m_NextLink);
    }
    

    return val;
}

void EventHubConsumerGroupsListResult::fromJson(web::json::value& val)
{
    {
        m_Value.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("value")))
        {
        for( auto& item : val[U("value")].as_array() )
        {
            m_Value.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("nextLink")))
    {
        setNextLink(ModelBase::stringFromJson(val[U("nextLink")]));
        
    }
    
}

void EventHubConsumerGroupsListResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Value )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_NextLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nextLink"), m_NextLink));
        
    }
    
}

void EventHubConsumerGroupsListResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Value.clear();
        if(multipart->hasContent(U("value")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("value"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Value.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("nextLink")))
    {
        setNextLink(ModelBase::stringFromHttpContent(multipart->getContent(U("nextLink"))));
        
    }
    
}


std::vector<utility::string_t>& EventHubConsumerGroupsListResult::getValue()
{
    return m_Value;
}
bool EventHubConsumerGroupsListResult::valueIsSet() const
{
    return m_ValueIsSet;
}
void EventHubConsumerGroupsListResult::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t EventHubConsumerGroupsListResult::getNextLink() const
{
    return m_NextLink;
}
void EventHubConsumerGroupsListResult::setNextLink(utility::string_t value)
{
    m_NextLink = value;
    m_NextLinkIsSet = true;
}
bool EventHubConsumerGroupsListResult::nextLinkIsSet() const
{
    return m_NextLinkIsSet;
}
void EventHubConsumerGroupsListResult::unsetNextLink()
{
    m_NextLinkIsSet = false;
}

}
}
}
}

