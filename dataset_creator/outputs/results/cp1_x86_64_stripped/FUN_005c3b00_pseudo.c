
code * FUN_005c3b00(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_004b77f0(&PTR_DAT_00914da0,param_1);
  if (iVar1 == 0) {
    pcVar2 = (code *)&LAB_005c2f10;
  }
  else {
    iVar1 = FUN_004b77f0(&PTR_DAT_00914d80,param_1);
    if (iVar1 == 0) {
      return FUN_005c3230;
    }
    iVar1 = FUN_004b77f0(&PTR_DAT_00914d60,param_1);
    if (iVar1 == 0) {
      return (code *)&LAB_005c3690;
    }
    iVar1 = FUN_004b77f0(&PTR_DAT_00914d40,param_1);
    if (iVar1 == 0) {
      return FUN_005c27e0;
    }
    iVar1 = FUN_004b77f0(&PTR_DAT_00914d20,param_1);
    pcVar2 = (code *)0x0;
    if (iVar1 == 0) {
      return FUN_005c2c70;
    }
  }
  return pcVar2;
}

