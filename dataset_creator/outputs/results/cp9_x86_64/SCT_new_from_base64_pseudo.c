
long SCT_new_from_base64(undefined1 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = SCT_new();
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_b64.c",0x4a,"SCT_new_from_base64");
    ERR_set_error(0x32,0xc0100,0);
    goto LAB_00622d0d;
  }
  iVar1 = SCT_set_version(lVar2,param_1);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_b64.c",0x53,"SCT_new_from_base64");
    ERR_set_error(0x32,0x73,0);
  }
  else {
    iVar1 = ct_base64_decode(param_2,&local_50);
    if (iVar1 < 0) {
      ERR_new();
      uVar3 = 0x59;
    }
    else {
      iVar1 = SCT_set0_log_id(lVar2,local_50,(long)iVar1);
      if (iVar1 == 0) goto LAB_00622d3f;
      local_50 = (void *)0x0;
      iVar1 = ct_base64_decode(param_5,&local_50);
      if (iVar1 < 0) {
        ERR_new();
        uVar3 = 0x62;
      }
      else {
        SCT_set0_extensions(lVar2,local_50,(long)iVar1);
        local_50 = (void *)0x0;
        iVar1 = ct_base64_decode(param_6,&local_50);
        if (-1 < iVar1) {
          local_48 = local_50;
          iVar1 = o2i_SCT_signature(lVar2,&local_48,(long)iVar1);
          if (0 < iVar1) {
            CRYPTO_free(local_50);
            local_50 = (void *)0x0;
            SCT_set_timestamp(lVar2,param_4);
            iVar1 = SCT_set_log_entry_type(lVar2,param_3);
            if (iVar1 != 0) goto LAB_00622d0d;
          }
          goto LAB_00622d3f;
        }
        ERR_new();
        uVar3 = 0x6a;
      }
    }
    ERR_set_debug("../crypto/ct/ct_b64.c",uVar3,"SCT_new_from_base64");
    ERR_set_error(0x32,0x76,0);
  }
LAB_00622d3f:
  CRYPTO_free(local_50);
  SCT_free(lVar2);
  lVar2 = 0;
LAB_00622d0d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar2;
}

