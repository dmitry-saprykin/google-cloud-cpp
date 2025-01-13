// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H

#include "google/cloud/spanner/admin/instance_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/internal/instance_admin_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <google/spanner/admin/instance/v1/spanner_instance_admin.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `InstanceAdminConnection`.
class InstanceAdminRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<InstanceAdminRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `InstanceAdminConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstanceAdminLimitedErrorCountRetryPolicy
    : public InstanceAdminRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit InstanceAdminLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  InstanceAdminLimitedErrorCountRetryPolicy(
      InstanceAdminLimitedErrorCountRetryPolicy&& rhs) noexcept
      : InstanceAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  InstanceAdminLimitedErrorCountRetryPolicy(
      InstanceAdminLimitedErrorCountRetryPolicy const& rhs) noexcept
      : InstanceAdminLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<InstanceAdminRetryPolicy> clone() const override {
    return std::make_unique<InstanceAdminLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstanceAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      spanner_admin_internal::InstanceAdminRetryTraits>
      impl_;
};

/**
 * A retry policy for `InstanceAdminConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class InstanceAdminLimitedTimeRetryPolicy : public InstanceAdminRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit InstanceAdminLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  InstanceAdminLimitedTimeRetryPolicy(
      InstanceAdminLimitedTimeRetryPolicy&& rhs) noexcept
      : InstanceAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  InstanceAdminLimitedTimeRetryPolicy(
      InstanceAdminLimitedTimeRetryPolicy const& rhs) noexcept
      : InstanceAdminLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<InstanceAdminRetryPolicy> clone() const override {
    return std::make_unique<InstanceAdminLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = InstanceAdminRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      spanner_admin_internal::InstanceAdminRetryTraits>
      impl_;
};

/**
 * The `InstanceAdminConnection` object for `InstanceAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `InstanceAdminClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `InstanceAdminClient`.
 *
 * To create a concrete instance, see `MakeInstanceAdminConnection()`.
 *
 * For mocking, see `spanner_admin_mocks::MockInstanceAdminConnection`.
 */
class InstanceAdminConnection {
 public:
  virtual ~InstanceAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest request);

  virtual StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  CreateInstanceConfig(
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateInstanceConfig(
      NoAwaitTag,
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  CreateInstanceConfig(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  UpdateInstanceConfig(
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstanceConfig(
      NoAwaitTag,
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  UpdateInstanceConfig(google::longrunning::Operation const& operation);

  virtual Status DeleteInstanceConfig(
      google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
          request);

  virtual StreamRange<google::longrunning::Operation>
  ListInstanceConfigOperations(
      google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
          request);

  virtual StreamRange<google::spanner::admin::instance::v1::Instance>
  ListInstances(
      google::spanner::admin::instance::v1::ListInstancesRequest request);

  virtual StreamRange<google::spanner::admin::instance::v1::InstancePartition>
  ListInstancePartitions(
      google::spanner::admin::instance::v1::ListInstancePartitionsRequest
          request);

  virtual StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::spanner::admin::instance::v1::GetInstanceRequest const& request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(google::longrunning::Operation const& operation);

  virtual Status DeleteInstance(
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<google::spanner::admin::instance::v1::InstancePartition>
  GetInstancePartition(
      google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
          request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  CreateInstancePartition(google::spanner::admin::instance::v1::
                              CreateInstancePartitionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateInstancePartition(
      NoAwaitTag, google::spanner::admin::instance::v1::
                      CreateInstancePartitionRequest const& request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  CreateInstancePartition(google::longrunning::Operation const& operation);

  virtual Status DeleteInstancePartition(
      google::spanner::admin::instance::v1::
          DeleteInstancePartitionRequest const& request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  UpdateInstancePartition(google::spanner::admin::instance::v1::
                              UpdateInstancePartitionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstancePartition(
      NoAwaitTag, google::spanner::admin::instance::v1::
                      UpdateInstancePartitionRequest const& request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
  UpdateInstancePartition(google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation>
  ListInstancePartitionOperations(
      google::spanner::admin::instance::v1::
          ListInstancePartitionOperationsRequest request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
  MoveInstance(
      google::spanner::admin::instance::v1::MoveInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> MoveInstance(
      NoAwaitTag,
      google::spanner::admin::instance::v1::MoveInstanceRequest const& request);

  virtual future<
      StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
  MoveInstance(google::longrunning::Operation const& operation);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `InstanceAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of InstanceAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `InstanceAdminConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::spanner_admin::InstanceAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `InstanceAdminConnection` created by
 * this function.
 */
std::shared_ptr<InstanceAdminConnection> MakeInstanceAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H
