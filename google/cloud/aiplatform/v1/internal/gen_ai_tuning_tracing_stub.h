// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/genai_tuning_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/gen_ai_tuning_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class GenAiTuningServiceTracingStub : public GenAiTuningServiceStub {
 public:
  ~GenAiTuningServiceTracingStub() override = default;

  explicit GenAiTuningServiceTracingStub(
      std::shared_ptr<GenAiTuningServiceStub> child);

  StatusOr<google::cloud::aiplatform::v1::TuningJob> CreateTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TuningJob> GetTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTuningJobsResponse>
  ListTuningJobs(grpc::ClientContext& context, Options const& options,
                 google::cloud::aiplatform::v1::ListTuningJobsRequest const&
                     request) override;

  Status CancelTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelTuningJobRequest const& request)
      override;

 private:
  std::shared_ptr<GenAiTuningServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<GenAiTuningServiceStub> MakeGenAiTuningServiceTracingStub(
    std::shared_ptr<GenAiTuningServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_TRACING_STUB_H
