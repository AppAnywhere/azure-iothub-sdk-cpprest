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



#include "RoutingProperties.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RoutingProperties::RoutingProperties()
{
    m_EndpointsIsSet = false;
    m_RoutesIsSet = false;
    m_FallbackRouteIsSet = false;
    
}

RoutingProperties::~RoutingProperties()
{
}

void RoutingProperties::validate()
{
    // TODO: implement validation
}

web::json::value RoutingProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EndpointsIsSet)
    {
        val[U("endpoints")] = ModelBase::toJson(m_Endpoints);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Routes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("routes")] = web::json::value::array(jsonArray);
        }
    }
    if(m_FallbackRouteIsSet)
    {
        val[U("fallbackRoute")] = ModelBase::toJson(m_FallbackRoute);
    }
    

    return val;
}

void RoutingProperties::fromJson(web::json::value& val)
{
    if(val.has_field(U("endpoints")))
    {
        if(!val[U("endpoints")].is_null())
        {
            std::shared_ptr<IotHubProperties_routing_endpoints> newItem(new IotHubProperties_routing_endpoints());
            newItem->fromJson(val[U("endpoints")]);
            setEndpoints( newItem );
        }
        
    }
    {
        m_Routes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("routes")))
        {
        for( auto& item : val[U("routes")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Routes.push_back( std::shared_ptr<IotHubProperties_routing_routes>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_routes> newItem(new IotHubProperties_routing_routes());
                newItem->fromJson(item);
                m_Routes.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("fallbackRoute")))
    {
        if(!val[U("fallbackRoute")].is_null())
        {
            std::shared_ptr<IotHubProperties_routing_fallbackRoute> newItem(new IotHubProperties_routing_fallbackRoute());
            newItem->fromJson(val[U("fallbackRoute")]);
            setFallbackRoute( newItem );
        }
        
    }
    
}

void RoutingProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_EndpointsIsSet)
    {
        if (m_Endpoints.get())
        {
            m_Endpoints->toMultipart(multipart, U("endpoints."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Routes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("routes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_FallbackRouteIsSet)
    {
        if (m_FallbackRoute.get())
        {
            m_FallbackRoute->toMultipart(multipart, U("fallbackRoute."));
        }
        
    }
    
}

void RoutingProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("endpoints")))
    {
        if(multipart->hasContent(U("endpoints")))
        {
            std::shared_ptr<IotHubProperties_routing_endpoints> newItem(new IotHubProperties_routing_endpoints());
            newItem->fromMultiPart(multipart, U("endpoints."));
            setEndpoints( newItem );
        }
        
    }
    {
        m_Routes.clear();
        if(multipart->hasContent(U("routes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("routes"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Routes.push_back( std::shared_ptr<IotHubProperties_routing_routes>(nullptr) );
            }
            else
            {
                std::shared_ptr<IotHubProperties_routing_routes> newItem(new IotHubProperties_routing_routes());
                newItem->fromJson(item);
                m_Routes.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("fallbackRoute")))
    {
        if(multipart->hasContent(U("fallbackRoute")))
        {
            std::shared_ptr<IotHubProperties_routing_fallbackRoute> newItem(new IotHubProperties_routing_fallbackRoute());
            newItem->fromMultiPart(multipart, U("fallbackRoute."));
            setFallbackRoute( newItem );
        }
        
    }
    
}


std::shared_ptr<IotHubProperties_routing_endpoints> RoutingProperties::getEndpoints() const
{
    return m_Endpoints;
}
void RoutingProperties::setEndpoints(std::shared_ptr<IotHubProperties_routing_endpoints> value)
{
    m_Endpoints = value;
    m_EndpointsIsSet = true;
}
bool RoutingProperties::endpointsIsSet() const
{
    return m_EndpointsIsSet;
}
void RoutingProperties::unsetEndpoints()
{
    m_EndpointsIsSet = false;
}
std::vector<std::shared_ptr<IotHubProperties_routing_routes>>& RoutingProperties::getRoutes()
{
    return m_Routes;
}
bool RoutingProperties::routesIsSet() const
{
    return m_RoutesIsSet;
}
void RoutingProperties::unsetRoutes()
{
    m_RoutesIsSet = false;
}
std::shared_ptr<IotHubProperties_routing_fallbackRoute> RoutingProperties::getFallbackRoute() const
{
    return m_FallbackRoute;
}
void RoutingProperties::setFallbackRoute(std::shared_ptr<IotHubProperties_routing_fallbackRoute> value)
{
    m_FallbackRoute = value;
    m_FallbackRouteIsSet = true;
}
bool RoutingProperties::fallbackRouteIsSet() const
{
    return m_FallbackRouteIsSet;
}
void RoutingProperties::unsetFallbackRoute()
{
    m_FallbackRouteIsSet = false;
}

}
}
}
}

