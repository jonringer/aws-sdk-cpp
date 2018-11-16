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

#include <aws/dms/model/ElasticsearchSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ElasticsearchSettings::ElasticsearchSettings() : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_endpointUriHasBeenSet(false),
    m_fullLoadErrorPercentage(0),
    m_fullLoadErrorPercentageHasBeenSet(false),
    m_errorRetryDuration(0),
    m_errorRetryDurationHasBeenSet(false)
{
}

ElasticsearchSettings::ElasticsearchSettings(JsonView jsonValue) : 
    m_serviceAccessRoleArnHasBeenSet(false),
    m_endpointUriHasBeenSet(false),
    m_fullLoadErrorPercentage(0),
    m_fullLoadErrorPercentageHasBeenSet(false),
    m_errorRetryDuration(0),
    m_errorRetryDurationHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchSettings& ElasticsearchSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointUri"))
  {
    m_endpointUri = jsonValue.GetString("EndpointUri");

    m_endpointUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullLoadErrorPercentage"))
  {
    m_fullLoadErrorPercentage = jsonValue.GetInteger("FullLoadErrorPercentage");

    m_fullLoadErrorPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorRetryDuration"))
  {
    m_errorRetryDuration = jsonValue.GetInteger("ErrorRetryDuration");

    m_errorRetryDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_endpointUriHasBeenSet)
  {
   payload.WithString("EndpointUri", m_endpointUri);

  }

  if(m_fullLoadErrorPercentageHasBeenSet)
  {
   payload.WithInteger("FullLoadErrorPercentage", m_fullLoadErrorPercentage);

  }

  if(m_errorRetryDurationHasBeenSet)
  {
   payload.WithInteger("ErrorRetryDuration", m_errorRetryDuration);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
