
void FUN_0074db00(undefined4 *param_1,undefined1 param_2,ulong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = CONCAT11(param_2,param_2);
  uVar5 = CONCAT22(uVar4,uVar4);
  if (param_3 < 0x10) {
    uVar1 = (uint)param_3;
    if (7 < uVar1) {
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1 = (undefined4 *)((long)param_1 + (param_3 - 8));
      *param_1 = uVar5;
      param_1[1] = uVar5;
      return;
    }
    if (3 < uVar1) {
      *param_1 = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar5;
      return;
    }
    if (1 < uVar1) {
      *(undefined2 *)param_1 = uVar4;
      *(undefined1 *)((long)param_1 + (param_3 - 1)) = param_2;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)param_1 = param_2;
      return;
    }
  }
  else {
    if (param_3 < 0x21) {
      puVar3 = (undefined4 *)((long)param_1 + (param_3 - 0x10));
      *puVar3 = uVar5;
      puVar3[1] = uVar5;
      puVar3[2] = uVar5;
      puVar3[3] = uVar5;
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      param_1[3] = uVar5;
      return;
    }
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1[2] = uVar5;
    param_1[3] = uVar5;
    param_1[4] = uVar5;
    param_1[5] = uVar5;
    param_1[6] = uVar5;
    param_1[7] = uVar5;
    if (param_3 < 0x41) {
      *(undefined4 *)((long)param_1 + (param_3 - 0x20)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 0x1c)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 0x18)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 0x14)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 0x10)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 0xc)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 8)) = uVar5;
      *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar5;
      return;
    }
    param_1[8] = uVar5;
    param_1[9] = uVar5;
    param_1[10] = uVar5;
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar5;
    puVar3 = (undefined4 *)((long)param_1 + (param_3 - 0x40));
    if (0x80 < param_3) {
      puVar2 = (undefined4 *)((ulong)(param_1 + 0x10) & 0xffffffffffffffe0);
      do {
        *puVar2 = uVar5;
        puVar2[1] = uVar5;
        puVar2[2] = uVar5;
        puVar2[3] = uVar5;
        puVar2[4] = uVar5;
        puVar2[5] = uVar5;
        puVar2[6] = uVar5;
        puVar2[7] = uVar5;
        puVar2[8] = uVar5;
        puVar2[9] = uVar5;
        puVar2[10] = uVar5;
        puVar2[0xb] = uVar5;
        puVar2[0xc] = uVar5;
        puVar2[0xd] = uVar5;
        puVar2[0xe] = uVar5;
        puVar2[0xf] = uVar5;
        puVar2 = puVar2 + 0x10;
      } while (puVar2 < puVar3);
    }
    *puVar3 = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x3c)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x38)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x34)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x30)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x2c)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x28)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x24)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x20)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x1c)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x18)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x14)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0x10)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 0xc)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 8)) = uVar5;
    *(undefined4 *)((long)param_1 + (param_3 - 4)) = uVar5;
  }
  return;
}

