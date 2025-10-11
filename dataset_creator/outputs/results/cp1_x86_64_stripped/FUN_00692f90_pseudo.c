
ulong FUN_00692f90(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if ((*(byte *)(param_1 + 0x40) & 8) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if ((pbVar1 != (byte *)0x0) && ((pbVar2 == (byte *)0x0 || (pbVar2 < pbVar1)))) {
      *(byte **)(param_1 + 0x18) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x10) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x10);
    }
  }
  return 0xffffffff;
}

