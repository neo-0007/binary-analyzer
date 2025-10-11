
int evp_keymgmt_util_copy(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(long *)(param_2 + 0x68) == 0)) {
LAB_0052a580:
    iVar1 = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x60);
    if (((lVar4 == 0) || (lVar4 == lVar5)) &&
       ((lVar4 = lVar5, *(long *)(lVar5 + 0xd8) != 0 && (lVar3 == 0)))) {
      lVar3 = evp_keymgmt_dup(lVar5,*(long *)(param_2 + 0x68),param_3);
      lVar4 = lVar3;
      if (lVar3 == 0) goto LAB_0052a580;
    }
    else {
      lVar5 = lVar4;
      uVar2 = EVP_KEYMGMT_get0_name();
      iVar1 = EVP_KEYMGMT_is_a(lVar5,uVar2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/keymgmt_lib.c",0x1e2,"evp_keymgmt_util_copy");
        ERR_set_error(6,0x65,0);
        iVar1 = 0;
        goto LAB_0052a530;
      }
      local_58 = lVar5;
      local_50 = lVar3;
      local_48 = param_3;
      iVar1 = evp_keymgmt_util_export(param_2,param_3,evp_keymgmt_util_try_import,&local_58);
      if (iVar1 == 0) goto LAB_0052a530;
      lVar4 = 0;
      if (lVar3 == 0) {
        lVar3 = local_50;
        lVar4 = local_50;
      }
    }
    if ((*(long *)(param_1 + 0x60) == 0) &&
       (iVar1 = EVP_PKEY_set_type_by_keymgmt(param_1,lVar5), iVar1 == 0)) {
      evp_keymgmt_freedata(lVar5,lVar4);
      iVar1 = 0;
    }
    else {
      *(long *)(param_1 + 0x68) = lVar3;
      iVar1 = 1;
      evp_keymgmt_util_cache_keyinfo(param_1);
    }
  }
LAB_0052a530:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

