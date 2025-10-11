
int int_engine_init(ENGINE *param_1)

{
  int iVar1;
  
  iVar1 = ENGINE_init(param_1);
  if (iVar1 != 0) {
    if (initialized_engines == 0) {
      initialized_engines = OPENSSL_sk_new_null();
      if (initialized_engines == 0) goto LAB_005f0ab4;
    }
    iVar1 = OPENSSL_sk_push(initialized_engines,param_1);
    if (iVar1 == 0) {
LAB_005f0ab4:
      ENGINE_finish(param_1);
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}

