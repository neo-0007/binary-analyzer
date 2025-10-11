
void call_fini(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    (*(code *)(&PTR__GLOBAL__sub_I_system_error_cc_008d0b30)[lVar1])();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  _fini();
  return;
}

