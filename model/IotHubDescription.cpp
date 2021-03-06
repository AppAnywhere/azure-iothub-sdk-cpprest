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



#include "IotHubDescription.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubDescription::IotHubDescription()
{
    m_Id = U("");
    m_IdIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Location = U("");
    m_TagsIsSet = false;
    
}

IotHubDescription::~IotHubDescription()
{
}

void IotHubDescription::validate()
{
    // TODO: implement validation
}

web::json::value IotHubDescription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    val[U("location")] = ModelBase::toJson(m_Location);
    if(m_TagsIsSet)
    {
        val[U("tags")] = ModelBase::toJson(m_Tags);
    }
    

    return val;
}

void IotHubDescription::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    setLocation(ModelBase::stringFromJson(val[U("location")]));
    if(val.has_field(U("tags")))
    {
        if(!val[U("tags")].is_null())
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromJson(val[U("tags")]);
            setTags( newItem );
        }
        
    }
    
}

void IotHubDescription::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("location"), m_Location));
    if(m_TagsIsSet)
    {
        if (m_Tags.get())
        {
            m_Tags->toMultipart(multipart, U("tags."));
        }
        
    }
    
}

void IotHubDescription::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    setLocation(ModelBase::stringFromHttpContent(multipart->getContent(U("location"))));
    if(multipart->hasContent(U("tags")))
    {
        if(multipart->hasContent(U("tags")))
        {
            std::map<utility::string_t, utility::string_t> newItem(std::map<utility::string_t, utility::string_t>());
            newItem->fromMultiPart(multipart, U("tags."));
            setTags( newItem );
        }
        
    }
    
}


utility::string_t IotHubDescription::getId() const
{
    return m_Id;
}
void IotHubDescription::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool IotHubDescription::idIsSet() const
{
    return m_IdIsSet;
}
void IotHubDescription::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t IotHubDescription::getName() const
{
    return m_Name;
}
void IotHubDescription::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool IotHubDescription::nameIsSet() const
{
    return m_NameIsSet;
}
void IotHubDescription::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t IotHubDescription::getType() const
{
    return m_Type;
}
void IotHubDescription::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool IotHubDescription::typeIsSet() const
{
    return m_TypeIsSet;
}
void IotHubDescription::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t IotHubDescription::getLocation() const
{
    return m_Location;
}
void IotHubDescription::setLocation(utility::string_t value)
{
    m_Location = value;
    
}
std::map<utility::string_t, utility::string_t>& IotHubDescription::getTags()
{
    return m_Tags;
}
bool IotHubDescription::tagsIsSet() const
{
    return m_TagsIsSet;
}
void IotHubDescription::unsetTags()
{
    m_TagsIsSet = false;
}

}
}
}
}

