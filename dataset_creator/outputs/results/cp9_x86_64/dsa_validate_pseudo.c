
bool dsa_validate(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_0046daf0:
    bVar2 = false;
  }
  else {
    if ((param_2 & 7) != 0) {
      if ((param_2 & 4) != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        iVar1 = ossl_dsa_check_params(param_1,param_3,&local_38);
        if (iVar1 == 0) goto LAB_0046daf0;
      }
      if ((param_2 & 2) != 0) {
        local_3c = 0;
        local_38 = 0;
        DSA_get0_key(param_1,&local_38,0);
        if ((local_38 == 0) ||
           (iVar1 = ossl_dsa_check_pub_key(param_1,local_38,&local_3c), iVar1 == 0))
        goto LAB_0046daf0;
      }
      if ((param_2 & 1) != 0) {
        local_3c = 0;
        local_38 = 0;
        DSA_get0_key(param_1,0,&local_38);
        bVar2 = false;
        if (local_38 == 0) goto LAB_0046da55;
        iVar1 = ossl_dsa_check_priv_key(param_1,local_38,&local_3c);
        if (iVar1 == 0) goto LAB_0046daf0;
      }
      if ((param_2 & 3) == 3) {
        iVar1 = ossl_dsa_check_pairwise(param_1);
        bVar2 = iVar1 != 0;
        goto LAB_0046da55;
      }
    }
    bVar2 = true;
  }
LAB_0046da55:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar2;
}

