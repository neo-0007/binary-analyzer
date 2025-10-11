
bool x509_cb(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *obj;
  int iVar1;
  
  obj = (void *)*param_2;
  switch(param_1) {
  default:
    return true;
  case 1:
    break;
  case 3:
    CRYPTO_free_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
    X509_CERT_AUX_free(*(X509_CERT_AUX **)((long)obj + 0x150));
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)((long)obj + 0xf8));
    AUTHORITY_KEYID_free(*(AUTHORITY_KEYID **)((long)obj + 0x100));
    CRL_DIST_POINTS_free(*(CRL_DIST_POINTS **)((long)obj + 0x110));
    ossl_policy_cache_free(*(undefined8 *)((long)obj + 0x108));
    GENERAL_NAMES_free(*(GENERAL_NAMES **)((long)obj + 0x118));
    NAME_CONSTRAINTS_free(*(NAME_CONSTRAINTS **)((long)obj + 0x120));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)obj + 0x128),IPAddressFamily_free);
    ASIdentifiers_free(*(ASIdentifiers **)((long)obj + 0x130));
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)((long)obj + 0x168));
    CRYPTO_free(*(void **)((long)obj + 0x178));
    return true;
  case 4:
    CRYPTO_free_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
    X509_CERT_AUX_free(*(X509_CERT_AUX **)((long)obj + 0x150));
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)((long)obj + 0xf8));
    AUTHORITY_KEYID_free(*(AUTHORITY_KEYID **)((long)obj + 0x100));
    CRL_DIST_POINTS_free(*(CRL_DIST_POINTS **)((long)obj + 0x110));
    ossl_policy_cache_free(*(undefined8 *)((long)obj + 0x108));
    GENERAL_NAMES_free(*(GENERAL_NAMES **)((long)obj + 0x118));
    NAME_CONSTRAINTS_free(*(NAME_CONSTRAINTS **)((long)obj + 0x120));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)obj + 0x128),IPAddressFamily_free);
    ASIdentifiers_free(*(ASIdentifiers **)((long)obj + 0x130));
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)((long)obj + 0x168));
    break;
  case 0xf:
    iVar1 = ossl_x509_set0_libctx(obj,param_4[0x2e],param_4[0x2f]);
    return iVar1 != 0;
  case 0x10:
    *param_4 = *(undefined8 *)((long)obj + 0x170);
    return true;
  case 0x11:
    *param_4 = *(undefined8 *)((long)obj + 0x178);
    return true;
  }
  *(undefined4 *)((long)obj + 0x160) = 0;
  *(undefined8 *)((long)obj + 0x168) = 0;
  *(undefined8 *)((long)obj + 0x150) = 0;
  *(undefined8 *)((long)obj + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)((long)obj + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)((long)obj + 0xe8) = 0;
  *(undefined8 *)((long)obj + 0xf0) = 0;
  *(undefined8 *)((long)obj + 0xf8) = 0;
  *(undefined8 *)((long)obj + 0x100) = 0;
  *(undefined8 *)((long)obj + 0x108) = 0;
  *(undefined8 *)((long)obj + 0x110) = 0;
  *(undefined8 *)((long)obj + 0x118) = 0;
  *(undefined8 *)((long)obj + 0x120) = 0;
  *(undefined8 *)((long)obj + 0x128) = 0;
  *(undefined8 *)((long)obj + 0x130) = 0;
  iVar1 = CRYPTO_new_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
  return iVar1 != 0;
}

