﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HierarchyGroupSummaryReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HierarchyGroupSummaryReference::HierarchyGroupSummaryReference() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

HierarchyGroupSummaryReference::HierarchyGroupSummaryReference(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

HierarchyGroupSummaryReference& HierarchyGroupSummaryReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue HierarchyGroupSummaryReference::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
