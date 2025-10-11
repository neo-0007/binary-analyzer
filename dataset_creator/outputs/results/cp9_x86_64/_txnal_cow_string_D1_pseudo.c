
/* WARNING: Control flow encountered bad instruction data */
/* _txnal_cow_string_D1(void*) */

void _txnal_cow_string_D1(void *param_1)

{
  _txnal_cow_string_c_str(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

