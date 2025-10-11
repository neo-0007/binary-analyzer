
undefined8
ossl_crypto_new_ex_data_ex
          (stack_st_void *param_1,undefined4 param_2,undefined8 param_3,CRYPTO_EX_DATA *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 *ptr;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined8 *)get_and_lock(puVar2,param_2), puVar3 == (undefined8 *)0x0)) {
LAB_00418070:
    uVar4 = 0;
  }
  else {
    param_4->sk = param_1;
    uVar4 = *puVar3;
    *(undefined8 *)&param_4->dummy = 0;
    iVar1 = OPENSSL_sk_num(uVar4);
    if (iVar1 < 1) {
      ptr = (undefined1 *)0x0;
      CRYPTO_THREAD_unlock(*puVar2);
    }
    else {
      if (iVar1 < 10) {
        ptr = local_98;
      }
      else {
        ptr = (undefined1 *)CRYPTO_malloc(iVar1 * 8,"../crypto/ex_data.c",0xeb);
        if (ptr == (undefined1 *)0x0) {
          CRYPTO_THREAD_unlock(*puVar2);
          ERR_new();
          ERR_set_debug("../crypto/ex_data.c",0xf3,"ossl_crypto_new_ex_data_ex");
          ERR_set_error(0xf,0xc0100,0);
          goto LAB_00418070;
        }
      }
      local_a0 = local_98;
      uVar6 = 0;
      do {
        uVar4 = OPENSSL_sk_value(*puVar3,uVar6 & 0xffffffff);
        *(undefined8 *)(ptr + uVar6 * 8) = uVar4;
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
      uVar6 = 0;
      CRYPTO_THREAD_unlock(*puVar2);
      do {
        if ((*(long *)(ptr + uVar6 * 8) != 0) && (*(long *)(*(long *)(ptr + uVar6 * 8) + 0x18) != 0)
           ) {
          pvVar5 = CRYPTO_get_ex_data(param_4,(int)uVar6);
          puVar2 = *(undefined8 **)(ptr + uVar6 * 8);
          (*(code *)puVar2[3])(param_3,pvVar5,param_4,uVar6 & 0xffffffff,*puVar2,puVar2[1]);
        }
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
      uVar4 = 1;
      if (ptr == local_a0) goto LAB_00418072;
    }
    CRYPTO_free(ptr);
    uVar4 = 1;
  }
LAB_00418072:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

