
undefined8 collect_numbers_part_0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    param_3 = param_3 + 1;
    do {
      lVar2 = OSSL_PARAM_locate_const(param_2);
      if (lVar2 != 0) {
        local_38 = 0;
        iVar1 = OSSL_PARAM_get_BN(lVar2,&local_38);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(param_1,local_38);
          if (iVar1 != 0) goto LAB_00553ff4;
        }
        uVar3 = 0;
        goto LAB_00554012;
      }
LAB_00553ff4:
      lVar2 = *param_3;
      param_3 = param_3 + 1;
    } while (lVar2 != 0);
  }
  uVar3 = 1;
LAB_00554012:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

