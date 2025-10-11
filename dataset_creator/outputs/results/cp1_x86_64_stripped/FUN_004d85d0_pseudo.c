
bool FUN_004d85d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar2 = FUN_004b7690();
  if (lVar2 != 0) {
    FUN_004b7d90(lVar2,param_3,4);
    iVar1 = FUN_004b5a10(param_4,*(undefined8 *)(param_2 + 0x18),lVar2,*(undefined8 *)(param_2 + 8),
                         param_1);
    bVar3 = iVar1 != 0;
    FUN_004b7f20(lVar2);
  }
  return bVar3;
}

