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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#include "google/cloud/dataplex/v1/internal/data_taxonomy_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataTaxonomyServiceTracingConnection::DataTaxonomyServiceTracingConnection(
    std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
DataTaxonomyServiceTracingConnection::CreateDataTaxonomy(
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::CreateDataTaxonomy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDataTaxonomy(request));
}

future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>
DataTaxonomyServiceTracingConnection::UpdateDataTaxonomy(
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::UpdateDataTaxonomy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDataTaxonomy(request));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataTaxonomyServiceTracingConnection::DeleteDataTaxonomy(
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::DeleteDataTaxonomy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDataTaxonomy(request));
}

StreamRange<google::cloud::dataplex::v1::DataTaxonomy>
DataTaxonomyServiceTracingConnection::ListDataTaxonomies(
    google::cloud::dataplex::v1::ListDataTaxonomiesRequest request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::ListDataTaxonomies");
  internal::OTelScope scope(span);
  auto sr = child_->ListDataTaxonomies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dataplex::v1::DataTaxonomy>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::dataplex::v1::DataTaxonomy>
DataTaxonomyServiceTracingConnection::GetDataTaxonomy(
    google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::GetDataTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataTaxonomy(request));
}

future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
DataTaxonomyServiceTracingConnection::CreateDataAttributeBinding(
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::CreateDataAttributeBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDataAttributeBinding(request));
}

future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>
DataTaxonomyServiceTracingConnection::UpdateDataAttributeBinding(
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::UpdateDataAttributeBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDataAttributeBinding(request));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataTaxonomyServiceTracingConnection::DeleteDataAttributeBinding(
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::DeleteDataAttributeBinding");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDataAttributeBinding(request));
}

StreamRange<google::cloud::dataplex::v1::DataAttributeBinding>
DataTaxonomyServiceTracingConnection::ListDataAttributeBindings(
    google::cloud::dataplex::v1::ListDataAttributeBindingsRequest request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::ListDataAttributeBindings");
  internal::OTelScope scope(span);
  auto sr = child_->ListDataAttributeBindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dataplex::v1::DataAttributeBinding>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
DataTaxonomyServiceTracingConnection::GetDataAttributeBinding(
    google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::GetDataAttributeBinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataAttributeBinding(request));
}

future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
DataTaxonomyServiceTracingConnection::CreateDataAttribute(
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::CreateDataAttribute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDataAttribute(request));
}

future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>
DataTaxonomyServiceTracingConnection::UpdateDataAttribute(
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::UpdateDataAttribute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDataAttribute(request));
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataTaxonomyServiceTracingConnection::DeleteDataAttribute(
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::DeleteDataAttribute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDataAttribute(request));
}

StreamRange<google::cloud::dataplex::v1::DataAttribute>
DataTaxonomyServiceTracingConnection::ListDataAttributes(
    google::cloud::dataplex::v1::ListDataAttributesRequest request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::ListDataAttributes");
  internal::OTelScope scope(span);
  auto sr = child_->ListDataAttributes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dataplex::v1::DataAttribute>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::dataplex::v1::DataAttribute>
DataTaxonomyServiceTracingConnection::GetDataAttribute(
    google::cloud::dataplex::v1::GetDataAttributeRequest const& request) {
  auto span = internal::MakeSpan(
      "dataplex_v1::DataTaxonomyServiceConnection::GetDataAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataAttribute(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection>
MakeDataTaxonomyServiceTracingConnection(
    std::shared_ptr<dataplex_v1::DataTaxonomyServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<DataTaxonomyServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
