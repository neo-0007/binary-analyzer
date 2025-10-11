
undefined8 fix_dh_paramgen_type(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  
  uVar1 = default_check_constprop_0();
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 == 4) {
        uVar2 = strtoll(*(char **)(param_3 + 0x20),(char **)0x0,10);
        __s = (char *)ossl_dh_gen_type_id2name(uVar2 & 0xffffffff);
        *(char **)(param_3 + 0x20) = __s;
        sVar3 = strlen(__s);
        *(int *)(param_3 + 0x1c) = (int)sVar3;
      }
      uVar1 = default_fixup_args(param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

