
bool ossl_DER_w_RSASSA_PSS_params(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  
  if (param_3 == 0) {
    return false;
  }
  iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_3);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = ossl_rsa_pss_params_30_hashalg(param_3);
  iVar2 = ossl_rsa_pss_params_30_saltlen(param_3);
  iVar3 = ossl_rsa_pss_params_30_trailerfield(param_3);
  iVar4 = ossl_rsa_pss_params_30_hashalg(0);
  iVar5 = ossl_rsa_pss_params_30_saltlen(0);
  iVar6 = ossl_rsa_pss_params_30_trailerfield(0);
  if (iVar1 == 0x2a2) {
    puVar10 = ossl_der_aid_sha512Identifier;
    uVar9 = 0xf;
  }
  else if (iVar1 < 0x2a3) {
    if (iVar1 == 0x2a0) {
      puVar10 = ossl_der_aid_sha256Identifier;
      uVar9 = 0xf;
    }
    else if (iVar1 == 0x2a1) {
      puVar10 = ossl_der_aid_sha384Identifier;
      uVar9 = 0xf;
    }
    else {
      if (iVar1 != 0x40) {
        return false;
      }
      puVar10 = ossl_der_aid_sha1Identifier;
      uVar9 = 0xb;
    }
  }
  else if (iVar1 == 0x446) {
    puVar10 = ossl_der_aid_sha512_224Identifier;
    uVar9 = 0xf;
  }
  else if (iVar1 == 0x447) {
    puVar10 = ossl_der_aid_sha512_256Identifier;
    uVar9 = 0xf;
  }
  else {
    if (iVar1 != 0x2a3) {
      return false;
    }
    puVar10 = ossl_der_aid_sha224Identifier;
    uVar9 = 0xf;
  }
  iVar7 = ossl_DER_w_begin_sequence(param_1,param_2);
  if (iVar7 == 0) {
    return false;
  }
  if ((iVar3 != iVar6) && (iVar3 = ossl_DER_w_ulong(param_1,3,(long)iVar3), iVar3 == 0)) {
    return false;
  }
  if ((iVar2 != iVar5) && (iVar2 = ossl_DER_w_ulong(param_1,2,(long)iVar2), iVar2 == 0)) {
    return false;
  }
  iVar2 = ossl_rsa_pss_params_30_maskgenalg(param_3);
  if (iVar2 != 0x38f) {
    return false;
  }
  iVar2 = ossl_rsa_pss_params_30_maskgenhashalg(param_3);
  if (iVar2 == 0x2a2) {
    puVar8 = der_aid_mgf1SHA512Identifier;
  }
  else if (iVar2 < 0x2a3) {
    if (iVar2 == 0x2a0) {
      puVar8 = der_aid_mgf1SHA256Identifier;
    }
    else {
      puVar8 = der_aid_mgf1SHA384Identifier;
      if (iVar2 != 0x2a1) {
        if (iVar2 != 0x40) {
          return false;
        }
        goto LAB_00482c6c;
      }
    }
  }
  else if (iVar2 == 0x446) {
    puVar8 = der_aid_mgf1SHA512_224Identifier;
  }
  else {
    puVar8 = der_aid_mgf1SHA512_256Identifier;
    if ((iVar2 != 0x447) && (puVar8 = der_aid_mgf1SHA224Identifier, iVar2 != 0x2a3)) {
      return false;
    }
  }
  iVar2 = ossl_DER_w_precompiled(param_1,1,puVar8,0x1c);
  if (iVar2 == 0) {
    return false;
  }
LAB_00482c6c:
  if ((iVar1 != iVar4) && (iVar1 = ossl_DER_w_precompiled(param_1,0,puVar10,uVar9), iVar1 == 0)) {
    return false;
  }
  iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
  return iVar1 != 0;
}

