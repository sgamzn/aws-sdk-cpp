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
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the members of a VPC security group.</p>
   */
  class AWS_REDSHIFT_API VpcSecurityGroupMembership
  {
  public:
    VpcSecurityGroupMembership();
    VpcSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(value); return *this;}

    
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}

    
    inline const Aws::String& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    
    inline VpcSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    
    inline VpcSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    
    inline VpcSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:
    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws