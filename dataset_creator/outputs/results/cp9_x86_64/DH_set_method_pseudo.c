
int DH_set_method(DH *dh,DH_METHOD *meth)

{
  code *pcVar1;
  _func_1704 *p_Var2;
  
  pcVar1 = *(code **)&dh[1].priv_key[1].neg;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  ENGINE_finish((ENGINE *)dh[1].length);
  p_Var2 = meth->init;
  dh[1].priv_key = (BIGNUM *)meth;
  dh[1].length = 0;
  if (p_Var2 != (_func_1704 *)0x0) {
    (*p_Var2)(dh);
  }
  return 1;
}

