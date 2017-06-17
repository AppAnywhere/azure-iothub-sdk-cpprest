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



#include "Inline_response_default.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Inline_response_default::Inline_response_default()
{
    m_Code = U("");
    m_CodeIsSet = false;
    m_HttpStatusCode = U("");
    m_HttpStatusCodeIsSet = false;
    m_Message = U("");
    m_MessageIsSet = false;
    m_Details = U("");
    m_DetailsIsSet = false;
    
}

Inline_response_default::~Inline_response_default()
{
}

void Inline_response_default::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_default::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CodeIsSet)
    {
        val[U("Code")] = ModelBase::toJson(m_Code);
    }
    if(m_HttpStatusCodeIsSet)
    {
        val[U("HttpStatusCode")] = ModelBase::toJson(m_HttpStatusCode);
    }
    if(m_MessageIsSet)
    {
        val[U("Message")] = ModelBase::toJson(m_Message);
    }
    if(m_DetailsIsSet)
    {
        val[U("Details")] = ModelBase::toJson(m_Details);
    }
    

    return val;
}

void Inline_response_default::fromJson(web::json::value& val)
{
    if(val.has_field(U("Code")))
    {
        setCode(ModelBase::stringFromJson(val[U("Code")]));
        
    }
    if(val.has_field(U("HttpStatusCode")))
    {
        setHttpStatusCode(ModelBase::stringFromJson(val[U("HttpStatusCode")]));
        
    }
    if(val.has_field(U("Message")))
    {
        setMessage(ModelBase::stringFromJson(val[U("Message")]));
        
    }
    if(val.has_field(U("Details")))
    {
        setDetails(ModelBase::stringFromJson(val[U("Details")]));
        
    }
    
}

void Inline_response_default::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("Code"), m_Code));
        
    }
    if(m_HttpStatusCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("HttpStatusCode"), m_HttpStatusCode));
        
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("Message"), m_Message));
        
    }
    if(m_DetailsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("Details"), m_Details));
        
    }
    
}

void Inline_response_default::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("Code")))
    {
        setCode(ModelBase::stringFromHttpContent(multipart->getContent(U("Code"))));
        
    }
    if(multipart->hasContent(U("HttpStatusCode")))
    {
        setHttpStatusCode(ModelBase::stringFromHttpContent(multipart->getContent(U("HttpStatusCode"))));
        
    }
    if(multipart->hasContent(U("Message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("Message"))));
        
    }
    if(multipart->hasContent(U("Details")))
    {
        setDetails(ModelBase::stringFromHttpContent(multipart->getContent(U("Details"))));
        
    }
    
}


utility::string_t Inline_response_default::getCode() const
{
    return m_Code;
}
void Inline_response_default::setCode(utility::string_t value)
{
    m_Code = value;
    m_CodeIsSet = true;
}
bool Inline_response_default::CodeIsSet() const
{
    return m_CodeIsSet;
}
void Inline_response_default::unsetCode()
{
    m_CodeIsSet = false;
}
utility::string_t Inline_response_default::getHttpStatusCode() const
{
    return m_HttpStatusCode;
}
void Inline_response_default::setHttpStatusCode(utility::string_t value)
{
    m_HttpStatusCode = value;
    m_HttpStatusCodeIsSet = true;
}
bool Inline_response_default::HttpStatusCodeIsSet() const
{
    return m_HttpStatusCodeIsSet;
}
void Inline_response_default::unsetHttpStatusCode()
{
    m_HttpStatusCodeIsSet = false;
}
utility::string_t Inline_response_default::getMessage() const
{
    return m_Message;
}
void Inline_response_default::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool Inline_response_default::MessageIsSet() const
{
    return m_MessageIsSet;
}
void Inline_response_default::unsetMessage()
{
    m_MessageIsSet = false;
}
utility::string_t Inline_response_default::getDetails() const
{
    return m_Details;
}
void Inline_response_default::setDetails(utility::string_t value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool Inline_response_default::DetailsIsSet() const
{
    return m_DetailsIsSet;
}
void Inline_response_default::unsetDetails()
{
    m_DetailsIsSet = false;
}

}
}
}
}
