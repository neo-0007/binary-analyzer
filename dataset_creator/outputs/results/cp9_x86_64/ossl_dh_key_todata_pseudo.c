
bool ossl_dh_key_todata(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if ((param_1 == 0) ||
     (((DH_get0_key(param_1,&local_28,&local_30), local_30 != 0 && (param_4 != 0)) &&
      (iVar1 = ossl_param_build_set_bn(param_2,param_3,&DAT_007c4ad5), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (local_28 != 0) {
      iVar1 = ossl_param_build_set_bn(param_2,param_3,&DAT_007da6af);
      bVar2 = iVar1 != 0;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar2;
}

