
undefined8 des_ede3_cfb1_cipher(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  DES_key_schedule *ks1;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uchar local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  uVar3 = param_4 * 8;
  if (iVar2 != 0) {
    uVar3 = param_4;
  }
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      uVar8 = uVar7 >> 3;
      local_42 = (uchar)(((int)(uint)*(byte *)(param_3 + uVar8) >> (~(byte)uVar7 & 7)) << 7);
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      ks1 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb_encrypt
                (&local_42,&local_41,1,1,ks1,(DES_key_schedule *)(lVar5 + 0x80),
                 (DES_key_schedule *)(lVar4 + 0x100),(DES_cblock *)param_1->iv,iVar2);
      bVar6 = (byte)uVar7 & 7;
      uVar7 = uVar7 + 1;
      pbVar1 = (byte *)(param_2 + uVar8);
      *pbVar1 = ~(byte)(0x80 >> bVar6) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> bVar6);
    } while (uVar3 != uVar7);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

