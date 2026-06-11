#include <outcome/outcome.hpp>

// Proves the vendored status-code submodule tree is shipped and wired.
//
#include <outcome/experimental/status_result.hpp>

#include <system_error>

#undef NDEBUG
#include <cassert>

namespace outcome = OUTCOME_V2_NAMESPACE;

static outcome::result<int> f (bool ok)
{
  if (ok)
    return 42;

  return std::errc::invalid_argument;
}

static outcome::experimental::status_result<int> g (bool ok)
{
  if (ok)
    return 42;

  return outcome::experimental::errc::invalid_argument;
}

int main ()
{
  assert (f (true).value () == 42);
  assert (f (false).has_error ());
  assert (f (false).error () == std::errc::invalid_argument);

  assert (g (true).value () == 42);
  assert (g (false).has_error ());
}
