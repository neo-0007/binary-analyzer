
undefined8
CTLOG_new_from_base64_ex
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_b64.c",0x91,"CTLOG_new_from_base64_ex");
    ERR_set_error(0x32,0x80106,0);
    uVar3 = 0;
  }
  else {
    iVar1 = ct_base64_decode(param_2,&local_50);
    if (iVar1 < 0) {
      ERR_new();
      uVar3 = 0x97;
    }
    else {
      local_48 = local_50;
      pkey = (EVP_PKEY *)d2i_PUBKEY_ex(0,&local_48,(long)iVar1,param_4,param_5);
      CRYPTO_free(local_50);
      if (pkey != (EVP_PKEY *)0x0) {
        lVar2 = CTLOG_new_ex(pkey,param_3,param_4,param_5);
        uVar3 = 1;
        *param_1 = lVar2;
        if (lVar2 == 0) {
          EVP_PKEY_free(pkey);
          uVar3 = 0;
        }
        goto LAB_00622efc;
      }
      ERR_new();
      uVar3 = 0x9f;
    }
    ERR_set_debug("../crypto/ct/ct_b64.c",uVar3,"CTLOG_new_from_base64_ex");
    ERR_set_error(0x32,0x6e,0);
    uVar3 = 0;
  }
LAB_00622efc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

