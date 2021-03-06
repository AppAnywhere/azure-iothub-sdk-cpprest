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

/*
 * JobResponse.h
 *
 * The properties of the Job Response object.
 */

#ifndef JobResponse_H_
#define JobResponse_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of the Job Response object.
/// </summary>
class  JobResponse
    : public ModelBase
{
public:
    JobResponse();
    virtual ~JobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// JobResponse members

    /// <summary>
    /// The job identifier.
    /// </summary>
    utility::string_t getJobId() const;
    void setJobId(utility::string_t value);
    bool jobIdIsSet() const;
    void unsetJobId();
    /// <summary>
    /// The start time of the job.
    /// </summary>
    utility::string_t getStartTimeUtc() const;
    void setStartTimeUtc(utility::string_t value);
    bool startTimeUtcIsSet() const;
    void unsetStartTimeUtc();
    /// <summary>
    /// The time the job stopped processing.
    /// </summary>
    utility::string_t getEndTimeUtc() const;
    void setEndTimeUtc(utility::string_t value);
    bool endTimeUtcIsSet() const;
    void unsetEndTimeUtc();
    /// <summary>
    /// The type of the job.
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// The status of the job.
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// If status &#x3D;&#x3D; failed, this string containing the reason for the failure.
    /// </summary>
    utility::string_t getFailureReason() const;
    void setFailureReason(utility::string_t value);
    bool failureReasonIsSet() const;
    void unsetFailureReason();
    /// <summary>
    /// The status message for the job.
    /// </summary>
    utility::string_t getStatusMessage() const;
    void setStatusMessage(utility::string_t value);
    bool statusMessageIsSet() const;
    void unsetStatusMessage();
    /// <summary>
    /// The job identifier of the parent job, if any.
    /// </summary>
    utility::string_t getParentJobId() const;
    void setParentJobId(utility::string_t value);
    bool parentJobIdIsSet() const;
    void unsetParentJobId();

protected:
    utility::string_t m_JobId;
    bool m_JobIdIsSet;
utility::string_t m_StartTimeUtc;
    bool m_StartTimeUtcIsSet;
utility::string_t m_EndTimeUtc;
    bool m_EndTimeUtcIsSet;
utility::string_t m_Type;
    bool m_TypeIsSet;
utility::string_t m_Status;
    bool m_StatusIsSet;
utility::string_t m_FailureReason;
    bool m_FailureReasonIsSet;
utility::string_t m_StatusMessage;
    bool m_StatusMessageIsSet;
utility::string_t m_ParentJobId;
    bool m_ParentJobIdIsSet;
};

}
}
}
}

#endif /* JobResponse_H_ */
