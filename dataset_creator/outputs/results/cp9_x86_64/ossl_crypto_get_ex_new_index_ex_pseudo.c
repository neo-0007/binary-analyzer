
int ossl_crypto_get_ex_new_index_ex
              (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *ptr;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
  if ((puVar2 == (undefined8 *)0x0) ||
     (plVar3 = (long *)get_and_lock(puVar2,param_2), plVar3 == (long *)0x0)) {
    return -1;
  }
  if (*plVar3 == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *plVar3 = lVar4;
    if ((lVar4 != 0) && (iVar1 = OPENSSL_sk_push(lVar4,0), iVar1 != 0)) goto LAB_00417b36;
    ERR_new();
    uVar5 = 0xa6;
  }
  else {
LAB_00417b36:
    ptr = (undefined8 *)CRYPTO_malloc(0x30,"../crypto/ex_data.c",0xab);
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_3;
      ptr[3] = param_5;
      lVar4 = *plVar3;
      ptr[1] = param_4;
      ptr[5] = param_6;
      ptr[4] = param_7;
      *(undefined4 *)(ptr + 2) = param_8;
      iVar1 = OPENSSL_sk_push(lVar4,0);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ex_data.c",0xb8,"ossl_crypto_get_ex_new_index_ex");
        iVar1 = -1;
        ERR_set_error(0xf,0xc0100,0);
        CRYPTO_free(ptr);
      }
      else {
        iVar1 = OPENSSL_sk_num(*plVar3);
        iVar1 = iVar1 + -1;
        OPENSSL_sk_set(*plVar3,iVar1,ptr);
      }
      goto LAB_00417bac;
    }
    ERR_new();
    uVar5 = 0xad;
  }
  ERR_set_debug("../crypto/ex_data.c",uVar5,"ossl_crypto_get_ex_new_index_ex");
  iVar1 = -1;
  ERR_set_error(0xf,0xc0100,0);
LAB_00417bac:
  CRYPTO_THREAD_unlock(*puVar2);
  return iVar1;
}

