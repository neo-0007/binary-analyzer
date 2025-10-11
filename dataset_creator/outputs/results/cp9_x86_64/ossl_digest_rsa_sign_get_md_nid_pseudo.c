
void ossl_digest_rsa_sign_get_md_nid(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ossl_digest_get_approved_nid_with_sha1(param_1,param_2,1);
  if (iVar1 != 0) {
    return;
  }
  ossl_digest_md_to_nid(param_2,name_to_nid_0,6);
  return;
}

