
bool FUN_00598430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  byte bVar9;
  
  bVar9 = 0x80;
  uVar3 = *(uint *)(param_2 + 0x10) >> 3;
  uVar6 = *(uint *)(param_2 + 0x10) & 7;
  if (uVar6 != 0) {
    bVar9 = (byte)(0x80 >> (sbyte)uVar6) | *(byte *)((long)param_2 + (ulong)uVar3 + 0x40);
  }
  *(byte *)((long)param_2 + (ulong)uVar3 + 0x40) = bVar9;
  uVar6 = uVar3 + 1;
  if (uVar6 < 0x21) {
    if (uVar6 == 0x20) goto LAB_005984b8;
    uVar6 = 0x20 - uVar6;
    uVar7 = (ulong)uVar6;
    puVar5 = (undefined8 *)((ulong)(uVar3 + 0x41) + (long)param_2);
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 != 0) && (*(undefined1 *)puVar5 = 0, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)puVar5 + ((ulong)uVar6 - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar5 = 0;
        *(undefined4 *)((long)puVar5 + ((ulong)uVar6 - 4)) = 0;
      }
      goto LAB_005984b8;
    }
  }
  else {
    if (uVar6 < 0x40) {
      uVar6 = 0x40 - uVar6;
      puVar5 = (undefined8 *)((ulong)(uVar3 + 0x41) + (long)param_2);
      if (uVar6 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar6 != 0) && (*(undefined1 *)puVar5 = 0, (uVar6 & 2) != 0)) {
            *(undefined2 *)((long)puVar5 + ((ulong)uVar6 - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)puVar5 = 0;
          *(undefined4 *)((long)puVar5 + ((ulong)uVar6 - 4)) = 0;
        }
      }
      else {
        *puVar5 = 0;
        *(undefined8 *)((long)puVar5 + ((ulong)uVar6 - 8)) = 0;
        uVar3 = uVar6 + ((int)puVar5 - (int)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)) & 0xfffffff8
        ;
        if (7 < uVar3) {
          uVar6 = 0;
          do {
            uVar7 = (ulong)uVar6;
            uVar6 = uVar6 + 8;
            *(undefined8 *)(((ulong)(puVar5 + 1) & 0xfffffffffffffff8) + uVar7) = 0;
          } while (uVar6 < uVar3);
        }
      }
    }
    FUN_00604600(param_2,param_2 + 8,1);
    uVar7 = 0x20;
    puVar5 = param_2 + 8;
  }
  *puVar5 = 0;
  *(undefined8 *)((uVar7 - 8) + (long)puVar5) = 0;
  uVar3 = (int)uVar7 + ((int)puVar5 - (int)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
  if (7 < uVar3) {
    uVar6 = 0;
    do {
      uVar7 = (ulong)uVar6;
      uVar6 = uVar6 + 8;
      *(undefined8 *)(((ulong)(puVar5 + 1) & 0xfffffffffffffff8) + uVar7) = 0;
    } while (uVar6 < uVar3);
  }
LAB_005984b8:
  puVar8 = (undefined1 *)((long)param_2 + 0x77);
  do {
    uVar7 = *(ulong *)((0xff - (long)puVar8) + (long)param_2 * 2);
    puVar2 = puVar8 + 8;
    do {
      puVar4 = puVar2;
      *puVar4 = (char)uVar7;
      uVar7 = uVar7 >> 8;
      puVar2 = puVar4 + -1;
    } while (puVar4 + -1 != puVar8);
    puVar8 = puVar4 + -9;
  } while ((undefined1 *)((long)param_2 + 0x57) != puVar8);
  FUN_00604600(param_2,param_2 + 8,1);
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    FUN_004227b0(param_2,0xa8);
  }
  return param_1 != (undefined8 *)0x0;
}

