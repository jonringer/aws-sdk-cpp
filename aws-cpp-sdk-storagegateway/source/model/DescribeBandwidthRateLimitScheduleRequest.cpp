﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeBandwidthRateLimitScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBandwidthRateLimitScheduleRequest::DescribeBandwidthRateLimitScheduleRequest() : 
    m_gatewayARNHasBeenSet(false)
{
}

Aws::String DescribeBandwidthRateLimitScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBandwidthRateLimitScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeBandwidthRateLimitSchedule"));
  return headers;

}




