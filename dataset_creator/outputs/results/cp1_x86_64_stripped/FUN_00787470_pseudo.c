
undefined8 FUN_00787470(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((*(long *)(param_1 + 0x458) != -1) &&
      (uVar5 = *(ulong *)(param_1 + 0x448), uVar5 <= DAT_00945858)) &&
     (0x9bf < (ulong)(DAT_00945868 - DAT_00945860))) {
    lVar1 = *(long *)(param_1 + 0x450);
    uVar3 = (DAT_00945868 - DAT_00945860) - 0x9c0;
    uVar4 = *(long *)(param_1 + 0x440) + lVar1;
    if (uVar4 <= uVar3) {
      lVar2 = ((uVar3 - uVar4) / uVar5) * uVar5;
      uVar5 = (uVar3 - lVar1) - lVar2;
      if (param_2 != '\0') {
        if (DAT_00945848 < uVar5) {
          return 0xffffffff;
        }
        DAT_00945848 = (DAT_00945848 - uVar3) + lVar1 + lVar2;
      }
      DAT_00945860 = DAT_00945860 + uVar5;
      *(long *)(param_1 + 0x458) = DAT_00945860;
      if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x31c) & 4) != 0) {
        FUN_0078a7c0();
        return 0;
      }
      *(byte *)(param_1 + 0x31d) = *(byte *)(param_1 + 0x31d) | 0x40;
      return 0;
    }
  }
  return 0xffffffff;
}

