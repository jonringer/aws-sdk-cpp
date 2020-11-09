﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/IntelligentTieringAccessTier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
   * costs by automatically moving data to the most cost-effective storage access
   * tier, without additional operational overhead.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Tiering">AWS API
   * Reference</a></p>
   */
  class AWS_S3_API Tiering
  {
  public:
    Tiering();
    Tiering(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tiering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of days that you want your archived data to be accessible. The
     * minimum number of days specified in the restore request must be at least 90
     * days. If a smaller value is specifed it will be ignored. </p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p>The number of days that you want your archived data to be accessible. The
     * minimum number of days specified in the restore request must be at least 90
     * days. If a smaller value is specifed it will be ignored. </p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>The number of days that you want your archived data to be accessible. The
     * minimum number of days specified in the restore request must be at least 90
     * days. If a smaller value is specifed it will be ignored. </p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>The number of days that you want your archived data to be accessible. The
     * minimum number of days specified in the restore request must be at least 90
     * days. If a smaller value is specifed it will be ignored. </p>
     */
    inline Tiering& WithDays(int value) { SetDays(value); return *this;}


    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline const IntelligentTieringAccessTier& GetAccessTier() const{ return m_accessTier; }

    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }

    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline void SetAccessTier(const IntelligentTieringAccessTier& value) { m_accessTierHasBeenSet = true; m_accessTier = value; }

    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline void SetAccessTier(IntelligentTieringAccessTier&& value) { m_accessTierHasBeenSet = true; m_accessTier = std::move(value); }

    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline Tiering& WithAccessTier(const IntelligentTieringAccessTier& value) { SetAccessTier(value); return *this;}

    /**
     * <p>S3 Intelligent-Tiering access tier. See <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
     * class for automatically optimizing frequently and infrequently accessed
     * objects</a> for a list of access tiers in the S3 Intelligent-Tiering storage
     * class.</p>
     */
    inline Tiering& WithAccessTier(IntelligentTieringAccessTier&& value) { SetAccessTier(std::move(value)); return *this;}

  private:

    int m_days;
    bool m_daysHasBeenSet;

    IntelligentTieringAccessTier m_accessTier;
    bool m_accessTierHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
