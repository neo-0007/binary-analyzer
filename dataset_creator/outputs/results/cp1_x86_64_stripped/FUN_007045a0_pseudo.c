
char * FUN_007045a0(uint *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_3 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  pcVar10 = param_3;
  if ((*param_1 & 0xa00) == 0xa00) {
    pcVar9 = param_2 + (long)param_3;
    pcVar8 = (char *)(*(long *)(param_1 + 0x10) - uVar1);
    if (pcVar8 < param_3) {
      lVar5 = 0;
      if (pcVar8 == (char *)0x0) goto LAB_00704643;
LAB_007045ea:
      if (param_3 < pcVar8) {
        pcVar8 = param_3;
      }
      uVar4 = thunk_FUN_00713820(uVar1,param_2,pcVar8);
      *(undefined8 *)(param_1 + 10) = uVar4;
      param_2 = param_2 + (long)pcVar8;
      pcVar10 = param_3 + -(long)pcVar8;
    }
    else {
      do {
        if (pcVar9 <= param_2) {
          lVar5 = 0;
          goto LAB_007045ea;
        }
        pcVar9 = pcVar9 + -1;
      } while (*pcVar9 != '\n');
      pcVar8 = pcVar9 + (1 - (long)param_2);
      if (pcVar8 != (char *)0x0) {
        lVar5 = 1;
        goto LAB_007045ea;
      }
      lVar5 = 1;
    }
    if (pcVar10 + lVar5 == (char *)0x0) {
      return pcVar8;
    }
  }
  else if (uVar1 < *(ulong *)(param_1 + 0xc)) {
    pcVar8 = (char *)(*(ulong *)(param_1 + 0xc) - uVar1);
    lVar5 = 0;
    if (pcVar8 != (char *)0x0) goto LAB_007045ea;
  }
LAB_00704643:
  lVar5 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar5 - 0x93f160U) {
    FUN_00703130();
  }
  iVar3 = (**(code **)(lVar5 + 0x18))(param_1,0xffffffff);
  if (iVar3 == -1) {
    if (pcVar10 != (char *)0x0) {
      return param_3 + -(long)pcVar10;
    }
    return (char *)0xffffffffffffffff;
  }
  pcVar9 = pcVar10;
  if (0x7f < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe))) {
    pcVar9 = pcVar10 + -((ulong)pcVar10 %
                        (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)));
  }
  if (pcVar9 == (char *)0x0) {
LAB_007046a1:
    if (pcVar10 != (char *)0x0) {
      lVar5 = FUN_00706b40(param_1,param_2 + (long)pcVar9,pcVar10);
      param_3 = param_3 + (lVar5 - (long)pcVar10);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x36);
    if ((*param_1 & 0x1000) == 0) {
      lVar6 = *(long *)(param_1 + 4);
      lVar7 = *(long *)(param_1 + 8);
      if (lVar6 == lVar7) goto LAB_0070474d;
      if (0x827 < lVar5 - 0x93f160U) {
        FUN_00703130();
        lVar7 = *(long *)(param_1 + 8);
        lVar6 = *(long *)(param_1 + 4);
      }
      lVar5 = (**(code **)(lVar5 + 0x80))(param_1,lVar7 - lVar6,1);
      if (lVar5 != -1) {
        *(long *)(param_1 + 0x24) = lVar5;
        lVar5 = *(long *)(param_1 + 0x36);
        goto LAB_0070474d;
      }
      pcVar8 = (char *)0x0;
    }
    else {
      param_1[0x24] = 0xffffffff;
      param_1[0x25] = 0xffffffff;
LAB_0070474d:
      if (0x827 < lVar5 - 0x93f160U) {
        FUN_00703130();
      }
      pcVar8 = (char *)(**(code **)(lVar5 + 0x78))(param_1,param_2,pcVar9);
      if ((pcVar8 != (char *)0x0) && ((ushort)param_1[0x20] != 0)) {
        sVar2 = FUN_007076f0((ushort)param_1[0x20] - 1,param_2,(ulong)pcVar8 & 0xffffffff);
        *(short *)(param_1 + 0x20) = sVar2 + 1;
      }
      uVar4 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 10) = uVar4;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar4;
      if ((0 < (int)param_1[0x30]) || ((*param_1 & 0x202) == 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
      }
      *(undefined8 *)(param_1 + 0xc) = uVar4;
      if (pcVar9 <= pcVar8) {
        pcVar10 = pcVar10 + -(long)pcVar8;
        goto LAB_007046a1;
      }
    }
    param_3 = pcVar8 + ((long)param_3 - (long)pcVar10);
  }
  return param_3;
}

