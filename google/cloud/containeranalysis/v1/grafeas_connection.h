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
// source: grafeas/v1/grafeas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_H

#include "google/cloud/containeranalysis/v1/grafeas_connection_idempotency_policy.h"
#include "google/cloud/containeranalysis/v1/internal/grafeas_retry_traits.h"
#include "google/cloud/containeranalysis/v1/internal/grafeas_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GrafeasRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    containeranalysis_v1_internal::GrafeasRetryTraits>;

using GrafeasLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        containeranalysis_v1_internal::GrafeasRetryTraits>;

using GrafeasLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        containeranalysis_v1_internal::GrafeasRetryTraits>;

/**
 * The `GrafeasConnection` object for `GrafeasClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GrafeasClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `GrafeasClient`.
 *
 * To create a concrete instance, see `MakeGrafeasConnection()`.
 *
 * For mocking, see `containeranalysis_v1_mocks::MockGrafeasConnection`.
 */
class GrafeasConnection {
 public:
  virtual ~GrafeasConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<grafeas::v1::Occurrence> GetOccurrence(
      grafeas::v1::GetOccurrenceRequest const& request);

  virtual StreamRange<grafeas::v1::Occurrence> ListOccurrences(
      grafeas::v1::ListOccurrencesRequest request);

  virtual Status DeleteOccurrence(
      grafeas::v1::DeleteOccurrenceRequest const& request);

  virtual StatusOr<grafeas::v1::Occurrence> CreateOccurrence(
      grafeas::v1::CreateOccurrenceRequest const& request);

  virtual StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
  BatchCreateOccurrences(
      grafeas::v1::BatchCreateOccurrencesRequest const& request);

  virtual StatusOr<grafeas::v1::Occurrence> UpdateOccurrence(
      grafeas::v1::UpdateOccurrenceRequest const& request);

  virtual StatusOr<grafeas::v1::Note> GetOccurrenceNote(
      grafeas::v1::GetOccurrenceNoteRequest const& request);

  virtual StatusOr<grafeas::v1::Note> GetNote(
      grafeas::v1::GetNoteRequest const& request);

  virtual StreamRange<grafeas::v1::Note> ListNotes(
      grafeas::v1::ListNotesRequest request);

  virtual Status DeleteNote(grafeas::v1::DeleteNoteRequest const& request);

  virtual StatusOr<grafeas::v1::Note> CreateNote(
      grafeas::v1::CreateNoteRequest const& request);

  virtual StatusOr<grafeas::v1::BatchCreateNotesResponse> BatchCreateNotes(
      grafeas::v1::BatchCreateNotesRequest const& request);

  virtual StatusOr<grafeas::v1::Note> UpdateNote(
      grafeas::v1::UpdateNoteRequest const& request);

  virtual StreamRange<grafeas::v1::Occurrence> ListNoteOccurrences(
      grafeas::v1::ListNoteOccurrencesRequest request);
};

/**
 * A factory function to construct an object of type `GrafeasConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of GrafeasClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `GrafeasConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::containeranalysis_v1::GrafeasPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `GrafeasConnection` created by
 * this function.
 */
std::shared_ptr<GrafeasConnection> MakeGrafeasConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_H
