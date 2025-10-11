
SXNET * sxnet_v2i(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  SXNET *pSVar3;
  int iVar4;
  long in_FS_OFFSET;
  SXNET *local_28;
  long local_20;
  
  iVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (SXNET *)0x0;
  do {
    iVar1 = OPENSSL_sk_num(param_3);
    pSVar3 = local_28;
    if (iVar1 <= iVar4) {
LAB_006108f6:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return pSVar3;
    }
    lVar2 = OPENSSL_sk_value(param_3,iVar4);
    iVar1 = SXNET_add_id_asc(&local_28,*(char **)(lVar2 + 8),*(char **)(lVar2 + 0x10),-1);
    if (iVar1 == 0) {
      pSVar3 = (SXNET *)0x0;
      goto LAB_006108f6;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

