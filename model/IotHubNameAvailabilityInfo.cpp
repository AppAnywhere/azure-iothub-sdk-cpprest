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



#include "IotHubNameAvailabilityInfo.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IotHubNameAvailabilityInfo::IotHubNameAvailabilityInfo()
{
    m_NameAvailable = false;
    m_NameAvailableIsSet = false;
    m_Reason = U("");
    m_ReasonIsSet = false;
    m_Message = U("");
    m_MessageIsSet = false;
}

IotHubNameAvailabilityInfo::~IotHubNameAvailabilityInfo()
{
}

void IotHubNameAvailabilityInfo::validate()
{
    // TODO: implement validation
}

web::json::value IotHubNameAvailabilityInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameAvailableIsSet)
    {
        val[U("nameAvailable")] = ModelBase::toJson(m_NameAvailable);
    }
    if(m_ReasonIsSet)
    {
        val[U("reason")] = ModelBase::toJson(m_Reason);
    }
    if(m_MessageIsSet)
    {
        val[U("message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

void IotHubNameAvailabilityInfo::fromJson(web::json::value& val)
{
    if(val.has_field(U("nameAvailable")))
    {
        setNameAvailable(ModelBase::boolFromJson(val[U("nameAvailable")]));
    }
    if(val.has_field(U("reason")))
    {
        setReason(ModelBase::stringFromJson(val[U("reason")]));
    }
    if(val.has_field(U("message")))
    {
        setMessage(ModelBase::stringFromJson(val[U("message")]));
    }
}

void IotHubNameAvailabilityInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_NameAvailableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nameAvailable"), m_NameAvailable));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("reason"), m_Reason));
        
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("message"), m_Message));
        
    }
}

void IotHubNameAvailabilityInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("nameAvailable")))
    {
        setNameAvailable(ModelBase::boolFromHttpContent(multipart->getContent(U("nameAvailable"))));
    }
    if(multipart->hasContent(U("reason")))
    {
        setReason(ModelBase::stringFromHttpContent(multipart->getContent(U("reason"))));
    }
    if(multipart->hasContent(U("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("message"))));
    }
}

bool IotHubNameAvailabilityInfo::getNameAvailable() const
{
    return m_NameAvailable;
}


void IotHubNameAvailabilityInfo::setNameAvailable(bool value)
{
    m_NameAvailable = value;
    m_NameAvailableIsSet = true;
}
bool IotHubNameAvailabilityInfo::nameAvailableIsSet() const
{
    return m_NameAvailableIsSet;
}

void IotHubNameAvailabilityInfo::unsetNameAvailable()
{
    m_NameAvailableIsSet = false;
}

utility::string_t IotHubNameAvailabilityInfo::getReason() const
{
    return m_Reason;
}


void IotHubNameAvailabilityInfo::setReason(utility::string_t value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}
bool IotHubNameAvailabilityInfo::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void IotHubNameAvailabilityInfo::unsetReason()
{
    m_ReasonIsSet = false;
}

utility::string_t IotHubNameAvailabilityInfo::getMessage() const
{
    return m_Message;
}


void IotHubNameAvailabilityInfo::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool IotHubNameAvailabilityInfo::messageIsSet() const
{
    return m_MessageIsSet;
}

void IotHubNameAvailabilityInfo::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}

