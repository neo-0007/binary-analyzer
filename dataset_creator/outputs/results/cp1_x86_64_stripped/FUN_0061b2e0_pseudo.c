
bool FUN_0061b2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_004ae9e0(param_3,"%*s",param_4,&DAT_0083e5c2);
  bVar2 = false;
  if (0 < iVar1) {
    iVar1 = FUN_005b4630(param_3,param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

