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



#include "Inline_response_200_6_value.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Inline_response_200_6_value::Inline_response_200_6_value()
{
    m_JobId = U("");
    m_JobIdIsSet = false;
    m_StartTimeUtc = U("");
    m_StartTimeUtcIsSet = false;
    m_EndTimeUtc = U("");
    m_EndTimeUtcIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_FailureReason = U("");
    m_FailureReasonIsSet = false;
    m_StatusMessage = U("");
    m_StatusMessageIsSet = false;
    m_ParentJobId = U("");
    m_ParentJobIdIsSet = false;
    
}

Inline_response_200_6_value::~Inline_response_200_6_value()
{
}

void Inline_response_200_6_value::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200_6_value::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_JobIdIsSet)
    {
        val[U("jobId")] = ModelBase::toJson(m_JobId);
    }
    if(m_StartTimeUtcIsSet)
    {
        val[U("startTimeUtc")] = ModelBase::toJson(m_StartTimeUtc);
    }
    if(m_EndTimeUtcIsSet)
    {
        val[U("endTimeUtc")] = ModelBase::toJson(m_EndTimeUtc);
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_FailureReasonIsSet)
    {
        val[U("failureReason")] = ModelBase::toJson(m_FailureReason);
    }
    if(m_StatusMessageIsSet)
    {
        val[U("statusMessage")] = ModelBase::toJson(m_StatusMessage);
    }
    if(m_ParentJobIdIsSet)
    {
        val[U("parentJobId")] = ModelBase::toJson(m_ParentJobId);
    }
    

    return val;
}

void Inline_response_200_6_value::fromJson(web::json::value& val)
{
    if(val.has_field(U("jobId")))
    {
        setJobId(ModelBase::stringFromJson(val[U("jobId")]));
        
    }
    if(val.has_field(U("startTimeUtc")))
    {
        setStartTimeUtc(ModelBase::stringFromJson(val[U("startTimeUtc")]));
        
    }
    if(val.has_field(U("endTimeUtc")))
    {
        setEndTimeUtc(ModelBase::stringFromJson(val[U("endTimeUtc")]));
        
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
        
    }
    if(val.has_field(U("failureReason")))
    {
        setFailureReason(ModelBase::stringFromJson(val[U("failureReason")]));
        
    }
    if(val.has_field(U("statusMessage")))
    {
        setStatusMessage(ModelBase::stringFromJson(val[U("statusMessage")]));
        
    }
    if(val.has_field(U("parentJobId")))
    {
        setParentJobId(ModelBase::stringFromJson(val[U("parentJobId")]));
        
    }
    
}

void Inline_response_200_6_value::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_JobIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("jobId"), m_JobId));
        
    }
    if(m_StartTimeUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("startTimeUtc"), m_StartTimeUtc));
        
    }
    if(m_EndTimeUtcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("endTimeUtc"), m_EndTimeUtc));
        
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_FailureReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("failureReason"), m_FailureReason));
        
    }
    if(m_StatusMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("statusMessage"), m_StatusMessage));
        
    }
    if(m_ParentJobIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("parentJobId"), m_ParentJobId));
        
    }
    
}

void Inline_response_200_6_value::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("jobId")))
    {
        setJobId(ModelBase::stringFromHttpContent(multipart->getContent(U("jobId"))));
        
    }
    if(multipart->hasContent(U("startTimeUtc")))
    {
        setStartTimeUtc(ModelBase::stringFromHttpContent(multipart->getContent(U("startTimeUtc"))));
        
    }
    if(multipart->hasContent(U("endTimeUtc")))
    {
        setEndTimeUtc(ModelBase::stringFromHttpContent(multipart->getContent(U("endTimeUtc"))));
        
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
        
    }
    if(multipart->hasContent(U("failureReason")))
    {
        setFailureReason(ModelBase::stringFromHttpContent(multipart->getContent(U("failureReason"))));
        
    }
    if(multipart->hasContent(U("statusMessage")))
    {
        setStatusMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("statusMessage"))));
        
    }
    if(multipart->hasContent(U("parentJobId")))
    {
        setParentJobId(ModelBase::stringFromHttpContent(multipart->getContent(U("parentJobId"))));
        
    }
    
}


