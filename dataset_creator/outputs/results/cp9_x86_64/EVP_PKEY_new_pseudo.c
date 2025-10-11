
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_PKEY * EVP_PKEY_new(void)

{
  int iVar1;
  EVP_PKEY *obj;
  long lVar2;
  undefined8 uVar3;
  
  obj = (EVP_PKEY *)CRYPTO_zalloc(0x98,"../crypto/evp/p_lib.c",0x590);
  if (obj == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x593,"EVP_PKEY_new");
    ERR_set_error(6,0xc0100,0);
    return (EVP_PKEY *)0x0;
  }
  obj->type = 0;
  obj->save_type = 0;
  LOCK();
  *(undefined4 *)&obj->attributes = 1;
  UNLOCK();
  lVar2 = CRYPTO_THREAD_lock_new();
  obj[1].type = (int)lVar2;
  obj[1].save_type = (int)((ulong)lVar2 >> 0x20);
  if (lVar2 == 0) {
    ERR_new();
    uVar3 = 0x59d;
  }
  else {
    *(undefined4 *)&obj[1].ameth = 1;
    iVar1 = CRYPTO_new_ex_data(0x11,obj,(CRYPTO_EX_DATA *)&obj[1].engine);
    if (iVar1 != 0) {
      return obj;
    }
    ERR_new();
    uVar3 = 0x5a4;
  }
  ERR_set_debug("../crypto/evp/p_lib.c",uVar3,"EVP_PKEY_new");
  ERR_set_error(6,0xc0100,0);
  uVar3._0_4_ = obj[1].type;
  uVar3._4_4_ = obj[1].save_type;
  CRYPTO_THREAD_lock_free(uVar3);
  CRYPTO_free(obj);
  return (EVP_PKEY *)0x0;
}

