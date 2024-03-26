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
// source: google/cloud/dataplex/v1/catalog.proto

#include "google/cloud/dataplex/v1/catalog_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceClient::CatalogServiceClient(
    std::shared_ptr<CatalogServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CatalogServiceClient::~CatalogServiceClient() = default;

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::CreateEntryType(
    std::string const& parent,
    google::cloud::dataplex::v1::EntryType const& entry_type,
    std::string const& entry_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryTypeRequest request;
  request.set_parent(parent);
  *request.mutable_entry_type() = entry_type;
  request.set_entry_type_id(entry_type_id);
  return connection_->CreateEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::CreateEntryType(
    google::cloud::dataplex::v1::CreateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::UpdateEntryType(
    google::cloud::dataplex::v1::EntryType const& entry_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryTypeRequest request;
  *request.mutable_entry_type() = entry_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryType>>
CatalogServiceClient::UpdateEntryType(
    google::cloud::dataplex::v1::UpdateEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryTypeRequest request;
  request.set_name(name);
  return connection_->DeleteEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryType(
    google::cloud::dataplex::v1::DeleteEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryType(request);
}

StreamRange<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::ListEntryTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntryTypesRequest request;
  request.set_parent(parent);
  return connection_->ListEntryTypes(request);
}

StreamRange<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::ListEntryTypes(
    google::cloud::dataplex::v1::ListEntryTypesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntryTypes(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::GetEntryType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryTypeRequest request;
  request.set_name(name);
  return connection_->GetEntryType(request);
}

StatusOr<google::cloud::dataplex::v1::EntryType>
CatalogServiceClient::GetEntryType(
    google::cloud::dataplex::v1::GetEntryTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntryType(request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::CreateAspectType(
    std::string const& parent,
    google::cloud::dataplex::v1::AspectType const& aspect_type,
    std::string const& aspect_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateAspectTypeRequest request;
  request.set_parent(parent);
  *request.mutable_aspect_type() = aspect_type;
  request.set_aspect_type_id(aspect_type_id);
  return connection_->CreateAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::CreateAspectType(
    google::cloud::dataplex::v1::CreateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::UpdateAspectType(
    google::cloud::dataplex::v1::AspectType const& aspect_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateAspectTypeRequest request;
  *request.mutable_aspect_type() = aspect_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::AspectType>>
CatalogServiceClient::UpdateAspectType(
    google::cloud::dataplex::v1::UpdateAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteAspectType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteAspectTypeRequest request;
  request.set_name(name);
  return connection_->DeleteAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteAspectType(
    google::cloud::dataplex::v1::DeleteAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAspectType(request);
}

StreamRange<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::ListAspectTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListAspectTypesRequest request;
  request.set_parent(parent);
  return connection_->ListAspectTypes(request);
}

StreamRange<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::ListAspectTypes(
    google::cloud::dataplex::v1::ListAspectTypesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAspectTypes(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::GetAspectType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetAspectTypeRequest request;
  request.set_name(name);
  return connection_->GetAspectType(request);
}

StatusOr<google::cloud::dataplex::v1::AspectType>
CatalogServiceClient::GetAspectType(
    google::cloud::dataplex::v1::GetAspectTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAspectType(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::CreateEntryGroup(
    std::string const& parent,
    google::cloud::dataplex::v1::EntryGroup const& entry_group,
    std::string const& entry_group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryGroupRequest request;
  request.set_parent(parent);
  *request.mutable_entry_group() = entry_group;
  request.set_entry_group_id(entry_group_id);
  return connection_->CreateEntryGroup(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::CreateEntryGroup(
    google::cloud::dataplex::v1::CreateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryGroup(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::UpdateEntryGroup(
    google::cloud::dataplex::v1::EntryGroup const& entry_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryGroupRequest request;
  *request.mutable_entry_group() = entry_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryGroup(request);
}

future<StatusOr<google::cloud::dataplex::v1::EntryGroup>>
CatalogServiceClient::UpdateEntryGroup(
    google::cloud::dataplex::v1::UpdateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryGroup(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryGroupRequest request;
  request.set_name(name);
  return connection_->DeleteEntryGroup(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
CatalogServiceClient::DeleteEntryGroup(
    google::cloud::dataplex::v1::DeleteEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryGroup(request);
}

StreamRange<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::ListEntryGroups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntryGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListEntryGroups(request);
}

StreamRange<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::ListEntryGroups(
    google::cloud::dataplex::v1::ListEntryGroupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntryGroups(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::GetEntryGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryGroupRequest request;
  request.set_name(name);
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::dataplex::v1::EntryGroup>
CatalogServiceClient::GetEntryGroup(
    google::cloud::dataplex::v1::GetEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::CreateEntry(
    std::string const& parent, google::cloud::dataplex::v1::Entry const& entry,
    std::string const& entry_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::CreateEntryRequest request;
  request.set_parent(parent);
  *request.mutable_entry() = entry;
  request.set_entry_id(entry_id);
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::CreateEntry(
    google::cloud::dataplex::v1::CreateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::UpdateEntry(
    google::cloud::dataplex::v1::Entry const& entry,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::UpdateEntryRequest request;
  *request.mutable_entry() = entry;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::UpdateEntry(
    google::cloud::dataplex::v1::UpdateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::DeleteEntry(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::DeleteEntryRequest request;
  request.set_name(name);
  return connection_->DeleteEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::DeleteEntry(
    google::cloud::dataplex::v1::DeleteEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntry(request);
}

StreamRange<google::cloud::dataplex::v1::Entry>
CatalogServiceClient::ListEntries(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::ListEntriesRequest request;
  request.set_parent(parent);
  return connection_->ListEntries(request);
}

StreamRange<google::cloud::dataplex::v1::Entry>
CatalogServiceClient::ListEntries(
    google::cloud::dataplex::v1::ListEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntries(std::move(request));
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::GetEntry(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::GetEntryRequest request;
  request.set_name(name);
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::GetEntry(
    google::cloud::dataplex::v1::GetEntryRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::dataplex::v1::Entry> CatalogServiceClient::LookupEntry(
    google::cloud::dataplex::v1::LookupEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupEntry(request);
}

StreamRange<google::cloud::dataplex::v1::SearchEntriesResult>
CatalogServiceClient::SearchEntries(std::string const& name,
                                    std::string const& query, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataplex::v1::SearchEntriesRequest request;
  request.set_name(name);
  request.set_query(query);
  return connection_->SearchEntries(request);
}

StreamRange<google::cloud::dataplex::v1::SearchEntriesResult>
CatalogServiceClient::SearchEntries(
    google::cloud::dataplex::v1::SearchEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchEntries(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google
