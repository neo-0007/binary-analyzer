
bool FUN_00427560(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  
  pcVar3 = "provider";
  ppuVar2 = &PTR_s_provider_008ea760;
  while( true ) {
    iVar1 = FUN_00428100(param_1,pcVar3,1);
    if (iVar1 == 0) {
      return false;
    }
    ppuVar2 = ppuVar2 + 1;
    if (ppuVar2 == (undefined **)&DAT_008ea790) break;
    pcVar3 = *ppuVar2;
  }
  iVar1 = FUN_00428180(param_1,"yes",1);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = FUN_00428180(param_1,"no",1);
  return iVar1 == 2;
}

