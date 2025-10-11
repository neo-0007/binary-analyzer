
ulong ossl_siv128_decrypt(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  EVP_CIPHER_CTX *ctx;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  int local_6c;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x3c) != 0) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x20);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    local_6c = (int)param_4;
    local_50 = *(ulong *)(param_1 + 0x18) & 0xffffffffffffff7f;
    local_50 = CONCAT35(local_50._5_3_,
                        CONCAT14((char)(*(ulong *)(param_1 + 0x18) >> 0x20),(undefined4)local_50)) &
               0xffffff7fffffffff;
    uVar1 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,(uchar *)&local_58,1)
    ;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) goto LAB_0053e1f9;
    iVar2 = EVP_EncryptUpdate(ctx,param_3,&local_6c,param_2,local_6c);
    if (iVar2 != 0) {
      pbVar4 = (byte *)&local_68;
      iVar2 = siv128_do_s2v_p(param_1,pbVar4,param_3,param_4);
      if (iVar2 != 0) {
        pbVar5 = (byte *)(param_1 + 0x10);
        do {
          *pbVar4 = *pbVar4 ^ *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar4 != (byte *)&local_58);
        if (local_68 == 0 && local_60 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          uVar3 = param_4 & 0xffffffff;
          goto LAB_0053e1f9;
        }
        OPENSSL_cleanse(param_3,param_4);
      }
    }
  }
  uVar3 = 0;
LAB_0053e1f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

