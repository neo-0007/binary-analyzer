
undefined8 FUN_00425350(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_00419fe0(0x40,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_00417730(param_1,0xe,&DAT_008ea740);
  return uVar2;
}

