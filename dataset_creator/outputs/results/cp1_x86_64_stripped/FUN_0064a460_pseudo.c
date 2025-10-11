
undefined1  [16]
FUN_0064a460(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6,
            int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  
  uVar10 = param_3 & 0xffffffff;
  uVar5 = 10;
  plVar4 = (long *)FUN_0067c1e0(param_10 + 0xd0);
  if ((param_9 != 2) && (uVar5 = 1000, param_9 != 4)) {
    uVar5 = 1;
  }
  iVar9 = 0;
  uVar11 = 0;
  while( true ) {
    uVar3 = (uint)uVar10;
    bVar12 = uVar3 == 0xffffffff;
    bVar6 = param_2 != (long *)0x0 && bVar12;
    bVar7 = bVar12;
    if (bVar6) {
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        bVar7 = false;
      }
      else {
        iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
        bVar7 = iVar2 == -1 && bVar6;
        if (iVar2 == -1) {
          param_2 = (long *)0x0;
        }
      }
    }
    if ((param_4 == (long *)0x0) || (param_5 != -1)) {
      bVar7 = (bool)(bVar7 ^ param_5 == -1);
    }
    else if (((ulong)param_4[3] <= (ulong)param_4[2]) &&
            (iVar2 = (**(code **)(*param_4 + 0x48))(param_4), iVar2 == -1)) {
      bVar7 = (bool)(bVar7 ^ 1);
      param_4 = (long *)0x0;
    }
    if ((param_9 <= uVar11) || (!bVar7)) break;
    if ((param_2 == (long *)0x0) || (!bVar12)) {
      uVar8 = uVar3 & 0xff;
    }
    else if ((byte *)param_2[2] < (byte *)param_2[3]) {
      uVar3 = (uint)*(byte *)param_2[2];
      uVar8 = uVar3;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      if (uVar3 == 0xffffffff) {
        uVar8 = 0xff;
        uVar3 = 0xffffffff;
        param_2 = (long *)0x0;
      }
      else {
        uVar8 = uVar3 & 0xff;
      }
    }
    cVar1 = *(char *)((long)plVar4 + (long)(int)uVar8 + 0x139);
    if (cVar1 == '\0') {
      cVar1 = (char)uVar3;
      if (*(code **)(*plVar4 + 0x40) != FUN_0063d3c0) {
        cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4,(int)(char)uVar3,0x2a);
      }
      if (cVar1 == '*') goto LAB_0064a5c9;
      *(char *)((long)plVar4 + (long)(int)uVar8 + 0x139) = cVar1;
    }
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0064a5c9;
    iVar9 = (int)(char)(cVar1 - 0x30U) + iVar9 * 10;
    if ((param_8 < (int)(uVar5 * iVar9)) || ((int)(uVar5 * iVar9 + uVar5) <= param_7))
    goto LAB_0064a5c9;
    uVar5 = uVar5 / 10;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      param_2[2] = param_2[2] + 1;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
    }
    uVar11 = uVar11 + 1;
    uVar10 = 0xffffffff;
  }
  if (uVar11 == param_9) goto LAB_0064a5e1;
LAB_0064a5c9:
  if ((param_9 == 4) && (uVar11 == 2)) {
    iVar9 = iVar9 + -100;
LAB_0064a5e1:
    *param_6 = iVar9;
  }
  else {
    *param_11 = *param_11 | 4;
  }
  auVar13._8_8_ = param_3 & 0xffffffff00000000 | uVar10;
  auVar13._0_8_ = param_2;
  return auVar13;
}

