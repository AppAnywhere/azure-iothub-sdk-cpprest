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



#include "IotHubProperties_messagingEndpoints.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubProperties_messagingEndpoints::IotHubProperties_messagingEndpoints()
{
    m_LockDurationAsIso8601 = U("");
    m_LockDurationAsIso8601IsSet = false;
    m_TtlAsIso8601 = U("");
    m_TtlAsIso8601IsSet = false;
    m_MaxDeliveryCount = 0;
    m_MaxDeliveryCountIsSet = false;
    
}

IotHubProperties_messagingEndpoints::~IotHubProperties_messagingEndpoints()
{
}

void IotHubProperties_messagingEndpoints::validate()
{
    // TODO: implement validation
}

web::json::value IotHubProperties_messagingEndpoints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_LockDurationAsIso8601IsSet)
    {
        val[U("lockDurationAsIso8601")] = ModelBase::toJson(m_LockDurationAsIso8601);
    }
    if(m_TtlAsIso8601IsSet)
    {
        val[U("ttlAsIso8601")] = ModelBase::toJson(m_TtlAsIso8601);
    }
    if(m_MaxDeliveryCountIsSet)
    {
        val[U("maxDeliveryCount")] = ModelBase::toJson(m_MaxDeliveryCount);
    }
    

    return val;
}

void IotHubProperties_messagingEndpoints::fromJson(web::json::value& val)
{
    if(val.has_field(U("lockDurationAsIso8601")))
    {
        setLockDurationAsIso8601(ModelBase::stringFromJson(val[U("lockDurationAsIso8601")]));
        
    }
    if(val.has_field(U("ttlAsIso8601")))
    {
        setTtlAsIso8601(ModelBase::stringFromJson(val[U("ttlAsIso8601")]));
        
    }
    if(val.has_field(U("maxDeliveryCount")))
    {
        setMaxDeliveryCount(ModelBase::int32_tFromJson(val[U("maxDeliveryCount")]));
    }
    
}

void IotHubProperties_messagingEndpoints::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_LockDurationAsIso8601IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("lockDurationAsIso8601"), m_LockDurationAsIso8601));
        
    }
    if(m_TtlAsIso8601IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("ttlAsIso8601"), m_TtlAsIso8601));
        
    }
    if(m_MaxDeliveryCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("maxDeliveryCount"), m_MaxDeliveryCount));
    }
    
}

void IotHubProperties_messagingEndpoints::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("lockDurationAsIso8601")))
    {
        setLockDurationAsIso8601(ModelBase::stringFromHttpContent(multipart->getContent(U("lockDurationAsIso8601"))));
        
    }
    if(multipart->hasContent(U("ttlAsIso8601")))
    {
        setTtlAsIso8601(ModelBase::stringFromHttpContent(multipart->getContent(U("ttlAsIso8601"))));
        
    }
    if(multipart->hasContent(U("maxDeliveryCount")))
    {
        setMaxDeliveryCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("maxDeliveryCount"))));
    }
    
}


utility::string_t IotHubProperties_messagingEndpoints::getLockDurationAsIso8601() const
{
    return m_LockDurationAsIso8601;
}
void IotHubProperties_messagingEndpoints::setLockDurationAsIso8601(utility::string_t value)
{
    m_LockDurationAsIso8601 = value;
    m_LockDurationAsIso8601IsSet = true;
}
bool IotHubProperties_messagingEndpoints::lockDurationAsIso8601IsSet() const
{
    return m_LockDurationAsIso8601IsSet;
}
void IotHubProperties_messagingEndpoints::unsetLockDurationAsIso8601()
{
    m_LockDurationAsIso8601IsSet = false;
}
utility::string_t IotHubProperties_messagingEndpoints::getTtlAsIso8601() const
{
    return m_TtlAsIso8601;
}
void IotHubProperties_messagingEndpoints::setTtlAsIso8601(utility::string_t value)
{
    m_TtlAsIso8601 = value;
    m_TtlAsIso8601IsSet = true;
}
bool IotHubProperties_messagingEndpoints::ttlAsIso8601IsSet() const
{
    return m_TtlAsIso8601IsSet;
}
void IotHubProperties_messagingEndpoints::unsetTtlAsIso8601()
{
    m_TtlAsIso8601IsSet = false;
}
int32_t IotHubProperties_messagingEndpoints::getMaxDeliveryCount() const
{
    return m_MaxDeliveryCount;
}
void IotHubProperties_messagingEndpoints::setMaxDeliveryCount(int32_t value)
{
    m_MaxDeliveryCount = value;
    m_MaxDeliveryCountIsSet = true;
}
bool IotHubProperties_messagingEndpoints::maxDeliveryCountIsSet() const
{
    return m_MaxDeliveryCountIsSet;
}
void IotHubProperties_messagingEndpoints::unsetMaxDeliveryCount()
{
    m_MaxDeliveryCountIsSet = false;
}

}
}
}
}

