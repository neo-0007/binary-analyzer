
undefined4 rsa_pkey_ctrl(long param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 3) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
    if (lVar1 == 0) {
      *param_4 = 0x2a0;
      uVar4 = 1;
    }
    else {
      iVar2 = ossl_rsa_pss_get_param(lVar1,&local_30,local_28,local_34);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x1ab,"rsa_pkey_ctrl");
        ERR_set_error(4,0xc0103,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
        uVar3 = EVP_MD_get_type(local_30);
        *param_4 = uVar3;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

