
undefined8 FUN_0042c490(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = FUN_0042c3e0();
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    if ((param_2 != 0 || param_3 != 0) && (0 < iVar1)) {
      uVar4 = 0;
      do {
        lVar3 = FUN_004364a0(*(undefined8 *)(param_1 + 0x88),uVar4 & 0xffffffff);
        if (param_2 == 0) {
LAB_0042c4e1:
          *(undefined8 *)(param_3 + uVar4 * 8) = *(undefined8 *)(lVar3 + 0x10);
        }
        else {
          *(undefined8 *)(param_2 + uVar4 * 8) = *(undefined8 *)(lVar3 + 8);
          if (param_3 != 0) goto LAB_0042c4e1;
        }
        uVar4 = uVar4 + 1;
      } while ((long)iVar1 != uVar4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

