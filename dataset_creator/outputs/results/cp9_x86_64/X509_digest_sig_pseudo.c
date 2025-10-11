
ASN1_OCTET_STRING * X509_digest_sig(X509 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  EVP_MD *type;
  ASN1_OCTET_STRING *str;
  RSA_PSS_PARAMS *a;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [8];
  long local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (X509 *)0x0) {
    ERR_new();
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("../crypto/x509/x_all.c",0x1c5,"X509_digest_sig");
    ERR_set_error(0xb,0xc0102,0);
    goto LAB_00598107;
  }
  iVar1 = X509_get_signature_nid(param_1);
  iVar1 = OBJ_find_sigid_algs(iVar1,&local_a8,&local_a4);
  if (iVar1 == 0) {
    ERR_new();
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("../crypto/x509/x_all.c",0x1ca,"X509_digest_sig");
    ERR_set_error(0xb,0x90,0);
    goto LAB_00598107;
  }
  if (local_a8 == 0) {
    if (local_a4 == 0x390) {
      a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(&param_1->altname);
      local_90 = 0;
      if (((a == (RSA_PSS_PARAMS *)0x0) ||
          (iVar1 = ossl_rsa_pss_get_param_unverified(a,&local_90,local_98,local_a0,local_9c),
          iVar1 == 0)) || (local_90 == 0)) {
        RSA_PSS_PARAMS_free(a);
        ERR_new();
        ERR_set_debug("../crypto/x509/x_all.c",0x1da,"X509_digest_sig");
        ERR_set_error(0xb,0x6f,0);
      }
      else {
        RSA_PSS_PARAMS_free(a);
        uVar4 = *(undefined8 *)(param_1[1].sha1_hash + 8);
        uVar2 = EVP_MD_get0_name(local_90);
        type = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,uVar2,uVar4);
        if (type != (EVP_MD *)0x0) goto LAB_005980c0;
      }
    }
    else {
      if (local_a4 == 0) {
        ERR_new();
        uVar4 = 0x1f7;
LAB_005981a8:
        str = (ASN1_OCTET_STRING *)0x0;
        ERR_set_debug("../crypto/x509/x_all.c",uVar4,"X509_digest_sig");
        ERR_set_error(0xb,0x6f,0);
        goto LAB_00598107;
      }
      pcVar3 = "SHA512";
      if ((local_a4 != 0x43f) && (pcVar3 = "SHA256", local_a4 == 0x440)) {
        pcVar3 = "SHAKE256";
      }
      type = (EVP_MD *)
             EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,pcVar3,
                          *(undefined8 *)(param_1[1].sha1_hash + 8));
      if (type != (EVP_MD *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 1;
        }
        goto LAB_005980c0;
      }
    }
    str = (ASN1_OCTET_STRING *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1[1].sha1_hash + 8);
    pcVar3 = OBJ_nid2sn(local_a8);
    type = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,pcVar3,uVar4);
    if (type == (EVP_MD *)0x0) {
      pcVar3 = OBJ_nid2sn(local_a8);
      type = EVP_get_digestbyname(pcVar3);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        uVar4 = 0x1fd;
        goto LAB_005981a8;
      }
    }
LAB_005980c0:
    iVar1 = X509_digest(param_1,type,local_88,(uint *)&local_90);
    if ((iVar1 != 0) && (str = ASN1_OCTET_STRING_new(), str != (ASN1_OCTET_STRING *)0x0)) {
      iVar1 = ASN1_OCTET_STRING_set(str,local_88,(uint)local_90);
      if (iVar1 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          EVP_MD_free(type);
        }
        else {
          *param_2 = type;
        }
        goto LAB_00598107;
      }
      ASN1_OCTET_STRING_free(str);
    }
    str = (ASN1_OCTET_STRING *)0x0;
    EVP_MD_free(type);
  }
LAB_00598107:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return str;
}

