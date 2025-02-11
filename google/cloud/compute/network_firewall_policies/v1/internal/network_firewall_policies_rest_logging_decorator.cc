// Copyright 2023 Google LLC
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
// source:
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkFirewallPoliciesRestLogging::NetworkFirewallPoliciesRestLogging(
    std::shared_ptr<NetworkFirewallPoliciesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncAddAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddAssociationRequest const& request) {
        return child_->AsyncAddAssociation(cq, std::move(rest_context),
                                           std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::AddAssociation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddAssociationRequest const& request) {
        return child_->AddAssociation(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncAddPacketMirroringRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddPacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddPacketMirroringRuleRequest const& request) {
        return child_->AsyncAddPacketMirroringRule(cq, std::move(rest_context),
                                                   std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::AddPacketMirroringRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddPacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddPacketMirroringRuleRequest const& request) {
        return child_->AddPacketMirroringRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddRuleRequest const& request) {
        return child_->AsyncAddRule(cq, std::move(rest_context),
                                    std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::AddRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddRuleRequest const& request) {
        return child_->AddRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkFirewallPolicyAggregatedList>
NetworkFirewallPoliciesRestLogging::AggregatedListNetworkFirewallPolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AggregatedListNetworkFirewallPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AggregatedListNetworkFirewallPoliciesRequest const& request) {
        return child_->AggregatedListNetworkFirewallPolicies(rest_context,
                                                             options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncCloneRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 CloneRulesRequest const& request) {
        return child_->AsyncCloneRules(cq, std::move(rest_context),
                                       std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::CloneRules(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 CloneRulesRequest const& request) {
        return child_->CloneRules(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncDeleteFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 DeleteFirewallPolicyRequest const& request) {
        return child_->AsyncDeleteFirewallPolicy(cq, std::move(rest_context),
                                                 std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::DeleteFirewallPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 DeleteFirewallPolicyRequest const& request) {
        return child_->DeleteFirewallPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
NetworkFirewallPoliciesRestLogging::GetFirewallPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetFirewallPolicyRequest const& request) {
        return child_->GetFirewallPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
NetworkFirewallPoliciesRestLogging::GetAssociation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetAssociationRequest const& request) {
        return child_->GetAssociation(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
NetworkFirewallPoliciesRestLogging::GetPacketMirroringRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetPacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetPacketMirroringRuleRequest const& request) {
        return child_->GetPacketMirroringRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
NetworkFirewallPoliciesRestLogging::GetRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetRuleRequest const& request) {
        return child_->GetRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncInsertFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 InsertFirewallPolicyRequest const& request) {
        return child_->AsyncInsertFirewallPolicy(cq, std::move(rest_context),
                                                 std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::InsertFirewallPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        InsertFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 InsertFirewallPolicyRequest const& request) {
        return child_->InsertFirewallPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
NetworkFirewallPoliciesRestLogging::ListNetworkFirewallPolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        ListNetworkFirewallPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 ListNetworkFirewallPoliciesRequest const& request) {
        return child_->ListNetworkFirewallPolicies(rest_context, options,
                                                   request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncPatchFirewallPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchFirewallPolicyRequest const& request) {
        return child_->AsyncPatchFirewallPolicy(cq, std::move(rest_context),
                                                std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::PatchFirewallPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchFirewallPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchFirewallPolicyRequest const& request) {
        return child_->PatchFirewallPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncPatchPacketMirroringRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchPacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchPacketMirroringRuleRequest const& request) {
        return child_->AsyncPatchPacketMirroringRule(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::PatchPacketMirroringRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchPacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchPacketMirroringRuleRequest const& request) {
        return child_->PatchPacketMirroringRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchRuleRequest const& request) {
        return child_->AsyncPatchRule(cq, std::move(rest_context),
                                      std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::PatchRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchRuleRequest const& request) {
        return child_->PatchRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncRemoveAssociation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveAssociationRequest const& request) {
        return child_->AsyncRemoveAssociation(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::RemoveAssociation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveAssociationRequest const& request) {
        return child_->RemoveAssociation(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncRemovePacketMirroringRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemovePacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemovePacketMirroringRuleRequest const& request) {
        return child_->AsyncRemovePacketMirroringRule(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::RemovePacketMirroringRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemovePacketMirroringRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemovePacketMirroringRuleRequest const& request) {
        return child_->RemovePacketMirroringRule(rest_context, options,
                                                 request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveRuleRequest const& request) {
        return child_->AsyncRemoveRule(cq, std::move(rest_context),
                                       std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkFirewallPoliciesRestLogging::RemoveRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveRuleRequest const& request) {
        return child_->RemoveRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkFirewallPoliciesRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> NetworkFirewallPoliciesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
