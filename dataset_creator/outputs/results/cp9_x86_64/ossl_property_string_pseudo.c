
undefined4 ossl_property_string(undefined8 param_1,undefined8 param_2,int *param_3,char *param_4)

{
  int iVar1;
  undefined8 *ptr;
  size_t sVar2;
  void *pvVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  char *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = param_4;
  iVar1 = CRYPTO_THREAD_read_lock();
  if (iVar1 == 0) {
    uVar4 = 0;
    ERR_new();
    ERR_set_debug("../crypto/property/property_string.c",0x92,"ossl_property_string");
    ERR_set_error(0xf,0xc010f,0);
    goto LAB_0042e301;
  }
  ptr = (undefined8 *)OPENSSL_LH_retrieve(param_2,local_58);
  if ((ptr == (undefined8 *)0x0) && (param_3 != (int *)0x0)) {
    CRYPTO_THREAD_unlock(param_1);
    iVar1 = CRYPTO_THREAD_write_lock(param_1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/property/property_string.c",0x99,"ossl_property_string");
      ERR_set_error(0xf,0xc0110,0);
      uVar4 = 0;
      goto LAB_0042e301;
    }
    ptr = (undefined8 *)OPENSSL_LH_retrieve(param_2,local_58);
    if (ptr == (undefined8 *)0x0) {
      sVar2 = strlen(param_4);
      ptr = (undefined8 *)
            CRYPTO_malloc((int)sVar2 + 0x10,"../crypto/property/property_string.c",0x7b);
      if (ptr == (undefined8 *)0x0) {
        uVar4 = 0;
        CRYPTO_THREAD_unlock(param_1);
        goto LAB_0042e301;
      }
      pvVar3 = memcpy((void *)((long)ptr + 0xc),param_4,sVar2 + 1);
      *ptr = pvVar3;
      iVar1 = *param_3 + 1;
      *param_3 = iVar1;
      *(int *)(ptr + 1) = iVar1;
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
        CRYPTO_THREAD_unlock(param_1);
        uVar4 = 0;
        goto LAB_0042e301;
      }
      OPENSSL_LH_insert(param_2,ptr);
      iVar1 = OPENSSL_LH_error(param_2);
      if (iVar1 != 0) {
        uVar4 = 0;
        CRYPTO_free(ptr);
        CRYPTO_THREAD_unlock(param_1);
        goto LAB_0042e301;
      }
    }
    CRYPTO_THREAD_unlock(param_1);
  }
  else {
    uVar4 = 0;
    CRYPTO_THREAD_unlock(param_1);
    if (ptr == (undefined8 *)0x0) goto LAB_0042e301;
  }
  uVar4 = *(undefined4 *)(ptr + 1);
LAB_0042e301:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

