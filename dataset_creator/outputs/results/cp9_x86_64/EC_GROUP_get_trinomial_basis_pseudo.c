
undefined8 EC_GROUP_get_trinomial_basis(long param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = EC_GROUP_get_field_type();
  if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
    *param_2 = *(int *)(param_1 + 0x4c);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_lib.c",0x54b,"EC_GROUP_get_trinomial_basis");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}

