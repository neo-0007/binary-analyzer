
undefined8 fix_kdf_type(int param_1,undefined8 param_2,long param_3,int *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *__s;
  
  uVar4 = default_check_constprop_0();
  if ((int)uVar4 < 1) {
    return uVar4;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 0) {
      return 0;
    }
    uVar2 = 2;
    if (*(int *)(param_3 + 0x1c) == -2) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
      uVar2 = 1;
    }
    *(undefined4 *)(param_3 + 8) = uVar2;
    uVar4 = default_check_constprop_0(1,param_2);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    if (*(int *)(param_3 + 8) != 2) {
LAB_00515531:
      uVar4 = default_fixup_args(param_1,param_2,param_3);
      return uVar4;
    }
  }
  else {
    uVar4 = default_check_constprop_0(param_1,param_2);
    if ((int)uVar4 < 1) {
      return uVar4;
    }
    if (param_1 != 8) {
LAB_00515575:
      uVar4 = default_fixup_args(param_1,param_2,param_3);
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      if (param_1 == 2) {
        if (*(int *)(param_3 + 8) != 1) {
          return uVar4;
        }
      }
      else {
        if (param_1 != 7) {
          return uVar4;
        }
        if (*(int *)(param_3 + 8) != 2) {
          if (*(int *)(param_3 + 8) != 1) {
            return uVar4;
          }
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar4;
        }
      }
      *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
      lVar1 = *(long *)(param_4 + 2);
      do {
        if (lVar1 == 0) {
          uVar4 = 0xffffffff;
LAB_005155db:
          *(undefined8 *)(param_3 + 0x20) = 0;
          return uVar4;
        }
        iVar3 = OPENSSL_strcasecmp(*(undefined8 *)(param_3 + 0x20));
        if (iVar3 == 0) {
          *(int *)(param_3 + 0x1c) = *param_4;
          uVar4 = 1;
          goto LAB_005155db;
        }
        lVar1 = *(long *)(param_4 + 6);
        param_4 = param_4 + 4;
      } while( true );
    }
    if (*(int *)(param_3 + 8) != 1) goto LAB_00515531;
  }
  __s = *(char **)(param_4 + 2);
  if (__s != (char *)0x0) {
    do {
      if (*(int *)(param_3 + 0x1c) == *param_4) {
        *(char **)(param_3 + 0x20) = __s;
        sVar5 = strlen(__s);
        *(int *)(param_3 + 0x1c) = (int)sVar5;
        goto LAB_00515575;
      }
      __s = *(char **)(param_4 + 6);
      param_4 = param_4 + 4;
    } while (__s != (char *)0x0);
  }
  return 0xfffffffe;
}

