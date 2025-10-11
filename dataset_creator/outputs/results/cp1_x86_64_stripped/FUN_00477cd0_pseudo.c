
long FUN_00477cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN_0043b840();
  if ((iVar3 != 0) && (lVar4 = FUN_00477380(*param_1), lVar4 != 0)) {
    iVar3 = FUN_004079a0(*(undefined8 *)(lVar4 + 8),param_1[1]);
    if ((iVar3 != 0) && (iVar3 = FUN_0043c620(lVar4 + 0x10,param_1 + 2), iVar3 != 0)) {
      uVar1 = param_1[7];
      *(undefined8 *)(lVar4 + 0x28) = param_1[5];
      uVar2 = param_1[6];
      *(undefined8 *)(lVar4 + 0x38) = uVar1;
      *(undefined8 *)(lVar4 + 0x30) = uVar2;
      uVar2 = param_1[6];
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_1 + 8);
      thunk_FUN_00713a50(lVar4 + 0x44,(long)param_1 + 0x44,uVar2);
      thunk_FUN_00713a50(lVar4 + 0x194,(long)param_1 + 0x194,uVar1);
      return lVar4;
    }
    FUN_00406b90(*(undefined8 *)(lVar4 + 8));
    FUN_0043c5e0(lVar4 + 0x10);
    FUN_004227b0(lVar4 + 0x44,*(undefined8 *)(lVar4 + 0x30));
    FUN_004227b0(lVar4 + 0x194,*(undefined8 *)(lVar4 + 0x38));
    FUN_0041ad60(lVar4,"../providers/implementations/macs/kmac_prov.c",0x99);
  }
  return 0;
}

