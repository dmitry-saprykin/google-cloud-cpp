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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_TAXONOMY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_TAXONOMY_CONNECTION_H

#include "google/cloud/dataplex/v1/data_taxonomy_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataTaxonomyServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataTaxonomyServiceClient`. To do
 * so, construct an object of type `DataTaxonomyServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDataTaxonomyServiceConnection
    : public dataplex_v1::DataTaxonomyServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>,
      CreateDataTaxonomy,
      (google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataTaxonomy>>,
      UpdateDataTaxonomy,
      (google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteDataTaxonomy,
      (google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::DataTaxonomy>),
              ListDataTaxonomies,
              (google::cloud::dataplex::v1::ListDataTaxonomiesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::DataTaxonomy>, GetDataTaxonomy,
      (google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>,
      CreateDataAttributeBinding,
      (google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>>,
      UpdateDataAttributeBinding,
      (google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteDataAttributeBinding,
      (google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::dataplex::v1::DataAttributeBinding>),
      ListDataAttributeBindings,
      (google::cloud::dataplex::v1::ListDataAttributeBindingsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>,
      GetDataAttributeBinding,
      (google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>,
      CreateDataAttribute,
      (google::cloud::dataplex::v1::CreateDataAttributeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::DataAttribute>>,
      UpdateDataAttribute,
      (google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>,
      DeleteDataAttribute,
      (google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::dataplex::v1::DataAttribute>),
              ListDataAttributes,
              (google::cloud::dataplex::v1::ListDataAttributesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::DataAttribute>, GetDataAttribute,
      (google::cloud::dataplex::v1::GetDataAttributeRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_MOCKS_MOCK_DATA_TAXONOMY_CONNECTION_H
