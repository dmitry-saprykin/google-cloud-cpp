// Copyright 2022 Google LLC
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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analytics_hub_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AnalyticsHubServiceConnectionIdempotencyPolicy::
    ~AnalyticsHubServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultAnalyticsHubServiceConnectionIdempotencyPolicy
    : public AnalyticsHubServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultAnalyticsHubServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultAnalyticsHubServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          CreateDataExchangeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          UpdateDataExchangeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetListing(
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                           : Idempotency::kIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy>
MakeDefaultAnalyticsHubServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultAnalyticsHubServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