utility::string_t Inline_response_200_6_value::getJobId() const
{
    return m_JobId;
}
void Inline_response_200_6_value::setJobId(utility::string_t value)
{
    m_JobId = value;
    m_JobIdIsSet = true;
}
bool Inline_response_200_6_value::jobIdIsSet() const
{
    return m_JobIdIsSet;
}
void Inline_response_200_6_value::unsetJobId()
{
    m_JobIdIsSet = false;
}
utility::string_t Inline_response_200_6_value::getStartTimeUtc() const
{
    return m_StartTimeUtc;
}
void Inline_response_200_6_value::setStartTimeUtc(utility::string_t value)
{
    m_StartTimeUtc = value;
    m_StartTimeUtcIsSet = true;
}
bool Inline_response_200_6_value::startTimeUtcIsSet() const
{
    return m_StartTimeUtcIsSet;
}
void Inline_response_200_6_value::unsetStartTimeUtc()
{
    m_StartTimeUtcIsSet = false;
}
utility::string_t Inline_response_200_6_value::getEndTimeUtc() const
{
    return m_EndTimeUtc;
}
void Inline_response_200_6_value::setEndTimeUtc(utility::string_t value)
{
    m_EndTimeUtc = value;
    m_EndTimeUtcIsSet = true;
}
bool Inline_response_200_6_value::endTimeUtcIsSet() const
{
    return m_EndTimeUtcIsSet;
}
void Inline_response_200_6_value::unsetEndTimeUtc()
{
    m_EndTimeUtcIsSet = false;
}
utility::string_t Inline_response_200_6_value::getType() const
{
    return m_Type;
}
void Inline_response_200_6_value::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Inline_response_200_6_value::typeIsSet() const
{
    return m_TypeIsSet;
}
void Inline_response_200_6_value::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Inline_response_200_6_value::getStatus() const
{
    return m_Status;
}
void Inline_response_200_6_value::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool Inline_response_200_6_value::statusIsSet() const
{
    return m_StatusIsSet;
}
void Inline_response_200_6_value::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Inline_response_200_6_value::getFailureReason() const
{
    return m_FailureReason;
}
void Inline_response_200_6_value::setFailureReason(utility::string_t value)
{
    m_FailureReason = value;
    m_FailureReasonIsSet = true;
}
bool Inline_response_200_6_value::failureReasonIsSet() const
{
    return m_FailureReasonIsSet;
}
void Inline_response_200_6_value::unsetFailureReason()
{
    m_FailureReasonIsSet = false;
}
utility::string_t Inline_response_200_6_value::getStatusMessage() const
{
    return m_StatusMessage;
}
void Inline_response_200_6_value::setStatusMessage(utility::string_t value)
{
    m_StatusMessage = value;
    m_StatusMessageIsSet = true;
}
bool Inline_response_200_6_value::statusMessageIsSet() const
{
    return m_StatusMessageIsSet;
}
void Inline_response_200_6_value::unsetStatusMessage()
{
    m_StatusMessageIsSet = false;
}
utility::string_t Inline_response_200_6_value::getParentJobId() const
{
    return m_ParentJobId;
}
void Inline_response_200_6_value::setParentJobId(utility::string_t value)
{
    m_ParentJobId = value;
    m_ParentJobIdIsSet = true;
}
bool Inline_response_200_6_value::parentJobIdIsSet() const
{
    return m_ParentJobIdIsSet;
}
void Inline_response_200_6_value::unsetParentJobId()
{
    m_ParentJobIdIsSet = false;
}

}
}
}
}
