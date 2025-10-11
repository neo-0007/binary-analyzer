
int EC_KEY_set_group(EC_KEY *key,EC_GROUP *group)

{
  int iVar1;
  EC_GROUP *group_00;
  
  if ((*(code **)(*(long *)key + 0x28) != (code *)0x0) &&
     (iVar1 = (**(code **)(*(long *)key + 0x28))(), iVar1 == 0)) {
    return 0;
  }
  EC_GROUP_free(*(EC_GROUP **)(key + 0x18));
  group_00 = EC_GROUP_dup(group);
  *(EC_GROUP **)(key + 0x18) = group_00;
  if (group_00 != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_get_curve_name(group_00);
    if (iVar1 == 0x494) {
      EC_KEY_set_flags(key,4);
    }
    group_00 = *(EC_GROUP **)(key + 0x18);
  }
  *(long *)(key + 0x68) = *(long *)(key + 0x68) + 1;
  return (uint)(group_00 != (EC_GROUP *)0x0);
}

