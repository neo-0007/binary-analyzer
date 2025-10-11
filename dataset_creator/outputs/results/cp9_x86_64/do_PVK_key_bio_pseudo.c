
undefined8
do_PVK_key_bio(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *data;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_read(param_1,local_58,0x18);
  if (iVar1 == 0x18) {
    uVar3 = 0;
    local_60 = local_58;
    iVar1 = ossl_do_PVK_header(&local_60,0x18,0,&local_68,&local_64);
    if (iVar1 != 0) {
      iVar1 = local_68 + local_64;
      data = (undefined1 *)CRYPTO_malloc(iVar1,"../crypto/pem/pvkfmt.c",0x3a8);
      if (data == (undefined1 *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/pem/pvkfmt.c",0x3aa,"do_PVK_key_bio");
        ERR_set_error(9,0xc0100,0);
      }
      else {
        local_60 = data;
        iVar2 = BIO_read(param_1,data,iVar1);
        if (iVar2 == iVar1) {
          uVar3 = do_PVK_body_key_isra_0
                            (local_60,local_68,local_64,param_2,param_3,param_4,param_5,param_6,
                             param_7);
        }
        else {
          ERR_new();
          ERR_set_debug("../crypto/pem/pvkfmt.c",0x3af,"do_PVK_key_bio");
          ERR_set_error(9,0x7c,0);
        }
        CRYPTO_clear_free(data,(long)iVar1,"../crypto/pem/pvkfmt.c",0x3b5);
      }
    }
  }
  else {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/pem/pvkfmt.c",0x3a0,"do_PVK_key_bio");
    ERR_set_error(9,0x7c,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

