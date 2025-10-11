
ulong fix_cipher_md(int param_1,undefined8 param_2,long *param_3,code *param_4,code *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  char *__s;
  
  uVar2 = default_check_constprop_0();
  if ((int)uVar2 < 1) {
    return (ulong)uVar2;
  }
  if (param_1 == 1) {
    if ((int)param_3[1] == 1) {
      *(undefined4 *)((long)param_3 + 0x1c) = 0x32;
      param_3[7] = param_3[4];
      param_3[4] = (long)(param_3 + 8);
      goto LAB_00514bef;
    }
    if ((int)param_3[1] != 2) goto LAB_00514bef;
    lVar5 = param_3[4];
    if (lVar5 != 0) goto LAB_00514c6a;
    __s = OBJ_nid2sn(*(int *)((long)param_3 + 0x1c));
  }
  else {
    if (param_1 != 8) {
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      uVar4 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return uVar4;
      }
      if (param_1 == 2) {
        if ((int)param_3[1] != 1) {
          return uVar4;
        }
        puVar1 = (undefined8 *)param_3[7];
        uVar3 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
        *puVar1 = uVar3;
        *(undefined4 *)((long)param_3 + 0x1c) = 1;
        return uVar4;
      }
      if (param_1 != 7) {
        return uVar4;
      }
      if ((int)param_3[1] != 2) {
        return uVar4;
      }
      lVar5 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
      *(undefined4 *)((long)param_3 + 0x1c) = 0;
      param_3[4] = lVar5;
      return uVar4;
    }
    if ((int)param_3[1] != 1) goto LAB_00514bef;
    lVar5 = param_3[4];
    __s = "";
    if (lVar5 != 0) {
LAB_00514c6a:
      __s = (char *)(*param_4)(lVar5);
    }
  }
  param_3[4] = (long)__s;
  sVar6 = strlen(__s);
  *(int *)((long)param_3 + 0x1c) = (int)sVar6;
LAB_00514bef:
  uVar4 = default_fixup_args(param_1,param_2,param_3);
  return uVar4;
}

