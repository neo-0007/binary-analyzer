
ulong FUN_0040de40(long param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar3 = *(code **)(param_1 + 8);
  if ((pcVar3 != (code *)0x0) && (pcVar3 = *(code **)(pcVar3 + 0x68), pcVar3 != (code *)0x0)) {
    uVar1 = (*pcVar3)();
    uVar2 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x8c);
  if ((int)*(uint *)(param_1 + 0x8c) < 0) {
    uVar2 = (ulong)pcVar3 & 0xffffffff;
  }
  return uVar2;
}

