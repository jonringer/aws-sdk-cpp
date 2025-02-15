﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The Transaction Fraud Insights (TFI) model performance score. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TFIModelPerformance">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API TFIModelPerformance
  {
  public:
    TFIModelPerformance();
    TFIModelPerformance(Aws::Utils::Json::JsonView jsonValue);
    TFIModelPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The area under the curve (auc). This summarizes the total positive rate
     * (tpr) and false positive rate (FPR) across all possible model score thresholds.
     * </p>
     */
    inline double GetAuc() const{ return m_auc; }

    /**
     * <p> The area under the curve (auc). This summarizes the total positive rate
     * (tpr) and false positive rate (FPR) across all possible model score thresholds.
     * </p>
     */
    inline bool AucHasBeenSet() const { return m_aucHasBeenSet; }

    /**
     * <p> The area under the curve (auc). This summarizes the total positive rate
     * (tpr) and false positive rate (FPR) across all possible model score thresholds.
     * </p>
     */
    inline void SetAuc(double value) { m_aucHasBeenSet = true; m_auc = value; }

    /**
     * <p> The area under the curve (auc). This summarizes the total positive rate
     * (tpr) and false positive rate (FPR) across all possible model score thresholds.
     * </p>
     */
    inline TFIModelPerformance& WithAuc(double value) { SetAuc(value); return *this;}

  private:

    double m_auc;
    bool m_aucHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
