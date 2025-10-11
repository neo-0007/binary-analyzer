
undefined8 OSSL_ENCODER_to_data(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  void *__dest;
  void *__src;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ulong *)0x0;
  if (param_3 == (ulong *)0x0) {
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",99,"OSSL_ENCODER_to_data");
    ERR_set_error(0x3b,0xc0102,0);
    goto LAB_005f00f7;
  }
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
LAB_005f00ec:
    uVar4 = 0;
  }
  else {
    iVar2 = OSSL_ENCODER_to_bio(param_1,bp);
    if (iVar2 == 0) goto LAB_005f00ec;
    lVar3 = BIO_ctrl(bp,0x73,0,&local_38);
    if (lVar3 < 1) goto LAB_005f00ec;
    uVar1 = *local_38;
    if (param_2 == (ulong *)0x0) {
      *param_3 = uVar1;
      uVar4 = 1;
    }
    else {
      __dest = (void *)*param_2;
      if (__dest == (void *)0x0) {
        *param_3 = uVar1;
        uVar4 = 1;
        *param_2 = local_38[1];
        local_38[1] = 0;
      }
      else {
        if (*param_3 < uVar1) goto LAB_005f00ec;
        __src = (void *)local_38[1];
        uVar4 = 1;
        *param_3 = *param_3 - uVar1;
        memcpy(__dest,__src,*local_38);
        *param_2 = *param_2 + *local_38;
      }
    }
  }
  BIO_free(bp);
LAB_005f00f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

