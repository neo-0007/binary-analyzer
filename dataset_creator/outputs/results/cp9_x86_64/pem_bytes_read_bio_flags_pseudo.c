
undefined4
pem_bytes_read_bio_flags
          (undefined8 *param_1,long *param_2,undefined8 *param_3,char *param_4,undefined8 param_5,
          undefined1 *param_6,void *param_7,uint param_8)

{
  char *str;
  uint uVar1;
  int iVar2;
  int iVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  char *local_80;
  char *local_78;
  uchar *local_70;
  long local_68;
  ENGINE *local_60;
  EVP_CIPHER_INFO local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  local_78 = (char *)0x0;
  local_70 = (uchar *)0x0;
  uVar1 = param_8 & 1;
  local_68 = 0;
  pcVar6 = (char *)0x0;
LAB_00541ae1:
  do {
    while( true ) {
      while( true ) {
        if (uVar1 == 0) {
          CRYPTO_free(pcVar6);
          CRYPTO_free(local_78);
          CRYPTO_free(local_70);
        }
        else {
          CRYPTO_secure_clear_free(pcVar6,0,"../crypto/pem/pem_lib.c",0xe0);
          CRYPTO_secure_clear_free(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          CRYPTO_secure_clear_free(local_70,local_68,"../crypto/pem/pem_lib.c",0xe0);
        }
        iVar2 = PEM_read_bio_ex(param_5,&local_80,&local_78,&local_70,&local_68,param_8);
        str = local_80;
        if (iVar2 == 0) {
          uVar5 = ERR_peek_error();
          uVar1 = (uint)uVar5 & 0x7fffffff;
          if ((uVar5 & 0x80000000) == 0) {
            uVar1 = (uint)uVar5 & 0x7fffff;
          }
          uVar7 = 0;
          if (uVar1 == 0x6c) {
            ERR_add_error_data(2,"Expecting: ",param_4);
          }
          goto LAB_00541c18;
        }
        iVar2 = strcmp(local_80,param_4);
        if (iVar2 == 0) goto LAB_00541ba8;
        iVar2 = strcmp(param_4,"ANY PRIVATE KEY");
        if (iVar2 != 0) break;
        iVar2 = strcmp(str,"ENCRYPTED PRIVATE KEY");
        if (((iVar2 == 0) || (iVar2 = strcmp(str,"PRIVATE KEY"), iVar2 == 0)) ||
           ((iVar2 = ossl_pem_check_suffix(str,"PRIVATE KEY"), pcVar6 = local_80, 0 < iVar2 &&
            ((pEVar4 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,str,iVar2), pcVar6 = local_80,
             pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0 && (*(long *)(pEVar4 + 0xb8) != 0))))))
        goto LAB_00541ba8;
      }
      iVar2 = strcmp(param_4,"PARAMETERS");
      if (iVar2 != 0) break;
      iVar2 = ossl_pem_check_suffix(str,"PARAMETERS");
      pcVar6 = local_80;
      if ((0 < iVar2) &&
         (pEVar4 = EVP_PKEY_asn1_find_str(&local_60,str,iVar2), pcVar6 = local_80,
         pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0)) {
        if (*(long *)(pEVar4 + 0x70) != 0) {
          ENGINE_finish(local_60);
          goto LAB_00541ba8;
        }
        ENGINE_finish(local_60);
        pcVar6 = local_80;
      }
    }
    iVar2 = strcmp(str,"X9.42 DH PARAMETERS");
    if ((((iVar2 == 0) && (iVar2 = strcmp(param_4,"DH PARAMETERS"), iVar2 == 0)) ||
        ((iVar2 = strcmp(str,"X509 CERTIFICATE"), iVar2 == 0 &&
         (iVar3 = strcmp(param_4,"CERTIFICATE"), iVar3 == 0)))) ||
       ((iVar3 = strcmp(str,"NEW CERTIFICATE REQUEST"), iVar3 == 0 &&
        (iVar3 = strcmp(param_4,"CERTIFICATE REQUEST"), iVar3 == 0)))) goto LAB_00541ba8;
    iVar3 = strcmp(str,"CERTIFICATE");
    pcVar6 = str;
    if (iVar3 == 0) {
      iVar2 = strcmp(param_4,"TRUSTED CERTIFICATE");
      if ((iVar2 == 0) || (iVar2 = strcmp(param_4,"PKCS7"), iVar2 == 0)) goto LAB_00541ba8;
    }
    else {
      if (((iVar2 == 0) && (iVar2 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar2 == 0)) ||
         ((iVar2 = strcmp(str,"PKCS #7 SIGNED DATA"), iVar2 == 0 &&
          (iVar2 = strcmp(param_4,"PKCS7"), iVar2 == 0)))) goto LAB_00541ba8;
      iVar2 = strcmp(str,"PKCS7");
      if (iVar2 != 0) goto LAB_00541ae1;
    }
    iVar2 = strcmp(param_4,"CMS");
    if (iVar2 == 0) {
LAB_00541ba8:
      iVar2 = PEM_get_EVP_CIPHER_INFO(local_78,&local_58);
      if ((iVar2 == 0) ||
         (iVar2 = PEM_do_header(&local_58,local_70,&local_68,param_6,param_7), iVar2 == 0)) {
        if (uVar1 == 0) {
          uVar7 = 0;
          CRYPTO_free(local_80);
          CRYPTO_free(local_78);
          CRYPTO_free(local_70);
        }
        else {
          uVar7 = 0;
          CRYPTO_secure_clear_free(local_80,0,"../crypto/pem/pem_lib.c",0xe0);
          CRYPTO_secure_clear_free(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          CRYPTO_secure_clear_free(local_70,local_68,"../crypto/pem/pem_lib.c",0xe0);
        }
      }
      else {
        *param_1 = local_70;
        *param_2 = local_68;
        if (param_3 == (undefined8 *)0x0) {
          if (uVar1 == 0) {
            uVar7 = 1;
            CRYPTO_free(local_80);
            CRYPTO_free(local_78);
          }
          else {
            uVar7 = 1;
            CRYPTO_secure_clear_free(local_80,0,"../crypto/pem/pem_lib.c",0xe0);
            CRYPTO_secure_clear_free(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          }
        }
        else {
          *param_3 = local_80;
          if (uVar1 == 0) {
            uVar7 = 1;
            CRYPTO_free(local_78);
          }
          else {
            uVar7 = 1;
            CRYPTO_secure_clear_free(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          }
        }
      }
LAB_00541c18:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return uVar7;
    }
  } while( true );
}

