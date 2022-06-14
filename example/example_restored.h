/* Autogenerated header */
#pragma once

namespace/*or class/struct?*/ example
{
  // Nested containers:
  class A
  {
  public:
    // Enumerations:
    enum enum_A_1 : int {
    };
    enum enum_A_2 : int {
    };

    // Functions:
    public: class example::A & operator=(class example::A &&)
    public: class example::A & operator=(class example::A const &)
    private: void function_A_1(enum enum_A_1)
    private: void function_A_2(enum enum_A_2)
  public:
  };

  namespace/*or class/struct?*/ BC
  {
    // Enumerations:
    enum enum_BC_1 : int {
    };

    // Nested containers:
    struct B
    {
      // Functions:
      public: example::BC::B::B(struct example::BC::B const &)
      public: example::BC::B::B(void)
      public: struct example::BC::B & example::BC::B::operator=(struct example::BC::B const &)
#if 0 // All found virtual functions names:
      public: virtual example::BC::B::~B(void)
#endif

    public:
    };

    struct C
    {
      // Functions:
      public: example::BC::C::C(struct example::BC::C const &)
      public: example::BC::C::C(void)
      public: struct example::BC::C & example::BC::C::operator=(struct example::BC::C const &)
#if 0 // All found virtual functions names:
      public: virtual example::BC::C::~C(void)
      public: virtual void example::BC::C::virtual_function_C_1(enum example::BC::enum_BC_1)
      public: virtual void example::BC::C::virtual_function_C_2(union example::BC::U)
#endif

    public:
    };

    union U
    {
      // Functions:
      public: union example::BC::U & example::BC::U::operator=(union example::BC::U &&)
      public: union example::BC::U & example::BC::U::operator=(union example::BC::U const &)
    };


  };

  struct D
  {
    // Functions:
    public: D(struct example::D const &)
    public: D(void)
    public: struct example::D & operator=(struct example::D const &)
#if 0 // All found virtual functions names:
    public: virtual ~D(void)
    public: virtual void virtual_function_D_1(void)
    public: virtual void virtual_function_D_2(int)
#endif

  public:
  };

  class/*or struct*/ E
  {
  public:
    // Enumerations:
    enum enum_E_1 : int {
    };
    enum enum_E_2 : int {
    };

    // Functions:
    private: void function_E_1(enum enum_E_1)
    // Static functions:
    private: static void static_function_E_0(enum enum_E_2)
  public:
  };


};