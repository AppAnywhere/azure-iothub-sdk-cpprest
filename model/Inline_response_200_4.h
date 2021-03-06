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
 * Inline_response_200_4.h
 *
 * The JSON-serialized array of Event Hub-compatible consumer group names with a next link.
 */

#ifndef Inline_response_200_4_H_
#define Inline_response_200_4_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The JSON-serialized array of Event Hub-compatible consumer group names with a next link.
/// </summary>
class  Inline_response_200_4
    : public ModelBase
{
public:
    Inline_response_200_4();
    virtual ~Inline_response_200_4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_200_4 members

    /// <summary>
    /// The array of Event Hub-compatible consumer group names.
    /// </summary>
    std::vector<utility::string_t>& getValue();
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
    std::vector<utility::string_t> m_Value;
    bool m_ValueIsSet;
utility::string_t m_NextLink;
    bool m_NextLinkIsSet;
};

}
}
}
}

#endif /* Inline_response_200_4_H_ */
