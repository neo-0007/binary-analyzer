
undefined8
rsa_verify_recover_part_0
          (long param_1,uchar *param_2,size_t *param_3,ulong param_4,uchar *param_5,int param_6)

{
  byte bVar1;
  uchar *__src;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  size_t __n;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  
  iVar2 = *(int *)(param_1 + 0x68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar2 = RSA_public_decrypt(param_6,param_5,param_2,*(RSA **)(param_1 + 0x10),iVar2);
    if (iVar2 < 0) {
      ERR_new();
      uVar6 = 0x2e9;
LAB_0047e1e1:
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",uVar6,"rsa_verify_recover");
      ERR_set_error(0x39,0x80004,0);
      uVar6 = 0;
      goto LAB_0047e073;
    }
    __n = (size_t)iVar2;
  }
  else if (iVar2 == 1) {
    iVar2 = ossl_rsa_verify(*(undefined4 *)(param_1 + 0x30),0,0,param_2,local_48,param_5);
    if (iVar2 < 1) {
      ERR_new();
      uVar6 = 0x2d9;
      goto LAB_0047e1e1;
    }
    __n = (size_t)local_48[0];
  }
  else {
    if (iVar2 != 5) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x2e1,"rsa_verify_recover");
      ERR_set_error(0x39,0xa8,"Only X.931 or PKCS#1 v1.5 padding allowed");
      uVar6 = 0;
      goto LAB_0047e073;
    }
    uVar6 = setup_tbuf();
    if ((int)uVar6 == 0) goto LAB_0047e073;
    iVar2 = RSA_public_decrypt(param_6,param_5,*(uchar **)(param_1 + 0xb8),*(RSA **)(param_1 + 0x10)
                               ,5);
    if (iVar2 < 1) {
      ERR_new();
      uVar6 = 0x2b7;
      goto LAB_0047e1e1;
    }
    iVar2 = iVar2 + -1;
    __n = (size_t)iVar2;
    bVar1 = *(byte *)(*(long *)(param_1 + 0xb8) + __n);
    uVar3 = RSA_X931_hash_id(*(int *)(param_1 + 0x30));
    if (bVar1 != uVar3) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",700,"rsa_verify_recover");
      ERR_set_error(0x39,0xad,0);
      uVar6 = 0;
      goto LAB_0047e073;
    }
    iVar4 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
    if (iVar2 != iVar4) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x2c0,"rsa_verify_recover");
      uVar5 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
      ERR_set_error(0x39,0xa6,"Should be %d, but got %d",uVar5,iVar2);
      uVar6 = 0;
      goto LAB_0047e073;
    }
    __src = *(uchar **)(param_1 + 0xb8);
    *param_3 = __n;
    if (__src != param_2) {
      if (param_4 < __n) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x2c9,"rsa_verify_recover")
        ;
        ERR_set_error(0x39,0x6a,"buffer size is %d, should be %d",param_4,iVar2);
        uVar6 = 0;
        goto LAB_0047e073;
      }
      memcpy(param_2,__src,__n);
    }
  }
  *param_3 = __n;
  uVar6 = 1;
LAB_0047e073:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

