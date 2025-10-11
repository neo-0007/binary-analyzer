
undefined8 *
param_push(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 param_5,
          int param_6)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x38,"../crypto/param_build.c",0x37);
  if (ptr == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/param_build.c",0x3a,"param_push");
    ERR_set_error(0xf,0xc0100,0);
  }
  else {
    *(undefined4 *)(ptr + 1) = param_5;
    *ptr = param_2;
    ptr[2] = (long)param_3;
    lVar2 = ossl_param_bytes_to_blocks(param_4);
    *(int *)((long)ptr + 0xc) = param_6;
    ptr[3] = lVar2;
    if (param_6 == 0) {
      *param_1 = *param_1 + lVar2;
      iVar1 = OPENSSL_sk_push(param_1[2],ptr);
    }
    else {
      param_1[1] = param_1[1] + lVar2;
      iVar1 = OPENSSL_sk_push(param_1[2],ptr);
    }
    if (iVar1 < 1) {
      CRYPTO_free(ptr);
      ptr = (undefined8 *)0x0;
    }
  }
  return ptr;
}

