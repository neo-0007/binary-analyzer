
int ecx_ctrl(EVP_PKEY *param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *key;
  char cVar3;
  
  if (param_2 == 9) {
    key = (void *)ossl_ecx_key_op(0,param_4,param_3,**(undefined4 **)&param_1->references,0,0,0);
    if (key != (void *)0x0) {
      EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
      return 1;
    }
  }
  else {
    if (param_2 != 10) {
      return -2;
    }
    if ((param_1->pkey).rsa != (rsa_st *)0x0) {
      iVar1 = **(int **)&param_1->references;
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = CRYPTO_memdup((undefined1 *)((long)&((param_1->pkey).rsa)->meth + 1),cVar3,
                            "../crypto/ec/ecx_meth.c",0xeb);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)&param_1->references;
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
  }
  return 0;
}

