
undefined8 get_evp_method_from_store(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  char *__s;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)((long)param_3 + 0xc);
  local_38 = 0;
  if (iVar2 == 0) {
    if (param_3[2] != 0) {
      lVar3 = ossl_namemap_stored(*param_3);
      __s = (char *)param_3[2];
      pcVar4 = strchr(__s,0x3a);
      sVar6 = (long)pcVar4 - (long)__s;
      if (pcVar4 == (char *)0x0) {
        sVar6 = strlen(__s);
      }
      if ((lVar3 != 0) && (iVar2 = ossl_namemap_name2num_n(lVar3,__s,sVar6), iVar2 != 0))
      goto LAB_0040ce82;
    }
  }
  else {
LAB_0040ce82:
    uVar1 = *(uint *)(param_3 + 1);
    if (((iVar2 - 1U < 0x7fffff) && (uVar1 - 1 < 0xff)) &&
       (((param_1 != 0 ||
         (param_1 = ossl_lib_ctx_get_data(*param_3,0,evp_method_store_method), param_1 != 0)) &&
        (iVar2 = ossl_method_store_fetch(param_1,uVar1 | iVar2 << 8,param_3[3],param_2,&local_38),
        uVar5 = local_38, iVar2 != 0)))) goto LAB_0040cef2;
  }
  uVar5 = 0;
LAB_0040cef2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

