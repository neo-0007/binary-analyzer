
ulong FUN_00422820(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_3 == 0x10) {
      return (ulong)(*(long *)param_1 != *(long *)param_2 ||
                    *(long *)(param_1 + 8) != *(long *)(param_2 + 8));
    }
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (ulong)(byte)((byte)uVar3 | bVar1 ^ bVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = -uVar3 >> 0x3f;
  }
  return uVar3;
}

