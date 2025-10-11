
ulong FUN_004b0da0(long param_1,int param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar2 = (int)param_3;
  if (0x4c < param_2) {
    if (param_2 == 0x68) {
      if ((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_004b0060(*(undefined4 *)(param_1 + 0x38));
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      uVar1 = *param_4;
      *(int *)(param_1 + 0x2c) = iVar2;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      return 1;
    }
    if (param_2 == 0x69) {
      if (*(int *)(param_1 + 0x28) != 0) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)(param_1 + 0x38);
        }
        return (long)*(int *)(param_1 + 0x38);
      }
      return 0xffffffffffffffff;
    }
    goto switchD_004b0dd1_caseD_3;
  }
  if (param_2 < 2) {
    return 0;
  }
  switch(param_2) {
  case 2:
    uVar3 = (ulong)(*(uint *)(param_1 + 0x30) >> 0xb & 1);
    break;
  case 8:
    uVar3 = (ulong)*(int *)(param_1 + 0x2c);
    break;
  case 9:
    *(int *)(param_1 + 0x2c) = iVar2;
    uVar3 = 1;
    break;
  case 0xb:
  case 0xc:
    uVar3 = 1;
    break;
  case 0x48:
    iVar2 = FUN_00771190(*(undefined4 *)(param_1 + 0x38),0x11a,(iVar2 == 0) + '\x01',param_4,
                         param_4[0xe]);
    uVar3 = 0;
    if (iVar2 == 0) {
      FUN_004ab6e0(param_1,(-(uint)(param_3 == 0) & 0xffffe000) + 0x4000);
      uVar3 = 1;
    }
    break;
  case 0x49:
    uVar4 = 0x4000;
    goto LAB_004b0e45;
  case 0x4a:
    FUN_004ab6e0(param_1,0x1000);
    *(long *)(param_1 + 0x40) = param_3;
  default:
switchD_004b0dd1_caseD_3:
    uVar3 = 0;
    break;
  case 0x4b:
    FUN_004ab6c0(param_1,0x1000);
    uVar3 = 0;
    break;
  case 0x4c:
    uVar4 = 0x2000;
LAB_004b0e45:
    iVar2 = FUN_004ab6d0(param_1,uVar4);
    return (ulong)(iVar2 != 0);
  }
  return uVar3;
}

