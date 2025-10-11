
/* WARNING: Control flow encountered bad instruction data */
/* ~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  ~domain_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

