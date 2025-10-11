
undefined4 * FUN_0063e020(long param_1,undefined4 *param_2,undefined4 *param_3,ushort *param_4)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  
  if (param_2 < param_3) {
    puVar1 = param_4 + ((ulong)((long)param_3 + (-1 - (long)param_2)) >> 2) + 1;
    do {
      lVar3 = 0;
      uVar4 = 0;
      do {
        iVar2 = FUN_00771b10(*param_2,*(undefined8 *)(param_1 + 0x4c0 + lVar3 * 8),
                             *(undefined8 *)(param_1 + 0x10));
        if (iVar2 != 0) {
          uVar4 = uVar4 | *(ushort *)(param_1 + 0x49c + lVar3 * 2);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0xc);
      *param_4 = uVar4;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (param_4 != puVar1);
  }
  return param_3;
}

