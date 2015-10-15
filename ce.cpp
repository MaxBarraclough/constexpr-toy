#include <type_traits>

// Very boring identity function,
// using a loop to make things interesting
constexpr int ident(int arg) {
  int i = -1;
  // constexpr categorically forbids uninitialised vars

  for (i = 0; i != arg; ++i) { }

  return i;
}

static_assert( ident(0) == 0, "Identity function is misbehaving" );
static_assert( ident(1) == 1, "Identity function is misbehaving" );
static_assert( ident(2) == 2, "Identity function is misbehaving" );

static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );
static_assert( ident(__LINE__) == __LINE__, "Identity function is misbehaving" );


static_assert( ident(__LINE__)
                  !=
                     __LINE__, "Identity function is misbehaving" );

int main(int argc, char *argv[]) {
  return 0;
}

