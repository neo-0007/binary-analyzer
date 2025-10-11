
long OSSL_PROVIDER_try_load(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_provider_find(param_1,param_2,0);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar3 = ossl_provider_new(param_1,param_2,0,0);
    if (lVar3 == 0) goto LAB_0053c32e;
    iVar1 = ossl_provider_activate(lVar3,1,0);
    if (iVar1 != 0) {
      local_38 = lVar3;
      iVar1 = ossl_provider_add_to_store(lVar3,&local_38,param_3);
      if (iVar1 == 0) {
        ossl_provider_deactivate(lVar3,1);
        ossl_provider_free(lVar3);
      }
      else {
        lVar4 = local_38;
        if ((local_38 != lVar3) &&
           (iVar1 = ossl_provider_activate(local_38,1,0), lVar4 = local_38, iVar1 == 0)) {
          ossl_provider_free(local_38);
          lVar4 = lVar2;
        }
      }
      goto LAB_0053c32e;
    }
  }
  else {
    iVar1 = ossl_provider_activate(lVar2,1,0);
    lVar3 = lVar2;
    if (iVar1 != 0) goto LAB_0053c32e;
  }
  ossl_provider_free(lVar3);
  lVar4 = 0;
LAB_0053c32e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar4;
}

