
EC_KEY * EC_KEY_new_by_curve_name_ex(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  EC_KEY *key;
  long lVar2;
  
  key = (EC_KEY *)EC_KEY_new_ex();
  if (key == (EC_KEY *)0x0) {
    return (EC_KEY *)0x0;
  }
  lVar2 = EC_GROUP_new_by_curve_name_ex(param_1,param_2,param_3);
  *(long *)(key + 0x18) = lVar2;
  if (lVar2 != 0) {
    if (*(code **)(*(long *)key + 0x28) == (code *)0x0) {
      return key;
    }
    iVar1 = (**(code **)(*(long *)key + 0x28))(key,lVar2);
    if (iVar1 != 0) {
      return key;
    }
  }
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}

