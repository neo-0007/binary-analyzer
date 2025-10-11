
ulong fix_oid(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  ulong uVar3;
  
  uVar1 = default_check_constprop_0();
  if ((int)uVar1 < 1) {
    return (ulong)uVar1;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 2) {
LAB_00515a47:
      uVar3 = default_fixup_args(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    if (param_1 != 8) goto LAB_005159fd;
    if (*(int *)(param_3 + 8) != 1) goto LAB_00515a47;
  }
  OBJ_obj2txt((char *)(param_3 + 0x40),0x32,*(ASN1_OBJECT **)(param_3 + 0x20),0);
  *(char **)(param_3 + 0x20) = (char *)(param_3 + 0x40);
  *(undefined4 *)(param_3 + 0x1c) = 0;
LAB_005159fd:
  uVar1 = default_fixup_args(param_1,param_2,param_3);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    if (param_1 == 7) {
      if (*(int *)(param_3 + 8) != 2) {
        return uVar3;
      }
    }
    else {
      if (param_1 != 2) {
        return uVar3;
      }
      if (*(int *)(param_3 + 8) != 1) {
        return uVar3;
      }
    }
    pAVar2 = OBJ_txt2obj(*(char **)(param_3 + 0x20),0);
    *(ASN1_OBJECT **)(param_3 + 0x20) = pAVar2;
  }
  return uVar3;
}

