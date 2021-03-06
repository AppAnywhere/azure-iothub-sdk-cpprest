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



#include "EventHubConsumerGroupInfo.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

EventHubConsumerGroupInfo::EventHubConsumerGroupInfo()
{
    m_TagsIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    
}

EventHubConsumerGroupInfo::~EventHubConsumerGroupInfo()
{
}

void EventHubConsumerGroupInfo::validate()
{
    // TODO: implement validation
}

web::json::value EventHubConsumerGroupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TagsIsSet)
    {
        val[U("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    

    return val;
}

void EventHubConsumerGroupInfo::fromJson(web::json::value& val)
{
    if(val.has_field(U("tags")))
    {
        if(!val[U("tags")].is_null())
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromJson(val[U("tags")]);
            setTags( newItem );
        }
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    
}

void EventHubConsumerGroupInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_TagsIsSet)
    {
        if (m_Tags.get())
        {
            m_Tags->toMultipart(multipart, U("tags."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    
}

void EventHubConsumerGroupInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("tags")))
    {
        if(multipart->hasContent(U("tags")))
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromMultiPart(multipart, U("tags."));
            setTags( newItem );
        }
        
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    
}


std::map<utility::string_t, utility::string_t>& EventHubConsumerGroupInfo::getTags()
{
    return m_Tags;
}
bool EventHubConsumerGroupInfo::tagsIsSet() const
{
    return m_TagsIsSet;
}
void EventHubConsumerGroupInfo::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t EventHubConsumerGroupInfo::getId() const
{
    return m_Id;
}
void EventHubConsumerGroupInfo::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool EventHubConsumerGroupInfo::idIsSet() const
{
    return m_IdIsSet;
}
void EventHubConsumerGroupInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t EventHubConsumerGroupInfo::getName() const
{
    return m_Name;
}
void EventHubConsumerGroupInfo::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool EventHubConsumerGroupInfo::nameIsSet() const
{
    return m_NameIsSet;
}
void EventHubConsumerGroupInfo::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

