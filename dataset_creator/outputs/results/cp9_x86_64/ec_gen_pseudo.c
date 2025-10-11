
EC_KEY * ec_gen(undefined8 *param_1)

{
  int iVar1;
  point_conversion_form_t form;
  EC_KEY *key;
  EC_GROUP *group;
  
  iVar1 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return (EC_KEY *)0x0;
  }
  if (iVar1 == 0) {
    return (EC_KEY *)0x0;
  }
  key = (EC_KEY *)EC_KEY_new_ex(*param_1,0);
  if (key == (EC_KEY *)0x0) {
    return (EC_KEY *)0x0;
  }
  group = (EC_GROUP *)param_1[0x10];
  if (group == (EC_GROUP *)0x0) {
    iVar1 = ec_gen_set_group_from_params(param_1);
    if (iVar1 == 0) goto LAB_004702dc;
LAB_004702b6:
    group = (EC_GROUP *)param_1[0x10];
    if (group == (EC_GROUP *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/ec_kmgmt.c",0x4c0,"ec_gen_assign_group");
      ERR_set_error(0x39,0xb1,0);
      goto LAB_004702dc;
    }
  }
  else {
    if (param_1[2] != 0) {
      iVar1 = ossl_ec_encoding_name2id();
      if (iVar1 < 0) goto LAB_004702dc;
      EC_GROUP_set_asn1_flag((EC_GROUP *)param_1[0x10],iVar1);
      if (param_1[3] != 0) {
        form = ossl_ec_pt_format_name2id();
        goto joined_r0x0047030a;
      }
      goto LAB_004702b6;
    }
    if (param_1[3] != 0) {
      form = ossl_ec_pt_format_name2id();
joined_r0x0047030a:
      if ((int)form < 0) goto LAB_004702dc;
      EC_GROUP_set_point_conversion_form((EC_GROUP *)param_1[0x10],form);
      goto LAB_004702b6;
    }
  }
  iVar1 = EC_KEY_set_group(key,group);
  if ((*(byte *)(param_1 + 0xf) & 3) == 0) {
    if (*(int *)((long)param_1 + 0x7c) != -1) {
      if (iVar1 < 1) goto LAB_004702dc;
LAB_00470320:
      iVar1 = ossl_ec_set_ecdh_cofactor_mode(key);
      if (iVar1 == 0) goto LAB_004702dc;
      goto LAB_0047032c;
    }
    if (param_1[4] == 0) {
      if (0 < iVar1) {
        return key;
      }
      goto LAB_004702dc;
    }
    if (iVar1 < 1) goto LAB_004702dc;
  }
  else {
    if ((iVar1 < 1) || (iVar1 = EC_KEY_generate_key(key), iVar1 == 0)) goto LAB_004702dc;
    if (*(int *)((long)param_1 + 0x7c) != -1) goto LAB_00470320;
LAB_0047032c:
    if (param_1[4] == 0) {
      return key;
    }
  }
  iVar1 = ossl_ec_set_check_group_type_from_name(key);
  if (iVar1 != 0) {
    return key;
  }
LAB_004702dc:
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}

