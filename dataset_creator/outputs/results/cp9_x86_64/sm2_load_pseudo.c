
EC_KEY * sm2_load(undefined8 *param_1,long param_2)

{
  EC_KEY *key;
  int iVar1;
  EC_GROUP *group;
  
  iVar1 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar1 != 0)) {
    key = (EC_KEY *)*param_1;
    group = EC_KEY_get0_group(key);
    if (group != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(group);
      if (iVar1 == 0x494) {
        *param_1 = 0;
        return key;
      }
    }
  }
  return (EC_KEY *)0x0;
}

