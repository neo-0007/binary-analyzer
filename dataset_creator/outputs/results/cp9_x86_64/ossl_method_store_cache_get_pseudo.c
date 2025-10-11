
undefined8
ossl_method_store_cache_get
          (long param_1,undefined8 param_2,int param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0 && param_4 != 0) && (0 < param_3)) {
    iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      lVar2 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_3);
      if (lVar2 == 0) {
LAB_0042c3d0:
        uVar3 = 0;
      }
      else {
        local_68 = param_2;
        local_60 = param_4;
        lVar2 = OPENSSL_LH_retrieve(*(undefined8 *)(lVar2 + 0x10),&local_68);
        if (lVar2 == 0) goto LAB_0042c3d0;
        iVar1 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        if (iVar1 == 0) goto LAB_0042c3d0;
        *param_5 = *(undefined8 *)(lVar2 + 0x10);
        uVar3 = 1;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
      goto LAB_0042c3ab;
    }
  }
  uVar3 = 0;
LAB_0042c3ab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

