﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API SearchTransitGatewayRoutesRequest : public EC2Request
  {
  public:
    SearchTransitGatewayRoutesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTransitGatewayRoutes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline SearchTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline SearchTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline SearchTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline SearchTransitGatewayRoutesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline SearchTransitGatewayRoutesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline SearchTransitGatewayRoutesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>transit-gateway-route-state</code> - The state of the route
     * (<code>active</code> | <code>blackhole</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>transit-gateway-route-type</code> - The
     * route type (<code>static</code> | <code>propagated</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-vpn-connection-id</code> - The ID of the VPN
     * connection.</p> </li> </ul>
     */
    inline SearchTransitGatewayRoutesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of routes to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of routes to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of routes to return.</p>
     */
    inline SearchTransitGatewayRoutesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline SearchTransitGatewayRoutesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
