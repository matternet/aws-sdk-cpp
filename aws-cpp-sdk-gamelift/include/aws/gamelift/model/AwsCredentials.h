﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Temporary access credentials used for uploading game build files to Amazon
   * Web Services. They are valid for a limited time. If they expire before you
   * upload your game build, get a new set by calling
   * <a>RequestUploadCredentials</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AwsCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API AwsCredentials
  {
  public:
    AwsCredentials();
    AwsCredentials(Aws::Utils::Json::JsonView jsonValue);
    AwsCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>Temporary key allowing access to the Amazon Web Services S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>Temporary secret key allowing access to the Amazon Web Services S3
     * account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
