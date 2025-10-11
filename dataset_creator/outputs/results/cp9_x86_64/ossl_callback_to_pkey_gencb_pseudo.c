
undefined8 ossl_callback_to_pkey_gencb(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0xffffffff;
  uVar3 = 1;
  local_24 = 0xffffffff;
  if (*(long *)(param_2 + 0x60) != 0) {
    lVar4 = OSSL_PARAM_locate_const(param_1,"potential");
    if (lVar4 != 0) {
      iVar2 = OSSL_PARAM_get_int(lVar4,&local_28);
      if (iVar2 != 0) {
        lVar4 = OSSL_PARAM_locate_const(param_1,"iteration");
        if (lVar4 != 0) {
          iVar2 = OSSL_PARAM_get_int(lVar4,&local_24);
          if (iVar2 != 0) {
            puVar1 = *(undefined4 **)(param_2 + 0x68);
            *puVar1 = local_28;
            puVar1[1] = local_24;
            uVar3 = (**(code **)(param_2 + 0x60))(param_2);
            goto LAB_004107e2;
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_004107e2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

