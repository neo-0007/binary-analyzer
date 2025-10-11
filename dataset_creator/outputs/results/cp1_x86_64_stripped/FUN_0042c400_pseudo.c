
undefined8 FUN_0042c400(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar2 = FUN_0042c3e0();
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),uVar4 & 0xffffffff);
        *(undefined8 *)(param_2 + uVar4 * 8) = *puVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 != (long)iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

