
undefined8 EVP_PKEY_set1_engine(int *param_1,ENGINE *param_2)

{
  int iVar1;
  EVP_PKEY_METHOD *pEVar2;
  
  if (param_2 != (ENGINE *)0x0) {
    iVar1 = ENGINE_init(param_2);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x2b0,"EVP_PKEY_set1_engine");
      ERR_set_error(6,0x80026,0);
      return 0;
    }
    pEVar2 = ENGINE_get_pkey_meth(param_2,*param_1);
    if (pEVar2 == (EVP_PKEY_METHOD *)0x0) {
      ENGINE_finish(param_2);
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x2b5,"EVP_PKEY_set1_engine");
      ERR_set_error(6,0x9c,0);
      return 0;
    }
  }
  ENGINE_finish(*(ENGINE **)(param_1 + 6));
  *(ENGINE **)(param_1 + 6) = param_2;
  return 1;
}

