
undefined8 get_decoder_from_store(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char *__s;
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar1 = *(int *)(param_3 + 1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (iVar1 == 0) {
    if (param_3[2] != 0) {
      lVar2 = ossl_namemap_stored(*param_3);
      __s = (char *)param_3[2];
      pcVar3 = strchr(__s,0x3a);
      sVar5 = (long)pcVar3 - (long)__s;
      if (pcVar3 == (char *)0x0) {
        sVar5 = strlen(__s);
      }
      if ((lVar2 != 0) && (iVar1 = ossl_namemap_name2num_n(lVar2,__s,sVar5), iVar1 != 0))
      goto LAB_00508520;
    }
  }
  else {
LAB_00508520:
    if (((param_1 != 0) ||
        (param_1 = ossl_lib_ctx_get_data(*param_3,0xb,decoder_store_method), param_1 != 0)) &&
       (iVar1 = ossl_method_store_fetch(param_1,iVar1,param_3[3],param_2,&local_38),
       uVar4 = local_38, iVar1 != 0)) goto LAB_00508541;
  }
  uVar4 = 0;
LAB_00508541:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

