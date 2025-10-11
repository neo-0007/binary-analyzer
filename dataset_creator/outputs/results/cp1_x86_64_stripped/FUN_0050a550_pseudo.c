
ulong FUN_0050a550(undefined8 param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = (ulong *)FUN_004b7440();
  iVar1 = FUN_004b7380(param_1);
  uVar3 = 0;
  if (iVar1 == 4) {
    uVar3 = puVar2[3] ^ 0xfffffffe | ~puVar2[2] | puVar2[1] ^ 0xffffffff00000000 | *puVar2 ^ 1;
    uVar3 = ~(-uVar3 | uVar3) >> 0x3f;
  }
  return uVar3;
}

