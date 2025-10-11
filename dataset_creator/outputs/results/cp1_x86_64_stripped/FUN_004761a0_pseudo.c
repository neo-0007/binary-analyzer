
long FUN_004761a0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && (lVar2 = FUN_00476010(*param_1), lVar2 != 0)) {
    iVar1 = FUN_004cb740(*(undefined8 *)(lVar2 + 8),param_1[1]);
    if ((iVar1 != 0) && (iVar1 = FUN_0043c440(lVar2 + 0x10,param_1 + 2), iVar1 != 0)) {
      return lVar2;
    }
    FUN_004cb700(*(undefined8 *)(lVar2 + 8));
    FUN_0043c400(lVar2 + 0x10);
    FUN_0041ad60(lVar2,"../providers/implementations/macs/cmac_prov.c",0x4c);
  }
  return 0;
}

