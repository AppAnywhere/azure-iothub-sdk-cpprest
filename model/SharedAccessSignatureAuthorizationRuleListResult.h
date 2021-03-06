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
 * SharedAccessSignatureAuthorizationRuleListResult.h
 *
 * The list of shared access policies with a next link.
 */

#ifndef SharedAccessSignatureAuthorizationRuleListResult_H_
#define SharedAccessSignatureAuthorizationRuleListResult_H_


#include "ModelBase.h"

#include "Inline_response_200_9_value.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The list of shared access policies with a next link.
/// </summary>
class  SharedAccessSignatureAuthorizationRuleListResult
    : public ModelBase
{
public:
    SharedAccessSignatureAuthorizationRuleListResult();
    virtual ~SharedAccessSignatureAuthorizationRuleListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SharedAccessSignatureAuthorizationRuleListResult members

    /// <summary>
    /// The list of shared access policies.
    /// </summary>
    std::vector<std::shared_ptr<Inline_response_200_9_value>>& getValue();
    bool valueIsSet() const;
    void unsetValue();
    /// <summary>
    /// The next link.
    /// </summary>
    utility::string_t getNextLink() const;
    void setNextLink(utility::string_t value);
    bool nextLinkIsSet() const;
    void unsetNextLink();

protected:
    std::vector<std::shared_ptr<Inline_response_200_9_value>> m_Value;
    bool m_ValueIsSet;
utility::string_t m_NextLink;
    bool m_NextLinkIsSet;
};

}
}
}
}

#endif /* SharedAccessSignatureAuthorizationRuleListResult_H_ */
