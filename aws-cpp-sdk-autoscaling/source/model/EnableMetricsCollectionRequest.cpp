/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/model/EnableMetricsCollectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

EnableMetricsCollectionRequest::EnableMetricsCollectionRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

Aws::String EnableMetricsCollectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableMetricsCollection&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_metricsHasBeenSet)
  {
    unsigned metricsCount = 1;
    for(auto& item : m_metrics)
    {
      ss << "Metrics.member." << metricsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      metricsCount++;
    }
  }
  if(m_granularityHasBeenSet)
  {
    ss << "Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }
  ss << "Version=2011-01-01";
  return ss.str();
}
