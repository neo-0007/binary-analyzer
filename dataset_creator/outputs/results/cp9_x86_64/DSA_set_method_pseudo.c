
int DSA_set_method(DSA *dsa,DSA_METHOD *param_2)

{
  code *pcVar1;
  _func_1738 *p_Var2;
  
  pcVar1 = *(code **)&dsa[1].p[2].top;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish((ENGINE *)dsa[1].q);
  p_Var2 = param_2->init;
  dsa[1].p = (BIGNUM *)param_2;
  dsa[1].q = (BIGNUM *)0x0;
  if (p_Var2 != (_func_1738 *)0x0) {
    (*p_Var2)(dsa);
  }
  return 1;
}

