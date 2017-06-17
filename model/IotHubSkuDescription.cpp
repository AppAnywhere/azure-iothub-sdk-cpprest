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



#include "IotHubSkuDescription.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubSkuDescription::IotHubSkuDescription()
{
    m_ResourceType = U("");
    m_ResourceTypeIsSet = false;
    m_SkuIsSet = false;
    m_CapacityIsSet = false;
    
}

IotHubSkuDescription::~IotHubSkuDescription()
{
}

void IotHubSkuDescription::validate()
{
    // TODO: implement validation
}

web::json::value IotHubSkuDescription::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ResourceTypeIsSet)
    {
        val[U("resourceType")] = ModelBase::toJson(m_ResourceType);
    }
    if(m_SkuIsSet)
    {
        val[U("sku")] = ModelBase::toJson(m_Sku);
    }
    if(m_CapacityIsSet)
    {
        val[U("capacity")] = ModelBase::toJson(m_Capacity);
    }
    

    return val;
}

void IotHubSkuDescription::fromJson(web::json::value& val)
{
    if(val.has_field(U("resourceType")))
    {
        setResourceType(ModelBase::stringFromJson(val[U("resourceType")]));
        
    }
    if(val.has_field(U("sku")))
    {
        if(!val[U("sku")].is_null())
        {
            std::shared_ptr<Inline_response_200_3_sku> newItem(new Inline_response_200_3_sku());
            newItem->fromJson(val[U("sku")]);
            setSku( newItem );
        }
        
    }
    if(val.has_field(U("capacity")))
    {
        if(!val[U("capacity")].is_null())
        {
            std::shared_ptr<Inline_response_200_3_capacity> newItem(new Inline_response_200_3_capacity());
            newItem->fromJson(val[U("capacity")]);
            setCapacity( newItem );
        }
        
    }
    
}

void IotHubSkuDescription::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ResourceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("resourceType"), m_ResourceType));
        
    }
    if(m_SkuIsSet)
    {
        if (m_Sku.get())
        {
            m_Sku->toMultipart(multipart, U("sku."));
        }
        
    }
    if(m_CapacityIsSet)
    {
        if (m_Capacity.get())
        {
            m_Capacity->toMultipart(multipart, U("capacity."));
        }
        
    }
    
}

void IotHubSkuDescription::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("resourceType")))
    {
        setResourceType(ModelBase::stringFromHttpContent(multipart->getContent(U("resourceType"))));
        
    }
    if(multipart->hasContent(U("sku")))
    {
        if(multipart->hasContent(U("sku")))
        {
            std::shared_ptr<Inline_response_200_3_sku> newItem(new Inline_response_200_3_sku());
            newItem->fromMultiPart(multipart, U("sku."));
            setSku( newItem );
        }
        
    }
    if(multipart->hasContent(U("capacity")))
    {
        if(multipart->hasContent(U("capacity")))
        {
            std::shared_ptr<Inline_response_200_3_capacity> newItem(new Inline_response_200_3_capacity());
            newItem->fromMultiPart(multipart, U("capacity."));
            setCapacity( newItem );
        }
        
    }
    
}


utility::string_t IotHubSkuDescription::getResourceType() const
{
    return m_ResourceType;
}
void IotHubSkuDescription::setResourceType(utility::string_t value)
{
    m_ResourceType = value;
    m_ResourceTypeIsSet = true;
}
bool IotHubSkuDescription::resourceTypeIsSet() const
{
    return m_ResourceTypeIsSet;
}
void IotHubSkuDescription::unsetResourceType()
{
    m_ResourceTypeIsSet = false;
}
std::shared_ptr<Inline_response_200_3_sku> IotHubSkuDescription::getSku() const
{
    return m_Sku;
}
void IotHubSkuDescription::setSku(std::shared_ptr<Inline_response_200_3_sku> value)
{
    m_Sku = value;
    m_SkuIsSet = true;
}
bool IotHubSkuDescription::skuIsSet() const
{
    return m_SkuIsSet;
}
void IotHubSkuDescription::unsetSku()
{
    m_SkuIsSet = false;
}
std::shared_ptr<Inline_response_200_3_capacity> IotHubSkuDescription::getCapacity() const
{
    return m_Capacity;
}
void IotHubSkuDescription::setCapacity(std::shared_ptr<Inline_response_200_3_capacity> value)
{
    m_Capacity = value;
    m_CapacityIsSet = true;
}
bool IotHubSkuDescription::capacityIsSet() const
{
    return m_CapacityIsSet;
}
void IotHubSkuDescription::unsetCapacity()
{
    m_CapacityIsSet = false;
}

}
}
}
}

