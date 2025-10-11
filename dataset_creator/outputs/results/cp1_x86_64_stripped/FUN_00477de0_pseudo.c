
long FUN_00477de0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00477380();
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
    uVar4 = FUN_00485290(param_1);
    iVar2 = FUN_0043c6f0(lVar1,param_2,uVar4);
    if (iVar2 == 0) {
      FUN_00406b90(*(undefined8 *)(lVar3 + 8));
      FUN_0043c5e0(lVar1);
      FUN_004227b0(lVar3 + 0x44,*(undefined8 *)(lVar3 + 0x30));
      FUN_004227b0(lVar3 + 0x194,*(undefined8 *)(lVar3 + 0x38));
      FUN_0041ad60(lVar3,"../providers/implementations/macs/kmac_prov.c",0x99);
      return 0;
    }
    uVar4 = FUN_0043c7e0(lVar1);
    iVar2 = FUN_0040ac10(uVar4);
    *(long *)(lVar3 + 0x28) = (long)iVar2;
  }
  return lVar3;
}

