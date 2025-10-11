
undefined4
ossl_ed25519_public_from_private
          (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *type;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_118 [160];
  byte local_78 [31];
  byte local_59;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_1,"SHA512",param_4);
  if (type != (EVP_MD *)0x0) {
    iVar1 = EVP_Digest(param_3,0x20,local_78,(uint *)0x0,type,(ENGINE *)0x0);
    EVP_MD_free(type);
    if (iVar1 == 0) {
      OPENSSL_cleanse(local_78,0x40);
      uVar2 = 0;
    }
    else {
      local_78[0] = local_78[0] & 0xf8;
      uVar2 = 1;
      local_59 = local_59 & 0x3f | 0x40;
      ge_scalarmult_base(auStack_118,local_78);
      ge_p3_tobytes(param_2,auStack_118);
      OPENSSL_cleanse(local_78,0x40);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

