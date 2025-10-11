
void FUN_0067f8b0(long param_1,char param_2,char *param_3,char *param_4,long param_5,long param_6)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  param_5 = param_5 - param_6;
  uVar3 = *(uint *)(param_1 + 0x18) & 0xb0;
  if (uVar3 == 0x20) {
    if (param_6 != 0) {
      thunk_FUN_00713a50(param_3,param_4,param_6);
    }
    if (param_5 == 0) {
      return;
    }
    thunk_FUN_00713720(param_3 + param_6,(int)param_2,param_5);
    return;
  }
  pcVar5 = param_3;
  pcVar6 = param_4;
  if (uVar3 == 0x10) {
    plVar4 = (long *)FUN_0067c1e0(param_1 + 0xd0);
    if ((char)plVar4[7] == '\0') {
      FUN_0063d6f0(plVar4);
      cVar2 = '-';
      if (*(code **)(*plVar4 + 0x30) != FUN_00405e50) {
        cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0x2d);
      }
      cVar1 = *param_4;
      if (cVar1 != cVar2) {
        if ((char)plVar4[7] != '\0') goto LAB_0067f9bd;
        FUN_0063d6f0(plVar4);
        cVar2 = '+';
        if (*(code **)(*plVar4 + 0x30) != FUN_00405e50) {
          cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0x2b);
        }
        cVar1 = *param_4;
        if (cVar1 != cVar2) {
          if ((char)plVar4[7] != '\0') goto LAB_0067f9c7;
          FUN_0063d6f0(plVar4);
          cVar2 = '0';
          if (*(code **)(*plVar4 + 0x30) != FUN_00405e50) {
            cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0x30);
          }
          if ((*param_4 != cVar2) || (param_6 < 2)) goto LAB_0067f8ed;
          if ((char)plVar4[7] != '\0') goto LAB_0067f9db;
          cVar1 = FUN_00678db0(plVar4,0x78);
          cVar2 = param_4[1];
          if (cVar2 != cVar1) {
            if ((char)plVar4[7] != '\0') goto LAB_0067f9ed;
            cVar1 = FUN_00678db0(plVar4,0x58);
            cVar2 = param_4[1];
            goto LAB_0067f9f5;
          }
          goto LAB_0067fb7c;
        }
      }
LAB_0067fa90:
      *param_3 = cVar2;
      pcVar6 = param_4 + 1;
      pcVar5 = param_3 + 1;
      lVar7 = 1;
      goto LAB_0067f8f0;
    }
    cVar1 = *param_4;
    cVar2 = cVar1;
    if (*(char *)((long)plVar4 + 0x66) == cVar1) goto LAB_0067fa90;
LAB_0067f9bd:
    cVar2 = cVar1;
    if (*(char *)((long)plVar4 + 100) == cVar1) goto LAB_0067fa90;
LAB_0067f9c7:
    if ((*(char *)((long)plVar4 + 0x69) != cVar1) || (param_6 < 2)) goto LAB_0067f8ed;
LAB_0067f9db:
    cVar2 = param_4[1];
    if (*(char *)((long)plVar4 + 0xb1) == cVar2) {
LAB_0067fb7c:
      pcVar5 = param_3 + 2;
      pcVar6 = param_4 + 2;
      lVar7 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_0067f8f0;
    }
LAB_0067f9ed:
    cVar1 = *(char *)((long)plVar4 + 0x91);
LAB_0067f9f5:
    if (cVar1 == cVar2) goto LAB_0067fb7c;
    if (param_5 == 0) goto LAB_0067f92a;
    lVar7 = 0;
LAB_0067f914:
    thunk_FUN_00713720(pcVar5,(int)param_2,param_5);
    param_4 = pcVar6;
  }
  else {
LAB_0067f8ed:
    lVar7 = 0;
LAB_0067f8f0:
    param_4 = pcVar6;
    if (param_5 != 0) goto LAB_0067f914;
  }
  param_6 = param_6 - lVar7;
  if (param_6 == 0) {
    return;
  }
  param_3 = pcVar5 + param_5;
LAB_0067f92a:
  thunk_FUN_00713a50(param_3,param_4,param_6);
  return;
}

