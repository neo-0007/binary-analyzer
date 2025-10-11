
void FUN_005c4d40(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b7bb0();
  iVar2 = 0x40;
  if (0x800 < iVar1) {
    iVar2 = 0x80;
  }
  if (iVar2 < param_2) {
    iVar2 = param_2;
  }
  FUN_005c41f0(param_1,iVar2,param_3,param_4,param_5);
  return;
}

