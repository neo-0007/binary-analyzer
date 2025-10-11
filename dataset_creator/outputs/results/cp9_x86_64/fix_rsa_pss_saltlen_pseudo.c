
int fix_rsa_pss_saltlen(int param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  long lVar7;
  char *__src;
  longlong lVar6;
  
  iVar2 = default_check_constprop_0();
  if (iVar2 < 1) {
    return iVar2;
  }
  iVar2 = *(int *)(param_3 + 8);
  if (param_1 == 1) {
    if (iVar2 == 1) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
    }
    else if (iVar2 == 2) goto LAB_0051537a;
  }
  else if ((param_1 == 8) && (iVar2 == 1)) {
LAB_0051537a:
    iVar2 = *(int *)(param_3 + 0x1c);
    pcVar1 = (char *)(param_3 + 0x40);
    if (iVar2 == -1) {
      __src = "digest";
LAB_0051547f:
      strncpy(pcVar1,__src,0x31);
      *(undefined1 *)(param_3 + 0x71) = 0;
    }
    else {
      if (iVar2 == -3) {
        __src = "max";
        goto LAB_0051547f;
      }
      if (iVar2 == -2) {
        __src = "auto";
        goto LAB_0051547f;
      }
      BIO_snprintf(pcVar1,0x32,"%d");
    }
    *(char **)(param_3 + 0x20) = pcVar1;
    sVar5 = strlen(pcVar1);
    *(int *)(param_3 + 0x1c) = (int)sVar5;
  }
  iVar2 = default_fixup_args(param_1,param_2,param_3);
  if (iVar2 < 1) {
    return iVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return iVar2;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return iVar2;
    }
    if (param_1 != 2) {
      return iVar2;
    }
  }
  pcVar1 = *(char **)(param_3 + 0x20);
  iVar3 = strcmp(pcVar1,"digest");
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    iVar3 = strcmp(pcVar1,"max");
    if (iVar3 == 0) {
      lVar7 = 1;
    }
    else {
      iVar3 = strcmp(pcVar1,"auto");
      if (iVar3 != 0) {
        lVar6 = strtoll(pcVar1,(char **)0x0,10);
        uVar4 = (undefined4)lVar6;
        goto LAB_00515451;
      }
      lVar7 = 2;
    }
  }
  uVar4 = (&str_value_map_12)[lVar7 * 4];
LAB_00515451:
  if (param_1 == 2) {
    **(undefined4 **)(param_3 + 0x38) = uVar4;
  }
  else {
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
  }
  *(undefined8 *)(param_3 + 0x20) = 0;
  return iVar2;
}

