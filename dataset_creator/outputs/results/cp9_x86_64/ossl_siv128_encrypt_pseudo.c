
int ossl_siv128_encrypt(long param_1,uchar *param_2,uchar *param_3,int param_4)

{
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    iVar2 = siv128_do_s2v_p(param_1,&local_58,param_2);
    if (iVar2 != 0) {
      uVar1 = CONCAT44(uStack_4c,uStack_50);
      ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x20);
      uStack_50 = uStack_50 & 0xffffff7f;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uStack_4c = uStack_4c & 0xffffff7f;
      local_5c = param_4;
      iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,(uchar *)&local_58,
                                1);
      if (iVar2 != 0) {
        iVar2 = EVP_EncryptUpdate(ctx,param_3,&local_5c,param_2,local_5c);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          goto LAB_0053e10a;
        }
      }
    }
  }
  param_4 = 0;
LAB_0053e10a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

