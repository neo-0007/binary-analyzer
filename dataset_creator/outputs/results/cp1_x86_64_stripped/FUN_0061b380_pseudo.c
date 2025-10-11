
bool FUN_0061b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_004ae9e0(param_3,"%*s",param_4,&DAT_0083e5c2);
  bVar1 = false;
  if (0 < iVar2) {
    iVar2 = FUN_0061eb10(param_3,param_2,4);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

