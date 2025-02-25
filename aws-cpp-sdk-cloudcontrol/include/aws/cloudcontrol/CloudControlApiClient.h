﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/CloudControlApiErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudcontrol/model/CancelResourceRequestResult.h>
#include <aws/cloudcontrol/model/CreateResourceResult.h>
#include <aws/cloudcontrol/model/DeleteResourceResult.h>
#include <aws/cloudcontrol/model/GetResourceResult.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/cloudcontrol/model/ListResourceRequestsResult.h>
#include <aws/cloudcontrol/model/ListResourcesResult.h>
#include <aws/cloudcontrol/model/UpdateResourceResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CloudControlApi
{

namespace Model
{
        class CancelResourceRequestRequest;
        class CreateResourceRequest;
        class DeleteResourceRequest;
        class GetResourceRequest;
        class GetResourceRequestStatusRequest;
        class ListResourceRequestsRequest;
        class ListResourcesRequest;
        class UpdateResourceRequest;

        typedef Aws::Utils::Outcome<CancelResourceRequestResult, CloudControlApiError> CancelResourceRequestOutcome;
        typedef Aws::Utils::Outcome<CreateResourceResult, CloudControlApiError> CreateResourceOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceResult, CloudControlApiError> DeleteResourceOutcome;
        typedef Aws::Utils::Outcome<GetResourceResult, CloudControlApiError> GetResourceOutcome;
        typedef Aws::Utils::Outcome<GetResourceRequestStatusResult, CloudControlApiError> GetResourceRequestStatusOutcome;
        typedef Aws::Utils::Outcome<ListResourceRequestsResult, CloudControlApiError> ListResourceRequestsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesResult, CloudControlApiError> ListResourcesOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceResult, CloudControlApiError> UpdateResourceOutcome;

        typedef std::future<CancelResourceRequestOutcome> CancelResourceRequestOutcomeCallable;
        typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
        typedef std::future<DeleteResourceOutcome> DeleteResourceOutcomeCallable;
        typedef std::future<GetResourceOutcome> GetResourceOutcomeCallable;
        typedef std::future<GetResourceRequestStatusOutcome> GetResourceRequestStatusOutcomeCallable;
        typedef std::future<ListResourceRequestsOutcome> ListResourceRequestsOutcomeCallable;
        typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
        typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
} // namespace Model

  class CloudControlApiClient;

    typedef std::function<void(const CloudControlApiClient*, const Model::CancelResourceRequestRequest&, const Model::CancelResourceRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelResourceRequestResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::CreateResourceRequest&, const Model::CreateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::DeleteResourceRequest&, const Model::DeleteResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::GetResourceRequest&, const Model::GetResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::GetResourceRequestStatusRequest&, const Model::GetResourceRequestStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceRequestStatusResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::ListResourceRequestsRequest&, const Model::ListResourceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceRequestsResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudControlApiClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;

  /**
   * <p>For more information about Amazon Web Services Cloud Control API, see the <a
   * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon
   * Web Services Cloud Control API User Guide</a>.</p>
   */
  class AWS_CLOUDCONTROLAPI_API CloudControlApiClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudControlApiClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudControlApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudControlApiClient();


        /**
         * <p>Cancels the specified resource operation request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-cancel">Canceling
         * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API
         * User Guide</i>.</p> <p>Only resource operations requests with a status of
         * <code>PENDING</code> or <code>IN_PROGRESS</code> can be canceled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CancelResourceRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelResourceRequestOutcome CancelResourceRequest(const Model::CancelResourceRequestRequest& request) const;

        /**
         * <p>Cancels the specified resource operation request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-cancel">Canceling
         * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API
         * User Guide</i>.</p> <p>Only resource operations requests with a status of
         * <code>PENDING</code> or <code>IN_PROGRESS</code> can be canceled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CancelResourceRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelResourceRequestOutcomeCallable CancelResourceRequestCallable(const Model::CancelResourceRequestRequest& request) const;

        /**
         * <p>Cancels the specified resource operation request. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-cancel">Canceling
         * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API
         * User Guide</i>.</p> <p>Only resource operations requests with a status of
         * <code>PENDING</code> or <code>IN_PROGRESS</code> can be canceled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CancelResourceRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelResourceRequestAsync(const Model::CancelResourceRequestRequest& request, const CancelResourceRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified resource. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html">Creating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource creation request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> type
         * returned by <code>CreateResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates the specified resource. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html">Creating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource creation request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> type
         * returned by <code>CreateResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CreateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request) const;

        /**
         * <p>Creates the specified resource. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html">Creating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource creation request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> type
         * returned by <code>CreateResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/CreateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource. For details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-delete.html">Deleting
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource deletion request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>DeleteResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes the specified resource. For details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-delete.html">Deleting
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource deletion request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>DeleteResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/DeleteResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const Model::DeleteResourceRequest& request) const;

        /**
         * <p>Deletes the specified resource. For details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-delete.html">Deleting
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource deletion request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>DeleteResource</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/DeleteResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceAsync(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the current state of the specified resource. For
         * details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-read.html">Reading
         * a resource's current state</a>.</p> <p>You can use this action to return
         * information about an existing resource in your account and Amazon Web Services
         * Region, whether those resources were provisioned using Cloud Control
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceOutcome GetResource(const Model::GetResourceRequest& request) const;

        /**
         * <p>Returns information about the current state of the specified resource. For
         * details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-read.html">Reading
         * a resource's current state</a>.</p> <p>You can use this action to return
         * information about an existing resource in your account and Amazon Web Services
         * Region, whether those resources were provisioned using Cloud Control
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceOutcomeCallable GetResourceCallable(const Model::GetResourceRequest& request) const;

        /**
         * <p>Returns information about the current state of the specified resource. For
         * details, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-read.html">Reading
         * a resource's current state</a>.</p> <p>You can use this action to return
         * information about an existing resource in your account and Amazon Web Services
         * Region, whether those resources were provisioned using Cloud Control
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceAsync(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of a resource operation request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-track">Tracking
         * the progress of resource operation requests</a> in the <i>Amazon Web Services
         * Cloud Control API User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResourceRequestStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceRequestStatusOutcome GetResourceRequestStatus(const Model::GetResourceRequestStatusRequest& request) const;

        /**
         * <p>Returns the current status of a resource operation request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-track">Tracking
         * the progress of resource operation requests</a> in the <i>Amazon Web Services
         * Cloud Control API User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResourceRequestStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceRequestStatusOutcomeCallable GetResourceRequestStatusCallable(const Model::GetResourceRequestStatusRequest& request) const;

        /**
         * <p>Returns the current status of a resource operation request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-track">Tracking
         * the progress of resource operation requests</a> in the <i>Amazon Web Services
         * Cloud Control API User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/GetResourceRequestStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceRequestStatusAsync(const Model::GetResourceRequestStatusRequest& request, const GetResourceRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns existing resource operation requests. This includes requests of all
         * status types. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-list">Listing
         * active resource operation requests</a> in the <i>Amazon Web Services Cloud
         * Control API User Guide</i>.</p>  <p>Resource operation requests expire
         * after 7 days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResourceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceRequestsOutcome ListResourceRequests(const Model::ListResourceRequestsRequest& request) const;

        /**
         * <p>Returns existing resource operation requests. This includes requests of all
         * status types. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-list">Listing
         * active resource operation requests</a> in the <i>Amazon Web Services Cloud
         * Control API User Guide</i>.</p>  <p>Resource operation requests expire
         * after 7 days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResourceRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceRequestsOutcomeCallable ListResourceRequestsCallable(const Model::ListResourceRequestsRequest& request) const;

        /**
         * <p>Returns existing resource operation requests. This includes requests of all
         * status types. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html#resource-operations-manage-requests-list">Listing
         * active resource operation requests</a> in the <i>Amazon Web Services Cloud
         * Control API User Guide</i>.</p>  <p>Resource operation requests expire
         * after 7 days.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResourceRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceRequestsAsync(const Model::ListResourceRequestsRequest& request, const ListResourceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified resources. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-list.html">Discovering
         * resources</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>You can use this action to return information about existing
         * resources in your account and Amazon Web Services Region, whether those
         * resources were provisioned using Cloud Control API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Returns information about the specified resources. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-list.html">Discovering
         * resources</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>You can use this action to return information about existing
         * resources in your account and Amazon Web Services Region, whether those
         * resources were provisioned using Cloud Control API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Returns information about the specified resources. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-list.html">Discovering
         * resources</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>You can use this action to return information about existing
         * resources in your account and Amazon Web Services Region, whether those
         * resources were provisioned using Cloud Control API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ListResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified property values in the resource.</p> <p>You specify
         * your resource property updates as a list of patch operations contained in a JSON
         * patch document that adheres to the <a
         * href="https://datatracker.ietf.org/doc/html/rfc6902"> <i>RFC 6902 - JavaScript
         * Object Notation (JSON) Patch</i> </a> standard.</p> <p>For details on how Cloud
         * Control API performs resource update operations, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-update.html">Updating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource update request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>UpdateResource</code>.</p> <p>For more information about the properties
         * of a specific resource, refer to the related topic for the resource in the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource
         * and property types reference</a> in the <i>CloudFormation Users
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates the specified property values in the resource.</p> <p>You specify
         * your resource property updates as a list of patch operations contained in a JSON
         * patch document that adheres to the <a
         * href="https://datatracker.ietf.org/doc/html/rfc6902"> <i>RFC 6902 - JavaScript
         * Object Notation (JSON) Patch</i> </a> standard.</p> <p>For details on how Cloud
         * Control API performs resource update operations, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-update.html">Updating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource update request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>UpdateResource</code>.</p> <p>For more information about the properties
         * of a specific resource, refer to the related topic for the resource in the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource
         * and property types reference</a> in the <i>CloudFormation Users
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/UpdateResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * <p>Updates the specified property values in the resource.</p> <p>You specify
         * your resource property updates as a list of patch operations contained in a JSON
         * patch document that adheres to the <a
         * href="https://datatracker.ietf.org/doc/html/rfc6902"> <i>RFC 6902 - JavaScript
         * Object Notation (JSON) Patch</i> </a> standard.</p> <p>For details on how Cloud
         * Control API performs resource update operations, see <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-update.html">Updating
         * a resource</a> in the <i>Amazon Web Services Cloud Control API User
         * Guide</i>.</p> <p>After you have initiated a resource update request, you can
         * monitor the progress of your request by calling <a
         * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
         * using the <code>RequestToken</code> of the <code>ProgressEvent</code> returned
         * by <code>UpdateResource</code>.</p> <p>For more information about the properties
         * of a specific resource, refer to the related topic for the resource in the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource
         * and property types reference</a> in the <i>CloudFormation Users
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/UpdateResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelResourceRequestAsyncHelper(const Model::CancelResourceRequestRequest& request, const CancelResourceRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceAsyncHelper(const Model::CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceAsyncHelper(const Model::DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceAsyncHelper(const Model::GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceRequestStatusAsyncHelper(const Model::GetResourceRequestStatusRequest& request, const GetResourceRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceRequestsAsyncHelper(const Model::ListResourceRequestsRequest& request, const ListResourceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceAsyncHelper(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudControlApi
} // namespace Aws
