
EC_KEY * sm2_gen(undefined8 *param_1)

{
  byte bVar1;
  EC_GROUP *group;
  int iVar2;
  point_conversion_form_t form;
  EC_KEY *key;
  
  if (param_1 == (undefined8 *)0x0) {
    return (EC_KEY *)0x0;
  }
  key = (EC_KEY *)EC_KEY_new_ex(*param_1,0);
  if (key == (EC_KEY *)0x0) {
    return (EC_KEY *)0x0;
  }
  if ((EC_GROUP *)param_1[0x10] == (EC_GROUP *)0x0) {
    iVar2 = ec_gen_set_group_from_params(param_1);
    if (iVar2 == 0) goto LAB_00470120;
    group = (EC_GROUP *)param_1[0x10];
joined_r0x00470186:
    if (group == (EC_GROUP *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/ec_kmgmt.c",0x4c0,"ec_gen_assign_group");
      ERR_set_error(0x39,0xb1,0);
      EC_KEY_free(key);
      return (EC_KEY *)0x0;
    }
    iVar2 = EC_KEY_set_group(key,group);
    bVar1 = *(byte *)(param_1 + 0xf);
  }
  else {
    if (param_1[2] != 0) {
      iVar2 = ossl_ec_encoding_name2id();
      if (iVar2 < 0) goto LAB_00470120;
      EC_GROUP_set_asn1_flag((EC_GROUP *)param_1[0x10],iVar2);
      if (param_1[3] != 0) goto LAB_004700da;
LAB_004700f1:
      group = (EC_GROUP *)param_1[0x10];
      goto joined_r0x00470186;
    }
    if (param_1[3] != 0) {
LAB_004700da:
      form = ossl_ec_pt_format_name2id();
      if ((int)form < 0) goto LAB_00470120;
      EC_GROUP_set_point_conversion_form((EC_GROUP *)param_1[0x10],form);
      goto LAB_004700f1;
    }
    iVar2 = EC_KEY_set_group(key,(EC_GROUP *)param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0xf);
  }
  if ((bVar1 & 3) == 0) {
    if (0 < iVar2) {
      return key;
    }
  }
  else if ((0 < iVar2) && (iVar2 = EC_KEY_generate_key(key), iVar2 != 0)) {
    return key;
  }
LAB_00470120:
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}

