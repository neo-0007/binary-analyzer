
long do_b2i_key_isra_0(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  iVar1 = ossl_do_blob_header(&local_38,param_2,local_3c,&local_40,param_3,param_4);
  if (iVar1 < 1) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x122,__func___12);
    ERR_set_error(9,0x7a,0);
  }
  else {
    uVar2 = ossl_blob_length(local_40,*param_3,*param_4);
    if ((int)param_2 - 0x10U < uVar2) {
      ERR_new();
      lVar3 = 0;
      ERR_set_debug("../crypto/pem/pvkfmt.c",0x127,__func___12);
      ERR_set_error(9,0x7b,0);
    }
    else {
      if (*param_3 == 0) {
        lVar3 = ossl_b2i_RSA_after_header(&local_38,local_40,*param_4);
      }
      else {
        lVar3 = ossl_b2i_DSA_after_header();
      }
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/pem/pvkfmt.c",0x132,__func___12);
        ERR_set_error(9,0x6e,0);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

