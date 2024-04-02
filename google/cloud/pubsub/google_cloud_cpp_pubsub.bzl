# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_pubsub - DO NOT EDIT."""

google_cloud_cpp_pubsub_hdrs = [
    "ack_handler.h",
    "admin/internal/subscription_admin_auth_decorator.h",
    "admin/internal/subscription_admin_connection_impl.h",
    "admin/internal/subscription_admin_logging_decorator.h",
    "admin/internal/subscription_admin_metadata_decorator.h",
    "admin/internal/subscription_admin_option_defaults.h",
    "admin/internal/subscription_admin_retry_traits.h",
    "admin/internal/subscription_admin_stub.h",
    "admin/internal/subscription_admin_stub_factory.h",
    "admin/internal/subscription_admin_tracing_connection.h",
    "admin/internal/subscription_admin_tracing_stub.h",
    "admin/internal/topic_admin_auth_decorator.h",
    "admin/internal/topic_admin_connection_impl.h",
    "admin/internal/topic_admin_logging_decorator.h",
    "admin/internal/topic_admin_metadata_decorator.h",
    "admin/internal/topic_admin_option_defaults.h",
    "admin/internal/topic_admin_retry_traits.h",
    "admin/internal/topic_admin_stub.h",
    "admin/internal/topic_admin_stub_factory.h",
    "admin/internal/topic_admin_tracing_connection.h",
    "admin/internal/topic_admin_tracing_stub.h",
    "admin/subscription_admin_client.h",
    "admin/subscription_admin_connection.h",
    "admin/subscription_admin_connection_idempotency_policy.h",
    "admin/subscription_admin_options.h",
    "admin/topic_admin_client.h",
    "admin/topic_admin_connection.h",
    "admin/topic_admin_connection_idempotency_policy.h",
    "admin/topic_admin_options.h",
    "application_callback.h",
    "backoff_policy.h",
    "blocking_publisher.h",
    "blocking_publisher_connection.h",
    "connection_options.h",
    "exactly_once_ack_handler.h",
    "internal/ack_handler_wrapper.h",
    "internal/batch_callback.h",
    "internal/batch_callback_wrapper.h",
    "internal/batch_sink.h",
    "internal/batching_publisher_connection.h",
    "internal/batching_publisher_tracing_connection.h",
    "internal/blocking_publisher_connection_impl.h",
    "internal/blocking_publisher_tracing_connection.h",
    "internal/containing_publisher_connection.h",
    "internal/create_channel.h",
    "internal/default_batch_callback.h",
    "internal/default_batch_sink.h",
    "internal/default_message_callback.h",
    "internal/default_pull_ack_handler.h",
    "internal/default_pull_lease_manager.h",
    "internal/defaults.h",
    "internal/exactly_once_policies.h",
    "internal/extend_leases_with_retry.h",
    "internal/flow_controlled_publisher_connection.h",
    "internal/flow_controlled_publisher_tracing_connection.h",
    "internal/message_callback.h",
    "internal/message_carrier.h",
    "internal/message_propagator.h",
    "internal/noop_message_callback.h",
    "internal/ordering_key_publisher_connection.h",
    "internal/publisher_auth_decorator.h",
    "internal/publisher_logging_decorator.h",
    "internal/publisher_metadata_decorator.h",
    "internal/publisher_round_robin_decorator.h",
    "internal/publisher_stub.h",
    "internal/publisher_stub_factory.h",
    "internal/publisher_tracing_connection.h",
    "internal/publisher_tracing_stub.h",
    "internal/pull_ack_handler_factory.h",
    "internal/pull_lease_manager.h",
    "internal/pull_lease_manager_factory.h",
    "internal/rejects_with_ordering_key.h",
    "internal/schema_auth_decorator.h",
    "internal/schema_connection_impl.h",
    "internal/schema_logging_decorator.h",
    "internal/schema_metadata_decorator.h",
    "internal/schema_option_defaults.h",
    "internal/schema_retry_traits.h",
    "internal/schema_stub.h",
    "internal/schema_stub_factory.h",
    "internal/schema_tracing_connection.h",
    "internal/schema_tracing_stub.h",
    "internal/sequential_batch_sink.h",
    "internal/session_shutdown_manager.h",
    "internal/span.h",
    "internal/streaming_subscription_batch_source.h",
    "internal/subscriber_auth_decorator.h",
    "internal/subscriber_connection_impl.h",
    "internal/subscriber_logging_decorator.h",
    "internal/subscriber_metadata_decorator.h",
    "internal/subscriber_round_robin_decorator.h",
    "internal/subscriber_stub.h",
    "internal/subscriber_stub_factory.h",
    "internal/subscriber_tracing_connection.h",
    "internal/subscriber_tracing_stub.h",
    "internal/subscription_batch_source.h",
    "internal/subscription_concurrency_control.h",
    "internal/subscription_lease_management.h",
    "internal/subscription_message_queue.h",
    "internal/subscription_message_source.h",
    "internal/subscription_session.h",
    "internal/tracing_batch_callback.h",
    "internal/tracing_batch_sink.h",
    "internal/tracing_exactly_once_ack_handler.h",
    "internal/tracing_helpers.h",
    "internal/tracing_pull_ack_handler.h",
    "internal/tracing_pull_lease_manager.h",
    "message.h",
    "options.h",
    "publisher.h",
    "publisher_connection.h",
    "publisher_options.h",
    "pull_ack_handler.h",
    "pull_response.h",
    "retry_policy.h",
    "schema.h",
    "schema_client.h",
    "schema_connection.h",
    "schema_connection_idempotency_policy.h",
    "schema_options.h",
    "snapshot.h",
    "snapshot_builder.h",
    "subscriber.h",
    "subscriber_connection.h",
    "subscriber_options.h",
    "subscription.h",
    "subscription_admin_client.h",
    "subscription_admin_connection.h",
    "subscription_builder.h",
    "topic.h",
    "topic_admin_client.h",
    "topic_admin_connection.h",
    "topic_builder.h",
    "version.h",
    "version_info.h",
]

