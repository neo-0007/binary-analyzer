
undefined8 des_ede_ofb_cipher(long param_1,int *param_2,uchar *param_3,DES_cblock *param_4)

{
  long lVar1;
  long lVar2;
  DES_key_schedule *pDVar3;
  DES_cblock *pauVar4;
  uchar *extraout_RDX;
  int *piVar5;
  uchar *puVar6;
  long lVar7;
  DES_cblock *pauVar8;
  long in_FS_OFFSET;
  int *local_60;
  uchar *local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar4 = param_4;
  piVar5 = param_2;
  pauVar8 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if ((DES_cblock *)0x3fffffffffffffff < param_4) {
    puVar6 = param_3;
    do {
      local_44 = EVP_CIPHER_CTX_get_num(param_1,piVar5,puVar6,pauVar4);
      lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      puVar6 = (uchar *)(((long)param_2 + (long)param_4) - (long)pauVar8);
      lVar7 = -(long)pauVar8;
      pauVar8 = pauVar8 + -0x800000000000000;
      pauVar4 = (DES_cblock *)(param_1 + 0x28);
      piVar5 = &local_44;
      DES_ede3_ofb64_encrypt
                (param_3 + (long)param_4 + lVar7,puVar6,0x4000000000000000,pDVar3,
                 (DES_key_schedule *)(lVar2 + 0x80),(DES_key_schedule *)(lVar1 + 0x100),
                 (DES_cblock *)(param_1 + 0x28),&local_44);
      EVP_CIPHER_CTX_set_num(param_1,local_44);
      puVar6 = extraout_RDX;
    } while ((DES_cblock *)0x3fffffffffffffff < pauVar8);
    pauVar8 = (DES_cblock *)((ulong)param_4 & 0x3fffffffffffffff);
    lVar7 = ((ulong)(param_4 + -0x800000000000000) >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + lVar7;
    local_60 = (int *)((long)param_2 + lVar7);
    param_3 = extraout_RDX;
  }
  if (pauVar8 != (DES_cblock *)0x0) {
    local_44 = EVP_CIPHER_CTX_get_num(param_1,piVar5,param_3,pauVar4);
    lVar7 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_ede3_ofb64_encrypt
              (local_58,(uchar *)local_60,(long)pauVar8,pDVar3,(DES_key_schedule *)(lVar1 + 0x80),
               (DES_key_schedule *)(lVar7 + 0x100),(DES_cblock *)(param_1 + 0x28),&local_44);
    EVP_CIPHER_CTX_set_num(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

