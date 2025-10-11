
/* WARNING: Control flow encountered bad instruction data */
/* ~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  ~range_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

