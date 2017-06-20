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
 * ErrorDetails.h
 *
 * Error details.
 */

#ifndef ErrorDetails_H_
#define ErrorDetails_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Error details.
/// </summary>
class  ErrorDetails
    : public ModelBase
{
public:
    ErrorDetails();
    virtual ~ErrorDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ErrorDetails members

    /// <summary>
    /// The error code.
    /// </summary>
    utility::string_t getCode() const;
    bool CodeIsSet() const;
    void unsetCode();
    void setCode(utility::string_t value);
    /// <summary>
    /// The HTTP status code.
    /// </summary>
    utility::string_t getHttpStatusCode() const;
    bool HttpStatusCodeIsSet() const;
    void unsetHttpStatusCode();
    void setHttpStatusCode(utility::string_t value);
    /// <summary>
    /// The error message.
    /// </summary>
    utility::string_t getMessage() const;
    bool MessageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);
    /// <summary>
    /// The error details.
    /// </summary>
    utility::string_t getDetails() const;
    bool DetailsIsSet() const;
    void unsetDetails();
    void setDetails(utility::string_t value);

protected:
    utility::string_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_HttpStatusCode;
    bool m_HttpStatusCodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
    utility::string_t m_Details;
    bool m_DetailsIsSet;
};

}
}
}
}

#endif /* ErrorDetails_H_ */
