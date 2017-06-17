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
 * EventHubConsumerGroupInfo.h
 *
 * The properties of the EventHubConsumerGroupInfo object.
 */

#ifndef EventHubConsumerGroupInfo_H_
#define EventHubConsumerGroupInfo_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of the EventHubConsumerGroupInfo object.
/// </summary>
class  EventHubConsumerGroupInfo
    : public ModelBase
{
public:
    EventHubConsumerGroupInfo();
    virtual ~EventHubConsumerGroupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EventHubConsumerGroupInfo members

    /// <summary>
    /// The tags.
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    /// <summary>
    /// The Event Hub-compatible consumer group identifier.
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The Event Hub-compatible consumer group name.
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();

protected:
    std::map<utility::string_t, utility::string_t> m_Tags;
    bool m_TagsIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* EventHubConsumerGroupInfo_H_ */