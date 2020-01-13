#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

#include <iostream>
#include <vector>

ABSL_FLAG(std::string, message, "Hello", "A message to tell to recepients");
ABSL_FLAG(std::vector<std::string>, recepients,
          std::vector<std::string>({"World"}),
          "Comma-separated list of recepients of the message");

int main(int argc, char* argv[]) {
  absl::ParseCommandLine(argc, argv);
  for (const auto& recepient : FLAGS_recepients.Get()) {
    absl::PrintF("%s %s!\n", FLAGS_message.Get(), recepient);
  }
  return 0;
}
