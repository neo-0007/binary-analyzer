
ulong FUN_006179d0(long param_1,int param_2,long param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  piVar1 = *(int **)(param_1 + 0x40);
  iVar2 = (int)param_3;
  if (param_2 < 0x10) {
    switch(param_2) {
    case 1:
      iVar2 = *(int *)(param_1 + 0x38);
      *piVar1 = 1;
      if (iVar2 != -1) {
        FUN_004b0060();
        *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      }
      FUN_005bfdd0(*(undefined8 *)(piVar1 + 8));
      piVar1[8] = 0;
      piVar1[9] = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 0;
    case 2:
      return (ulong)(*(uint *)(param_1 + 0x30) >> 0xb & 1);
    case 8:
      return (long)*(int *)(param_1 + 0x2c);
    case 9:
      *(int *)(param_1 + 0x2c) = iVar2;
      return 1;
    case 0xb:
      return 1;
    case 0xc:
      if (*(long *)(piVar1 + 2) != 0) {
        FUN_004abd40(param_4,100,0);
      }
      if (*(long *)(piVar1 + 4) != 0) {
        FUN_004abd40(param_4,100,1);
      }
      FUN_004abfe0(param_4,100,3,piVar1[1]);
      FUN_004abd40(param_4,0x9b,(long)piVar1[6],0);
      FUN_004ac150(param_4,0xe,*(undefined8 *)(piVar1 + 0xc));
      return 1;
    case 0xf:
      *(undefined8 *)param_4 = *(undefined8 *)(piVar1 + 0xc);
      return 1;
    }
    goto switchD_00617a0a_caseD_4d;
  }
  switch(param_2) {
  case 0x48:
    iVar2 = FUN_00771190(*(undefined4 *)(param_1 + 0x38),0x11a,(iVar2 == 0) + '\x01',param_4,
                         param_4[0xe]);
    if (iVar2 == 0) {
      FUN_004ab6e0(param_1,(-(uint)(param_3 == 0) & 0xffffe000) + 0x4000);
      return 1;
    }
    goto switchD_00617a0a_caseD_4d;
  case 0x49:
    uVar5 = 0x4000;
    goto LAB_00617ba5;
  case 0x4a:
    uVar6 = 0;
    FUN_004ab6e0(param_1,0x1000);
    *(char *)(piVar1 + 7) = (char)param_3;
    break;
  case 0x4b:
    uVar6 = 0;
    FUN_004ab6c0(param_1,0x1000);
    break;
  case 0x4c:
    uVar5 = 0x2000;
LAB_00617ba5:
    iVar2 = FUN_004ab6d0(param_1,uVar5);
    uVar6 = (ulong)(iVar2 != 0);
    break;
  default:
    goto switchD_00617a0a_caseD_4d;
  case 100:
    if (param_4 == (int *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    if (param_3 == 0) {
      lVar3 = *(long *)(piVar1 + 4);
      FUN_0041ad60(*(undefined8 *)(piVar1 + 2),"../crypto/bio/bss_conn.c",0x1bc);
      piVar1[2] = 0;
      piVar1[3] = 0;
      iVar2 = FUN_005bfe40(param_4,piVar1 + 2,piVar1 + 4,0);
      if (*(long *)(piVar1 + 4) == lVar3) {
        return (long)iVar2;
      }
      FUN_0041ad60(lVar3,"../crypto/bio/bss_conn.c",0x1c3);
      return (long)iVar2;
    }
    if (param_3 == 1) {
      FUN_0041ad60(*(undefined8 *)(piVar1 + 4),"../crypto/bio/bss_conn.c",0x1c5);
      lVar3 = FUN_0041c2c0(param_4,"../crypto/bio/bss_conn.c",0x1c6);
      *(long *)(piVar1 + 4) = lVar3;
      return (ulong)(lVar3 != 0);
    }
    if (param_3 == 2) {
      lVar3 = FUN_005bfcb0(param_4,1);
      lVar4 = FUN_005bfc30(param_4,1);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        FUN_0041ad60(*(undefined8 *)(piVar1 + 2),"../crypto/bio/bss_conn.c",0x1cf);
        *(long *)(piVar1 + 2) = lVar3;
        FUN_0041ad60(*(undefined8 *)(piVar1 + 4),"../crypto/bio/bss_conn.c",0x1d1);
        *(long *)(piVar1 + 4) = lVar4;
        FUN_005bfdd0(*(undefined8 *)(piVar1 + 8));
        piVar1[8] = 0;
        piVar1[9] = 0;
        piVar1[10] = 0;
        piVar1[0xb] = 0;
        return 1;
      }
      FUN_0041ad60(lVar3,"../crypto/bio/bss_conn.c",0x1d7);
      FUN_0041ad60(lVar4,"../crypto/bio/bss_conn.c",0x1d8);
      return 0;
    }
    if (param_3 == 3) {
      piVar1[1] = *param_4;
      return 1;
    }
    goto switchD_00617a0a_caseD_4d;
  case 0x65:
    uVar6 = 1;
    if (*piVar1 != 5) {
      iVar2 = FUN_00617430(param_1,piVar1);
      uVar6 = (ulong)iVar2;
    }
    break;
  case 0x66:
    if (param_3 == 0) {
      uVar6 = 1;
      piVar1[6] = piVar1[6] & 0xfffffff7;
    }
    else {
      uVar6 = 1;
      piVar1[6] = piVar1[6] | 8;
    }
    break;
  case 0x69:
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      if (param_4 != (int *)0x0) {
        *param_4 = *(int *)(param_1 + 0x38);
      }
      uVar6 = (ulong)*(int *)(param_1 + 0x38);
    }
    break;
  case 0x7b:
    if (param_4 != (int *)0x0) {
      if (param_3 == 0) {
        *(undefined8 *)param_4 = *(undefined8 *)(piVar1 + 2);
        return 1;
      }
      if (param_3 == 1) {
        *(undefined8 *)param_4 = *(undefined8 *)(piVar1 + 4);
        return 1;
      }
      if (param_3 == 2) {
        uVar5 = FUN_005bfdc0(*(undefined8 *)(piVar1 + 10));
        *(undefined8 *)param_4 = uVar5;
        return 1;
      }
      if (param_3 == 3) {
        iVar2 = FUN_005bfd40(*(undefined8 *)(piVar1 + 10));
        if (iVar2 == 2) {
          return 4;
        }
        if (iVar2 == 10) {
          return 6;
        }
        if (iVar2 != 0) {
          return 0xffffffffffffffff;
        }
        return (long)piVar1[1];
      }
    }
switchD_00617a0a_caseD_4d:
    uVar6 = 0;
    break;
  case 0x9b:
    piVar1[6] = iVar2;
    uVar6 = 1;
  }
  return uVar6;
}

