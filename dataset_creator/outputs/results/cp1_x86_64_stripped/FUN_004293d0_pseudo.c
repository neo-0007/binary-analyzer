
ulong FUN_004293d0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_00428db0();
  if ((lVar2 != 0) && (lVar3 = FUN_00429b00(), lVar2 != lVar3)) {
    if (*(code **)(lVar2 + 0x28) == (code *)0x0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x004293f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar2 + 0x28))();
    return uVar4;
  }
  lVar2 = FUN_00429100(0);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_0053a920(lVar2);
  return (ulong)(iVar1 == 1);
}

