
int PKCS5_v2_scrypt_keyivgen_ex
              (EVP_CIPHER_CTX *param_1,undefined8 param_2,int param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
              undefined8 param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  size_t len;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = EVP_CIPHER_CTX_get0_cipher();
  if (lVar3 == 0) {
    iVar2 = 0;
    ERR_new();
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0xe0,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x83,0);
    puVar5 = (undefined8 *)0x0;
    goto LAB_00614536;
  }
  uVar4 = SCRYPT_PARAMS_it();
  puVar5 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar4,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0xe9,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x72,0);
    goto LAB_00614536;
  }
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  if (iVar1 < 0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0xef,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x82,0);
    goto LAB_00614536;
  }
  len = (size_t)iVar1;
  if (puVar5[4] == 0) {
LAB_00614570:
    iVar2 = ASN1_INTEGER_get_uint64(&local_90,puVar5[1]);
    if (iVar2 != 0) {
      iVar2 = ASN1_INTEGER_get_uint64(&local_98,puVar5[2]);
      if (iVar2 != 0) {
        iVar2 = ASN1_INTEGER_get_uint64(&local_a0,puVar5[3]);
        if (iVar2 != 0) {
          iVar2 = EVP_PBE_scrypt_ex(0,0,0,0,local_90,local_98,local_a0,0,0,0,param_8,param_9);
          if (iVar2 != 0) {
            iVar2 = EVP_PBE_scrypt_ex(param_2,(long)param_3,*(undefined8 *)((int *)*puVar5 + 2),
                                      (long)*(int *)*puVar5,local_90,local_98,local_a0,0,local_88,
                                      len,param_8,param_9);
            if (iVar2 != 0) {
              iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,
                                        (uchar *)0x0,param_7);
            }
            goto LAB_00614525;
          }
        }
      }
    }
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0x104,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0xab,0);
  }
  else {
    iVar2 = ASN1_INTEGER_get_uint64();
    if ((iVar2 != 0) && (local_90 == len)) goto LAB_00614570;
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/asn1/p5_scrypt.c",0xfa,"PKCS5_v2_scrypt_keyivgen_ex");
    ERR_set_error(6,0x7b,0);
  }
LAB_00614525:
  if (iVar1 != 0) {
    OPENSSL_cleanse(local_88,len);
  }
LAB_00614536:
  SCRYPT_PARAMS_free(puVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

