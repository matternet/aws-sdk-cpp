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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ScheduleLambdaFunctionFailedCause.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides details for the <code>ScheduleLambdaFunctionFailed</code> event.</p>
   */
  class AWS_SWF_API ScheduleLambdaFunctionFailedEventAttributes
  {
  public:
    ScheduleLambdaFunctionFailedEventAttributes();
    ScheduleLambdaFunctionFailedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    ScheduleLambdaFunctionFailedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique Amazon SWF ID of the AWS Lambda task.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the scheduled AWS Lambda function.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline const ScheduleLambdaFunctionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(const ScheduleLambdaFunctionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline void SetCause(ScheduleLambdaFunctionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithCause(const ScheduleLambdaFunctionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note>If <b>cause</b> is set to
     * OPERATION_NOT_PERMITTED, the decision failed because it lacked sufficient
     * permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a>.</note>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithCause(ScheduleLambdaFunctionFailedCause&& value) { SetCause(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this AWS Lambda function. This
     * information can be useful for diagnosing problems by tracing back the chain of
     * events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this AWS Lambda function. This
     * information can be useful for diagnosing problems by tracing back the chain of
     * events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this AWS Lambda function. This
     * information can be useful for diagnosing problems by tracing back the chain of
     * events leading up to this event.</p>
     */
    inline ScheduleLambdaFunctionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ScheduleLambdaFunctionFailedCause m_cause;
    bool m_causeHasBeenSet;
    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
