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

#include <aws/redshift/model/SnapshotAttributeToSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace SnapshotAttributeToSortByMapper
      {

        static const int SOURCE_TYPE_HASH = HashingUtils::HashString("SOURCE_TYPE");
        static const int TOTAL_SIZE_HASH = HashingUtils::HashString("TOTAL_SIZE");
        static const int CREATE_TIME_HASH = HashingUtils::HashString("CREATE_TIME");


        SnapshotAttributeToSortBy GetSnapshotAttributeToSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_TYPE_HASH)
          {
            return SnapshotAttributeToSortBy::SOURCE_TYPE;
          }
          else if (hashCode == TOTAL_SIZE_HASH)
          {
            return SnapshotAttributeToSortBy::TOTAL_SIZE;
          }
          else if (hashCode == CREATE_TIME_HASH)
          {
            return SnapshotAttributeToSortBy::CREATE_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotAttributeToSortBy>(hashCode);
          }

          return SnapshotAttributeToSortBy::NOT_SET;
        }

        Aws::String GetNameForSnapshotAttributeToSortBy(SnapshotAttributeToSortBy enumValue)
        {
          switch(enumValue)
          {
          case SnapshotAttributeToSortBy::SOURCE_TYPE:
            return "SOURCE_TYPE";
          case SnapshotAttributeToSortBy::TOTAL_SIZE:
            return "TOTAL_SIZE";
          case SnapshotAttributeToSortBy::CREATE_TIME:
            return "CREATE_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SnapshotAttributeToSortByMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
