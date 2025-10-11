
/* WARNING: Control flow encountered bad instruction data */
/* ~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

