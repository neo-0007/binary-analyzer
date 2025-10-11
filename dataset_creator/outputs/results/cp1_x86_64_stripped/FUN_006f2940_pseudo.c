
void FUN_006f2940(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 local_30;
  
  local_58[3] = param_4;
  local_38 = param_5;
  local_30 = param_6;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = -8;
  if (6 < param_3) {
    lVar3 = (long)(param_3 + -6) * -8 + -8;
  }
  uVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x10) + lVar3 & 0xfffffffffffffff0;
  iVar2 = 6;
  if (5 < param_3) {
    iVar2 = param_3;
  }
  lVar3 = uVar5 - 8;
  *(long *)(param_1 + 0xa0) = lVar3;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  puVar6 = (undefined8 *)(lVar3 + (long)(iVar2 + -5) * 8);
  *(undefined8 **)(param_1 + 0x80) = puVar6;
  if ((*(uint *)(in_FS_OFFSET + 0x48) & 2) == 0) {
    *(code **)(uVar5 - 8) = FUN_006f4ac0;
  }
  else {
    uVar4 = ((ulong)(lVar3 - *(long *)(param_1 + 0x10)) >> 5) + 7 & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x3b0) = uVar4;
    *(ulong *)(param_1 + 0x3b8) = uVar4;
    FUN_006f4a50(param_1);
  }
  *puVar6 = *(undefined8 *)(param_1 + 8);
  if (0 < param_3) {
    puVar6 = (undefined8 *)(uVar5 - 0x30);
    iVar2 = 0;
    uVar5 = 0x18;
    puVar7 = (undefined8 *)&stack0x00000008;
    do {
      uVar8 = (uint)uVar5;
      puVar9 = puVar7;
      switch(iVar2) {
      case 0:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x68) = *puVar7;
        break;
      case 1:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x70) = *puVar7;
        break;
      case 2:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x88) = *puVar7;
        break;
      case 3:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x98) = *puVar7;
        break;
      case 4:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x28) = *puVar7;
        break;
      case 5:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x30) = *puVar7;
        break;
      default:
        if (uVar8 < 0x30) {
          puVar7 = (undefined8 *)((long)local_58 + uVar5);
          uVar5 = (ulong)(uVar8 + 8);
        }
        else {
          puVar9 = puVar7 + 1;
        }
        *puVar6 = *puVar7;
      }
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar9;
    } while (param_3 != iVar2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

