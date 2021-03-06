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



#include "StorageEndpointProperties.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StorageEndpointProperties::StorageEndpointProperties()
{
    m_SasTtlAsIso8601 = U("");
    m_SasTtlAsIso8601IsSet = false;
    m_ConnectionString = U("");
    m_ContainerName = U("");
    
}

StorageEndpointProperties::~StorageEndpointProperties()
{
}

void StorageEndpointProperties::validate()
{
    // TODO: implement validation
}

web::json::value StorageEndpointProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SasTtlAsIso8601IsSet)
    {
        val[U("sasTtlAsIso8601")] = ModelBase::toJson(m_SasTtlAsIso8601);
    }
    val[U("connectionString")] = ModelBase::toJson(m_ConnectionString);
    val[U("containerName")] = ModelBase::toJson(m_ContainerName);
    

    return val;
}

void StorageEndpointProperties::fromJson(web::json::value& val)
{
    if(val.has_field(U("sasTtlAsIso8601")))
    {
        setSasTtlAsIso8601(ModelBase::stringFromJson(val[U("sasTtlAsIso8601")]));
        
    }
    setConnectionString(ModelBase::stringFromJson(val[U("connectionString")]));
    setContainerName(ModelBase::stringFromJson(val[U("containerName")]));
    
}

void StorageEndpointProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_SasTtlAsIso8601IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sasTtlAsIso8601"), m_SasTtlAsIso8601));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("connectionString"), m_ConnectionString));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("containerName"), m_ContainerName));
    
}

void StorageEndpointProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("sasTtlAsIso8601")))
    {
        setSasTtlAsIso8601(ModelBase::stringFromHttpContent(multipart->getContent(U("sasTtlAsIso8601"))));
        
    }
    setConnectionString(ModelBase::stringFromHttpContent(multipart->getContent(U("connectionString"))));
    setContainerName(ModelBase::stringFromHttpContent(multipart->getContent(U("containerName"))));
    
}


utility::string_t StorageEndpointProperties::getSasTtlAsIso8601() const
{
    return m_SasTtlAsIso8601;
}
void StorageEndpointProperties::setSasTtlAsIso8601(utility::string_t value)
{
    m_SasTtlAsIso8601 = value;
    m_SasTtlAsIso8601IsSet = true;
}
bool StorageEndpointProperties::sasTtlAsIso8601IsSet() const
{
    return m_SasTtlAsIso8601IsSet;
}
void StorageEndpointProperties::unsetSasTtlAsIso8601()
{
    m_SasTtlAsIso8601IsSet = false;
}
utility::string_t StorageEndpointProperties::getConnectionString() const
{
    return m_ConnectionString;
}
void StorageEndpointProperties::setConnectionString(utility::string_t value)
{
    m_ConnectionString = value;
    
}
utility::string_t StorageEndpointProperties::getContainerName() const
{
    return m_ContainerName;
}
void StorageEndpointProperties::setContainerName(utility::string_t value)
{
    m_ContainerName = value;
    
}

}
}
}
}

