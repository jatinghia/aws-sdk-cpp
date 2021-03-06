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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Information collected from managed instances based on your inventory policy
   * document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryItem
  {
  public:
    InventoryItem();
    InventoryItem(const Aws::Utils::Json::JsonValue& jsonValue);
    InventoryItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(Aws::String&& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(const char* value) { SetTypeName(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(const Aws::String& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(Aws::String&& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(const char* value) { m_captureTimeHasBeenSet = true; m_captureTime.assign(value); }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(Aws::String&& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline const Aws::String& GetContentHash() const{ return m_contentHash; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline void SetContentHash(const Aws::String& value) { m_contentHashHasBeenSet = true; m_contentHash = value; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline void SetContentHash(Aws::String&& value) { m_contentHashHasBeenSet = true; m_contentHash = value; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline void SetContentHash(const char* value) { m_contentHashHasBeenSet = true; m_contentHash.assign(value); }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline InventoryItem& WithContentHash(const Aws::String& value) { SetContentHash(value); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline InventoryItem& WithContentHash(Aws::String&& value) { SetContentHash(value); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The <code>PutInventory</code>
     * API does not update the inventory item type contents if the MD5 hash has not
     * changed since last update. </p>
     */
    inline InventoryItem& WithContentHash(const char* value) { SetContentHash(value); return *this;}

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const{ return m_content; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline void SetContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline void SetContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& WithContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetContent(value); return *this;}

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& WithContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetContent(value); return *this;}

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& AddContent(const Aws::Map<Aws::String, Aws::String>& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& AddContent(Aws::Map<Aws::String, Aws::String>&& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

  private:
    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;
    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;
    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet;
    Aws::String m_contentHash;
    bool m_contentHashHasBeenSet;
    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
