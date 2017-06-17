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



#include "IotHubDescriptionListResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubDescriptionListResult::IotHubDescriptionListResult()
{
    m_ValueIsSet = false;
    m_NextLink = U("");
    m_NextLinkIsSet = false;
    
}

IotHubDescriptionListResult::~IotHubDescriptionListResult()
{
}

void IotHubDescriptionListResult::validate()
{
    // TODO: implement validation
}

web::json::value IotHubDescriptionListResult::toJson() const
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

void IotHubDescriptionListResult::fromJson(web::json::value& val)
{
    {
        m_Value.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("value")))
        {
        for( auto& item : val[U("value")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Value.push_back( std::shared_ptr<Inline_response_200>(nullptr) );
            }
            else
            {
                std::shared_ptr<Inline_response_200> newItem(new Inline_response_200());
                newItem->fromJson(item);
                m_Value.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("nextLink")))
    {
        setNextLink(ModelBase::stringFromJson(val[U("nextLink")]));
        
    }
    
}

void IotHubDescriptionListResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void IotHubDescriptionListResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            
            if(item.is_null())
            {
                m_Value.push_back( std::shared_ptr<Inline_response_200>(nullptr) );
            }
            else
            {
                std::shared_ptr<Inline_response_200> newItem(new Inline_response_200());
                newItem->fromJson(item);
                m_Value.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("nextLink")))
    {
        setNextLink(ModelBase::stringFromHttpContent(multipart->getContent(U("nextLink"))));
        
    }
    
}


std::vector<std::shared_ptr<Inline_response_200>>& IotHubDescriptionListResult::getValue()
{
    return m_Value;
}
bool IotHubDescriptionListResult::valueIsSet() const
{
    return m_ValueIsSet;
}
void IotHubDescriptionListResult::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t IotHubDescriptionListResult::getNextLink() const
{
    return m_NextLink;
}
void IotHubDescriptionListResult::setNextLink(utility::string_t value)
{
    m_NextLink = value;
    m_NextLinkIsSet = true;
}
bool IotHubDescriptionListResult::nextLinkIsSet() const
{
    return m_NextLinkIsSet;
}
void IotHubDescriptionListResult::unsetNextLink()
{
    m_NextLinkIsSet = false;
}

}
}
}
}

