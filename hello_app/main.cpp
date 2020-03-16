#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

#include "nholthaus/units.h"

#include <iostream>
#include <vector>

using namespace units;
using namespace units::literals;

using namespace units::velocity;
using namespace units::length;
using namespace units::time;

ABSL_FLAG(std::string, message, "Hello", "A message to tell to recepients");
ABSL_FLAG(std::vector<std::string>, recepients,
          std::vector<std::string>({"World"}),
          "Comma-separated list of recepients of the message");

ABSL_FLAG(double, meters, 10.0, "Distance in meters.");
ABSL_FLAG(double, seconds, 10.0, "Time in seconds.");

int main(int argc, char *argv[]) {
  absl::ParseCommandLine(argc, argv);
  for (const auto &recepient : FLAGS_recepients.Get()) {
    absl::PrintF("%s %s!\n", FLAGS_message.Get(), recepient);
  }

  meters_per_second_t speed =
      meter_t{FLAGS_meters.Get()} / second_t{FLAGS_seconds.Get()};
  absl::PrintF("Speed is: %f m/s or %f km/h\n", speed.value(),
               kilometers_per_hour_t{speed}.value());
  return 0;
}
