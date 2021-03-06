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
 * StorageEndpointProperties.h
 *
 * The properties of the Azure Storage endpoint for file upload.
 */

#ifndef StorageEndpointProperties_H_
#define StorageEndpointProperties_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// The properties of the Azure Storage endpoint for file upload.
/// </summary>
class  StorageEndpointProperties
    : public ModelBase
{
public:
    StorageEndpointProperties();
    virtual ~StorageEndpointProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StorageEndpointProperties members

    /// <summary>
    /// The period of time for which the the SAS URI generated by IoT Hub for file upload is valid. See: https://docs.microsoft.com/azure/iot-hub/iot-hub-devguide-file-upload#file-upload-notification-configuration-options.
    /// </summary>
    utility::string_t getSasTtlAsIso8601() const;
    void setSasTtlAsIso8601(utility::string_t value);
    bool sasTtlAsIso8601IsSet() const;
    void unsetSasTtlAsIso8601();
    /// <summary>
    /// The connection string for the Azure Storage account to which files are uploaded.
    /// </summary>
    utility::string_t getConnectionString() const;
    void setConnectionString(utility::string_t value);
        /// <summary>
    /// The name of the root container where you upload files. The container need not exist but should be creatable using the connectionString specified.
    /// </summary>
    utility::string_t getContainerName() const;
    void setContainerName(utility::string_t value);
    
protected:
    utility::string_t m_SasTtlAsIso8601;
    bool m_SasTtlAsIso8601IsSet;
utility::string_t m_ConnectionString;
    utility::string_t m_ContainerName;
    };

}
}
}
}

#endif /* StorageEndpointProperties_H_ */
