
undefined8 fix_hkdf_mode(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  uVar2 = default_check_constprop_0();
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 == 1) goto LAB_00514da5;
  }
  else if ((*(int *)(param_3 + 8) == 1) && (param_1 == 8)) {
LAB_00514da5:
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == 0) {
      pcVar5 = "EXTRACT_AND_EXPAND";
    }
    else if (iVar1 == 1) {
      pcVar5 = "EXTRACT_ONLY";
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      pcVar5 = "EXPAND_ONLY";
    }
    *(char **)(param_3 + 0x20) = pcVar5;
    sVar4 = strlen(pcVar5);
    *(int *)(param_3 + 0x1c) = (int)sVar4;
  }
  uVar2 = default_fixup_args(param_1,param_2,param_3);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return 1;
    }
    pcVar5 = *(char **)(param_3 + 0x20);
    iVar1 = strcmp(pcVar5,"EXTRACT_AND_EXPAND");
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      iVar1 = strcmp(pcVar5,"EXTRACT_ONLY");
      if (iVar1 != 0) goto LAB_00514df7;
      lVar3 = 1;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return 1;
    }
    if (param_1 != 2) {
      return 1;
    }
    pcVar5 = *(char **)(param_3 + 0x20);
    iVar1 = strcmp(pcVar5,"EXTRACT_AND_EXPAND");
    if ((iVar1 == 0) || (iVar1 = strcmp(pcVar5,"EXTRACT_ONLY"), iVar1 == 0)) goto LAB_00514d80;
LAB_00514df7:
    iVar1 = strcmp(pcVar5,"EXPAND_ONLY");
    if (iVar1 != 0) {
      return 0;
    }
    lVar3 = 2;
    if (param_1 == 2) goto LAB_00514d80;
  }
  *(undefined4 *)(param_3 + 0x1c) = (&str_value_map_13)[lVar3 * 4];
LAB_00514d80:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return 1;
}

