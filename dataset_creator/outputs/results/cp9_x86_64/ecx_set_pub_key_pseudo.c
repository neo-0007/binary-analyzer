
bool ecx_set_pub_key(EVP_PKEY *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *key;
  
  lVar2 = *(long *)&param_1[1].save_parameters;
  if (lVar2 != 0) {
    uVar1 = EVP_KEYMGMT_get0_provider(lVar2);
    lVar2 = ossl_provider_libctx(uVar1);
  }
  key = (void *)ossl_ecx_key_op(0,param_2,param_3,**(undefined4 **)&param_1->references,0,lVar2,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}

