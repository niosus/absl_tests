load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hello",
    srcs = ["main.cpp"],
    deps = [
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/flags:parse",
        "@com_nholthaus_units//:units",
    ],
)
