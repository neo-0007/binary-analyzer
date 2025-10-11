
undefined8 get_loader_from_store(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar1 = *(int *)(param_3 + 1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (iVar1 == 0) {
    uVar2 = ossl_namemap_stored(*param_3);
    iVar1 = ossl_namemap_name2num(uVar2,param_3[2]);
    if (param_1 == 0) goto LAB_00434f94;
LAB_00434f3d:
    iVar1 = ossl_method_store_fetch(param_1,iVar1,param_3[3],param_2,&local_38);
    uVar2 = local_38;
    if (iVar1 != 0) goto LAB_00434f5a;
  }
  else {
    if (param_1 != 0) goto LAB_00434f3d;
LAB_00434f94:
    param_1 = ossl_lib_ctx_get_data(*param_3,0xf,loader_store_method);
    if (param_1 != 0) goto LAB_00434f3d;
  }
  uVar2 = 0;
LAB_00434f5a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

