
undefined8 __nscd_gethostbyaddr_r(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 4) || (uVar1 = 6, param_3 != 2)) {
    if ((param_2 != 0x10) || (param_3 != 10)) {
      return 0xffffffff;
    }
    uVar1 = 7;
  }
  uVar1 = nscd_gethst_r(param_1,param_2,uVar1);
  return uVar1;
}

