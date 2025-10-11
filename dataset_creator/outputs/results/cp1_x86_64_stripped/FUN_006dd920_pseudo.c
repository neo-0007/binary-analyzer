
undefined8 FUN_006dd920(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  code *pcVar9;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  undefined1 *puVar8;
  
  puVar7 = auStack_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_007129d0();
  lVar4 = thunk_FUN_007129d0(param_2);
  uVar6 = lVar3 + 0x10 + lVar4;
  puVar8 = auStack_48;
  puVar2 = auStack_48;
  while (puVar8 != auStack_48 + -(uVar6 & 0xfffffffffffff000)) {
    puVar7 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar8 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar1 = -uVar6;
  if (uVar6 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6dd9af;
  uVar5 = thunk_FUN_00713820((long)puVar7 + lVar1,param_1,lVar3);
  *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6dd9bd;
  thunk_FUN_00713a50(uVar5,param_2,lVar4 + 1);
  *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6dd9c5;
  lVar3 = FUN_006de2e0((long)puVar7 + lVar1);
  *param_3 = lVar3;
  uVar5 = 1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x18);
    uVar6 = *(ulong *)(lVar3 + 0x20);
    param_3[1] = 0;
    param_3[5] = lVar4;
    lVar3 = *(long *)(lVar3 + 0x28);
    param_3[7] = uVar6;
    param_3[8] = lVar3;
    uVar5 = 0;
    param_3[6] = 0;
    param_3[0xc] = 0;
    pcVar9 = (code *)((uVar6 >> 0x11 | uVar6 << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30));
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6dda21;
      FUN_0078e430(pcVar9);
      *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6dda27;
      uVar5 = (*pcVar9)(param_3);
      uVar6 = param_3[6] ^ *(ulong *)(in_FS_OFFSET + 0x30);
      param_3[6] = uVar6 << 0x11 | uVar6 >> 0x2f;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar7 + lVar1 + -8) = FUN_006dda70;
    FUN_00771f60();
  }
  return uVar5;
}

