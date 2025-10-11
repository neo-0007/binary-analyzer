
/* WARNING: Control flow encountered bad instruction data */
/* ~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  ~underflow_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

