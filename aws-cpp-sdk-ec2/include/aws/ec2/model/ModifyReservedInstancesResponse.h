﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of ModifyReservedInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstancesResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ModifyReservedInstancesResponse
  {
  public:
    ModifyReservedInstancesResponse();
    ModifyReservedInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyReservedInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID for the modification.</p>
     */
    inline const Aws::String& GetReservedInstancesModificationId() const{ return m_reservedInstancesModificationId; }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(const Aws::String& value) { m_reservedInstancesModificationId = value; }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(Aws::String&& value) { m_reservedInstancesModificationId = value; }

    /**
     * <p>The ID for the modification.</p>
     */
    inline void SetReservedInstancesModificationId(const char* value) { m_reservedInstancesModificationId.assign(value); }

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(const Aws::String& value) { SetReservedInstancesModificationId(value); return *this;}

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(Aws::String&& value) { SetReservedInstancesModificationId(value); return *this;}

    /**
     * <p>The ID for the modification.</p>
     */
    inline ModifyReservedInstancesResponse& WithReservedInstancesModificationId(const char* value) { SetReservedInstancesModificationId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ModifyReservedInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyReservedInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_reservedInstancesModificationId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws