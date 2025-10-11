
int RSA_set_method(RSA *rsa,RSA_METHOD *meth)

{
  _func_1624 *p_Var1;
  
  if (*(code **)(rsa->engine + 0x40) != (code *)0x0) {
    (**(code **)(rsa->engine + 0x40))();
  }
  ENGINE_finish((ENGINE *)rsa->n);
  p_Var1 = meth->init;
  rsa->engine = (ENGINE *)meth;
  rsa->n = (BIGNUM *)0x0;
  if (p_Var1 != (_func_1624 *)0x0) {
    (*p_Var1)(rsa);
  }
  return 1;
}

