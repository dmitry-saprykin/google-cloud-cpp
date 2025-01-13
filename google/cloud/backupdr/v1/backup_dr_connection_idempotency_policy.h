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
// source: google/cloud/backupdr/v1/backupdr.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/backupdr/v1/backupdr.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace backupdr_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackupDRConnectionIdempotencyPolicy {
 public:
  virtual ~BackupDRConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BackupDRConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListManagementServers(
      google::cloud::backupdr::v1::ListManagementServersRequest request);

  virtual google::cloud::Idempotency GetManagementServer(
      google::cloud::backupdr::v1::GetManagementServerRequest const& request);

  virtual google::cloud::Idempotency CreateManagementServer(
      google::cloud::backupdr::v1::CreateManagementServerRequest const&
          request);

  virtual google::cloud::Idempotency DeleteManagementServer(
      google::cloud::backupdr::v1::DeleteManagementServerRequest const&
          request);

  virtual google::cloud::Idempotency CreateBackupVault(
      google::cloud::backupdr::v1::CreateBackupVaultRequest const& request);

  virtual google::cloud::Idempotency ListBackupVaults(
      google::cloud::backupdr::v1::ListBackupVaultsRequest request);

  virtual google::cloud::Idempotency FetchUsableBackupVaults(
      google::cloud::backupdr::v1::FetchUsableBackupVaultsRequest request);

  virtual google::cloud::Idempotency GetBackupVault(
      google::cloud::backupdr::v1::GetBackupVaultRequest const& request);

  virtual google::cloud::Idempotency UpdateBackupVault(
      google::cloud::backupdr::v1::UpdateBackupVaultRequest const& request);

  virtual google::cloud::Idempotency DeleteBackupVault(
      google::cloud::backupdr::v1::DeleteBackupVaultRequest const& request);

  virtual google::cloud::Idempotency ListDataSources(
      google::cloud::backupdr::v1::ListDataSourcesRequest request);

  virtual google::cloud::Idempotency GetDataSource(
      google::cloud::backupdr::v1::GetDataSourceRequest const& request);

  virtual google::cloud::Idempotency UpdateDataSource(
      google::cloud::backupdr::v1::UpdateDataSourceRequest const& request);

  virtual google::cloud::Idempotency ListBackups(
      google::cloud::backupdr::v1::ListBackupsRequest request);

  virtual google::cloud::Idempotency GetBackup(
      google::cloud::backupdr::v1::GetBackupRequest const& request);

  virtual google::cloud::Idempotency UpdateBackup(
      google::cloud::backupdr::v1::UpdateBackupRequest const& request);

  virtual google::cloud::Idempotency DeleteBackup(
      google::cloud::backupdr::v1::DeleteBackupRequest const& request);

  virtual google::cloud::Idempotency RestoreBackup(
      google::cloud::backupdr::v1::RestoreBackupRequest const& request);

  virtual google::cloud::Idempotency CreateBackupPlan(
      google::cloud::backupdr::v1::CreateBackupPlanRequest const& request);

  virtual google::cloud::Idempotency GetBackupPlan(
      google::cloud::backupdr::v1::GetBackupPlanRequest const& request);

  virtual google::cloud::Idempotency ListBackupPlans(
      google::cloud::backupdr::v1::ListBackupPlansRequest request);

  virtual google::cloud::Idempotency DeleteBackupPlan(
      google::cloud::backupdr::v1::DeleteBackupPlanRequest const& request);

  virtual google::cloud::Idempotency CreateBackupPlanAssociation(
      google::cloud::backupdr::v1::CreateBackupPlanAssociationRequest const&
          request);

  virtual google::cloud::Idempotency GetBackupPlanAssociation(
      google::cloud::backupdr::v1::GetBackupPlanAssociationRequest const&
          request);

  virtual google::cloud::Idempotency ListBackupPlanAssociations(
      google::cloud::backupdr::v1::ListBackupPlanAssociationsRequest request);

  virtual google::cloud::Idempotency DeleteBackupPlanAssociation(
      google::cloud::backupdr::v1::DeleteBackupPlanAssociationRequest const&
          request);

  virtual google::cloud::Idempotency TriggerBackup(
      google::cloud::backupdr::v1::TriggerBackupRequest const& request);

  virtual google::cloud::Idempotency InitializeService(
      google::cloud::backupdr::v1::InitializeServiceRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<BackupDRConnectionIdempotencyPolicy>
MakeDefaultBackupDRConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BACKUPDR_V1_BACKUP_DR_CONNECTION_IDEMPOTENCY_POLICY_H
