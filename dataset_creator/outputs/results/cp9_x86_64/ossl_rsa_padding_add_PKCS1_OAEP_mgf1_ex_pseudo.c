
undefined8
ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
          (undefined8 param_1,undefined1 *param_2,int param_3,void *param_4,uint param_5,
          void *param_6,int param_7,EVP_MD *param_8,EVP_MD *param_9)

{
  byte *pbVar1;
  uchar *seed;
  int iVar2;
  int iVar3;
  int iVar4;
  long seedlen;
  uchar *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long len;
  long in_FS_OFFSET;
  undefined8 local_90;
  byte local_88 [72];
  long local_40;
  
  param_3 = param_3 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == (EVP_MD *)0x0) {
    param_8 = EVP_sha1();
  }
  if (param_9 == (EVP_MD *)0x0) {
    param_9 = param_8;
  }
  iVar2 = EVP_MD_get_size(param_8);
  if (iVar2 < 1) {
    ERR_new();
    uVar8 = 0;
    ERR_set_debug("../crypto/rsa/rsa_oaep.c",0x51,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0xb5,0);
    goto LAB_00558f23;
  }
  iVar3 = param_3 + iVar2 * -2;
  if (iVar3 <= (int)param_5) {
    ERR_new();
    uVar8 = 0;
    ERR_set_debug("../crypto/rsa/rsa_oaep.c",0x57,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x6e,0);
    goto LAB_00558f23;
  }
  if (param_3 <= iVar2 * 2) {
    ERR_new();
    uVar8 = 0;
    ERR_set_debug("../crypto/rsa/rsa_oaep.c",0x5c,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x78,0);
    goto LAB_00558f23;
  }
  seedlen = (long)iVar2;
  *param_2 = 0;
  puVar5 = param_2 + seedlen + 1;
  local_90 = (uchar *)CONCAT44(local_90._4_4_,iVar2 * 2);
  iVar4 = EVP_Digest(param_6,(long)param_7,puVar5,(uint *)0x0,param_8,(ENGINE *)0x0);
  if (iVar4 == 0) {
LAB_00558f50:
    len = 0;
    puVar5 = (uchar *)0x0;
    uVar8 = 0;
  }
  else {
    iVar4 = (param_3 - param_5) - (int)local_90;
    local_90 = puVar5;
    memset(puVar5 + seedlen,0,(long)(iVar4 + -1));
    local_90[(long)(iVar4 + iVar2) + -1] = '\x01';
    memcpy(local_90 + (((long)param_3 - (long)(int)param_5) - seedlen),param_4,(ulong)param_5);
    iVar4 = RAND_bytes_ex(param_1,param_2 + 1,seedlen,0);
    if (iVar4 < 1) goto LAB_00558f50;
    iVar3 = iVar3 + iVar2;
    len = (long)iVar3;
    puVar5 = (uchar *)CRYPTO_malloc(iVar3,"../crypto/rsa/rsa_oaep.c",0x72);
    seed = local_90;
    if (puVar5 == (uchar *)0x0) {
      ERR_new();
      uVar8 = 0;
      ERR_set_debug("../crypto/rsa/rsa_oaep.c",0x74,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
      ERR_set_error(4,0xc0100,0);
    }
    else {
      iVar4 = PKCS1_MGF1(puVar5,len,param_2 + 1,seedlen,param_9);
      if (iVar4 < 0) {
        uVar8 = 0;
      }
      else {
        lVar6 = 0;
        if (0 < iVar3) {
          do {
            pbVar1 = seed + lVar6;
            *pbVar1 = *pbVar1 ^ puVar5[lVar6];
            lVar6 = lVar6 + 1;
          } while (len != lVar6);
        }
        uVar8 = 0;
        iVar3 = PKCS1_MGF1(local_88,seedlen,seed,len,param_9);
        if (-1 < iVar3) {
          uVar7 = 1;
          do {
            param_2[uVar7] = param_2[uVar7] ^ local_88[uVar7 - 1];
            uVar7 = uVar7 + 1;
          } while (iVar2 + 1 != uVar7);
          uVar8 = 1;
        }
      }
    }
  }
  OPENSSL_cleanse(local_88,0x40);
  CRYPTO_clear_free(puVar5,len,"../crypto/rsa/rsa_oaep.c",0x89);
LAB_00558f23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