google_cloud_cpp_pubsub_srcs = [
    "ack_handler.cc",
    "admin/internal/subscription_admin_auth_decorator.cc",
    "admin/internal/subscription_admin_connection_impl.cc",
    "admin/internal/subscription_admin_logging_decorator.cc",
    "admin/internal/subscription_admin_metadata_decorator.cc",
    "admin/internal/subscription_admin_option_defaults.cc",
    "admin/internal/subscription_admin_stub.cc",
    "admin/internal/subscription_admin_stub_factory.cc",
    "admin/internal/subscription_admin_tracing_connection.cc",
    "admin/internal/subscription_admin_tracing_stub.cc",
    "admin/internal/topic_admin_auth_decorator.cc",
    "admin/internal/topic_admin_connection_impl.cc",
    "admin/internal/topic_admin_logging_decorator.cc",
    "admin/internal/topic_admin_metadata_decorator.cc",
    "admin/internal/topic_admin_option_defaults.cc",
    "admin/internal/topic_admin_stub.cc",
    "admin/internal/topic_admin_stub_factory.cc",
    "admin/internal/topic_admin_tracing_connection.cc",
    "admin/internal/topic_admin_tracing_stub.cc",
    "admin/subscription_admin_client.cc",
    "admin/subscription_admin_connection.cc",
    "admin/subscription_admin_connection_idempotency_policy.cc",
    "admin/topic_admin_client.cc",
    "admin/topic_admin_connection.cc",
    "admin/topic_admin_connection_idempotency_policy.cc",
    "blocking_publisher.cc",
    "blocking_publisher_connection.cc",
    "connection_options.cc",
    "exactly_once_ack_handler.cc",
    "internal/ack_handler_wrapper.cc",
    "internal/batching_publisher_connection.cc",
    "internal/batching_publisher_tracing_connection.cc",
    "internal/blocking_publisher_connection_impl.cc",
    "internal/blocking_publisher_tracing_connection.cc",
    "internal/create_channel.cc",
    "internal/default_batch_sink.cc",
    "internal/default_pull_ack_handler.cc",
    "internal/default_pull_lease_manager.cc",
    "internal/defaults.cc",
    "internal/exactly_once_policies.cc",
    "internal/extend_leases_with_retry.cc",
    "internal/flow_controlled_publisher_connection.cc",
    "internal/flow_controlled_publisher_tracing_connection.cc",
    "internal/message_carrier.cc",
    "internal/message_propagator.cc",
    "internal/ordering_key_publisher_connection.cc",
    "internal/publisher_auth_decorator.cc",
    "internal/publisher_logging_decorator.cc",
    "internal/publisher_metadata_decorator.cc",
    "internal/publisher_round_robin_decorator.cc",
    "internal/publisher_stub.cc",
    "internal/publisher_stub_factory.cc",
    "internal/publisher_tracing_connection.cc",
    "internal/publisher_tracing_stub.cc",
    "internal/pull_ack_handler_factory.cc",
    "internal/pull_lease_manager_factory.cc",
    "internal/rejects_with_ordering_key.cc",
    "internal/schema_auth_decorator.cc",
    "internal/schema_connection_impl.cc",
    "internal/schema_logging_decorator.cc",
    "internal/schema_metadata_decorator.cc",
    "internal/schema_option_defaults.cc",
    "internal/schema_stub.cc",
    "internal/schema_stub_factory.cc",
    "internal/schema_tracing_connection.cc",
    "internal/schema_tracing_stub.cc",
    "internal/sequential_batch_sink.cc",
    "internal/session_shutdown_manager.cc",
    "internal/streaming_subscription_batch_source.cc",
    "internal/subscriber_auth_decorator.cc",
    "internal/subscriber_connection_impl.cc",
    "internal/subscriber_logging_decorator.cc",
    "internal/subscriber_metadata_decorator.cc",
    "internal/subscriber_round_robin_decorator.cc",
    "internal/subscriber_stub.cc",
    "internal/subscriber_stub_factory.cc",
    "internal/subscriber_tracing_connection.cc",
    "internal/subscriber_tracing_stub.cc",
    "internal/subscription_concurrency_control.cc",
    "internal/subscription_lease_management.cc",
    "internal/subscription_message_queue.cc",
    "internal/subscription_session.cc",
    "internal/tracing_batch_callback.cc",
    "internal/tracing_batch_sink.cc",
    "internal/tracing_exactly_once_ack_handler.cc",
    "internal/tracing_helpers.cc",
    "internal/tracing_pull_ack_handler.cc",
    "internal/tracing_pull_lease_manager.cc",
    "message.cc",
    "options.cc",
    "publisher_connection.cc",
    "publisher_options.cc",
    "pull_ack_handler.cc",
    "schema.cc",
    "schema_client.cc",
    "schema_connection.cc",
    "schema_connection_idempotency_policy.cc",
    "snapshot.cc",
    "snapshot_builder.cc",
    "subscriber.cc",
    "subscriber_connection.cc",
    "subscriber_options.cc",
    "subscription.cc",
    "subscription_admin_client.cc",
    "subscription_admin_connection.cc",
    "subscription_builder.cc",
    "topic.cc",
    "topic_admin_client.cc",
    "topic_admin_connection.cc",
    "topic_builder.cc",
]
