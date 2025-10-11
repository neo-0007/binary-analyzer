
undefined8
ossl_method_store_cache_set
          (long param_1,long param_2,int param_3,char *param_4,long param_5,code *param_6,
          long param_7)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  long *ptr;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  undefined8 local_90;
  int local_88;
  long local_78;
  char *local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == 0 || param_4 == (char *)0x0) || param_1 == 0) || (param_3 < 1)) ||
     (iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar6 = 0;
    goto LAB_0042c543;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    local_90 = 0;
    local_88 = OPENSSL_rdtsc();
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (local_88 == 0) {
      local_88 = 1;
    }
    ossl_sa_doall_arg(*(undefined8 *)(param_1 + 8),impl_cache_flush_one_alg,local_98);
    *(undefined8 *)(param_1 + 0x18) = local_90;
  }
  lVar2 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_3);
  if (lVar2 == 0) {
LAB_0042c5c7:
    ptr = (long *)0x0;
LAB_0042c5ca:
    uVar6 = 0;
    CRYPTO_free(ptr);
  }
  else {
    if (param_5 == 0) {
      local_78 = param_2;
      local_70 = param_4;
      pvVar4 = (void *)OPENSSL_LH_delete(*(undefined8 *)(lVar2 + 0x10),&local_78);
      if (pvVar4 != (void *)0x0) {
        (**(code **)((long)pvVar4 + 0x20))(*(undefined8 *)((long)pvVar4 + 0x10));
        CRYPTO_free(pvVar4);
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
      }
LAB_0042c635:
      uVar6 = 1;
      goto LAB_0042c5dd;
    }
    sVar3 = strlen(param_4);
    ptr = (long *)CRYPTO_malloc((int)sVar3 + 0x30,"../crypto/property/property.c",0x2c3);
    if (ptr == (long *)0x0) goto LAB_0042c5c7;
    *ptr = param_2;
    ptr[1] = (long)(ptr + 5);
    ptr[2] = param_5;
    ptr[3] = (long)param_6;
    ptr[4] = param_7;
    iVar1 = (*param_6)(param_5);
    if (iVar1 == 0) goto LAB_0042c5ca;
    memcpy((void *)ptr[1],param_4,sVar3 + 1);
    pvVar4 = (void *)OPENSSL_LH_insert(*(undefined8 *)(lVar2 + 0x10),ptr);
    if (pvVar4 == (void *)0x0) {
      iVar1 = OPENSSL_LH_error(*(undefined8 *)(lVar2 + 0x10));
      if (iVar1 != 0) {
        (*(code *)ptr[4])(ptr[2]);
        goto LAB_0042c5ca;
      }
      uVar5 = *(long *)(param_1 + 0x18) + 1;
      *(ulong *)(param_1 + 0x18) = uVar5;
      if (uVar5 < 500) goto LAB_0042c635;
      *(undefined4 *)(param_1 + 0x20) = 1;
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
      (**(code **)((long)pvVar4 + 0x20))(*(undefined8 *)((long)pvVar4 + 0x10));
      CRYPTO_free(pvVar4);
    }
  }
LAB_0042c5dd:
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
LAB_0042c543:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

