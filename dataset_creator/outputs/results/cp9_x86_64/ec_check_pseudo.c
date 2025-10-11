
bool ec_check(EC_KEY *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = EC_KEY_get_flags(param_1);
  return (*(int *)(*(long *)(param_2 + 8) + 0x18) == 0x494) == (bool)((byte)(uVar1 >> 2) & 1);
}

