
void KeccakF1600(long param_1)

{
  long lVar1;
  undefined1 local_94 [100];
  
  lVar1 = param_1 + 100;
  *(ulong *)(param_1 + 8) = ~*(ulong *)(param_1 + 8);
  *(ulong *)(param_1 + 0x10) = ~*(ulong *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x40) = ~*(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x60) = ~*(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x88) = ~*(ulong *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0xa0) = ~*(ulong *)(param_1 + 0xa0);
  __KeccakF1600(lVar1,local_94);
  *(ulong *)(lVar1 + -0x5c) = ~*(ulong *)(lVar1 + -0x5c);
  *(ulong *)(lVar1 + -0x54) = ~*(ulong *)(lVar1 + -0x54);
  *(ulong *)(lVar1 + -0x24) = ~*(ulong *)(lVar1 + -0x24);
  *(ulong *)(lVar1 + -4) = ~*(ulong *)(lVar1 + -4);
  *(ulong *)(lVar1 + 0x24) = ~*(ulong *)(lVar1 + 0x24);
  *(ulong *)(lVar1 + 0x3c) = ~*(ulong *)(lVar1 + 0x3c);
  return;
}

