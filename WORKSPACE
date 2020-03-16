load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# abseil-cpp
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/20190808.zip"],  # 2019-03-14
  strip_prefix = "abseil-cpp-20190808",
  sha256 = "0b62fc2d00c2b2bc3761a892a17ac3b8af3578bd28535d90b4c914b0a7460d4e",
)

# Google Test
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/8b6d3f9c4a774bef3081195d422993323b6bb2e0.zip"],  # 2019-03-05
  strip_prefix = "googletest-8b6d3f9c4a774bef3081195d422993323b6bb2e0",
  sha256 = "d21ba93d7f193a9a0ab80b96e8890d520b25704a6fac976fe9da81fffb3392e3",
)

http_archive(
  name = "com_nholthaus_units",
  urls = ["https://github.com/nholthaus/units/archive/v2.3.1.zip"],  # 2019-03-14
  strip_prefix = "units-2.3.1",
  build_file = "@//:third_party/units/units.BUILD",
)
