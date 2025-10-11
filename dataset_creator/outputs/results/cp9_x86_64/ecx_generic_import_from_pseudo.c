
undefined8 ecx_generic_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  EVP_PKEY *pkey;
  void *key;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  if ((0x20000000000001U >> ((ulong)(param_3 - 0x40a) & 0x3f) & 1) == 0) {
    cVar1 = (param_3 != 0x40b) * '\x02' + '\x01';
  }
  else {
    cVar1 = (param_3 != 0x40a) * '\x02';
  }
  key = (void *)ossl_ecx_key_new(*(undefined8 *)(param_2 + 8),cVar1,0,
                                 *(undefined8 *)(param_2 + 0x10));
  if (key != (void *)0x0) {
    iVar2 = ossl_ecx_key_fromdata(key,param_1,1);
    if (iVar2 != 0) {
      iVar2 = EVP_PKEY_assign(pkey,param_3,key);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ossl_ecx_key_free(key);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecx_meth.c",0x18b,"ecx_generic_import_from");
  ERR_set_error(5,0xc0100,0);
  return 0;
}

