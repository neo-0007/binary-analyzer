
EC_KEY * ossl_ec_key_param_from_x509_algor
                   (X509_ALGOR *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EC_GROUP *group;
  EC_KEY *pEVar2;
  EC_KEY *pEVar3;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  EC_KEY *local_30;
  char **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  local_38 = (ASN1_OBJECT *)0x0;
  local_30 = (EC_KEY *)0x0;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_3c,&local_38,param_1);
  local_30 = (EC_KEY *)EC_KEY_new_ex(param_2,param_3);
  if (local_30 == (EC_KEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_backend.c",0x303,"ossl_ec_key_param_from_x509_algor");
    ERR_set_error(0x10,0xc0100,0);
    group = (EC_GROUP *)0x0;
  }
  else if (local_3c == 0x10) {
    local_28 = local_38->ln;
    pEVar3 = d2i_ECParameters(&local_30,(uchar **)&local_28,(long)*(int *)&local_38->sn);
    pEVar2 = local_30;
    if (pEVar3 != (EC_KEY *)0x0) goto LAB_004dfbb6;
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_backend.c",0x30e,"ossl_ec_key_param_from_x509_algor");
    ERR_set_error(0x10,0x8e,0);
    group = (EC_GROUP *)0x0;
  }
  else if (local_3c == 6) {
    iVar1 = OBJ_obj2nid(local_38);
    group = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3,iVar1);
    if (group != (EC_GROUP *)0x0) {
      EC_GROUP_set_asn1_flag(group,1);
      iVar1 = EC_KEY_set_group(local_30,group);
      if (iVar1 != 0) {
        EC_GROUP_free(group);
        pEVar2 = local_30;
        goto LAB_004dfbb6;
      }
    }
  }
  else {
    ERR_new();
    group = (EC_GROUP *)0x0;
    ERR_set_debug("../crypto/ec/ec_backend.c",800,"ossl_ec_key_param_from_x509_algor");
    ERR_set_error(0x10,0x8e,0);
  }
  EC_KEY_free(local_30);
  EC_GROUP_free(group);
  pEVar2 = (EC_KEY *)0x0;
LAB_004dfbb6:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pEVar2;
}

