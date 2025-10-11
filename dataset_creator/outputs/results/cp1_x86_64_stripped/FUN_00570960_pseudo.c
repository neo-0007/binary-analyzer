
ulong FUN_00570960(long param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 local_b4 [116];
  ulong local_40;
  
  lVar3 = param_1 + 100;
  puVar2 = local_b4;
  *(ulong *)(param_1 + 8) = ~*(ulong *)(param_1 + 8);
  *(ulong *)(param_1 + 0x10) = ~*(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x40) = ~*(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x60) = ~*(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x88) = ~*(ulong *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0xa0) = ~*(ulong *)(param_1 + 0xa0);
  local_40 = param_4;
  while (param_4 <= param_3) {
    param_4 = param_4 >> 3;
    puVar4 = (ulong *)(lVar3 + -100);
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 8;
      *puVar4 = uVar1 ^ *puVar4;
      param_4 = param_4 - 1;
      puVar4 = puVar4 + 1;
    } while (param_4 != 0);
    *(ulong **)(puVar2 + 100) = param_2;
    *(ulong *)(puVar2 + 0x6c) = param_3;
    FUN_00570600();
    param_2 = *(ulong **)(puVar2 + 100);
    param_3 = *(ulong *)(puVar2 + 0x6c);
    param_4 = *(ulong *)(puVar2 + 0x74);
  }
  *(ulong *)(lVar3 + -0x5c) = ~*(ulong *)(lVar3 + -0x5c);
  *(ulong *)(lVar3 + -0x54) = ~*(ulong *)(lVar3 + -0x54);
  *(ulong *)(lVar3 + -0x24) = ~*(ulong *)(lVar3 + -0x24);
  *(ulong *)(lVar3 + -4) = ~*(ulong *)(lVar3 + -4);
  *(ulong *)(lVar3 + 0x24) = ~*(ulong *)(lVar3 + 0x24);
  *(ulong *)(lVar3 + 0x3c) = ~*(ulong *)(lVar3 + 0x3c);
  return param_3;
}

