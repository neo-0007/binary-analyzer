
bool FUN_00519db0(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if ((((((((param_2 & 0x40) == 0) || (iVar1 = FUN_0051cb40(), iVar1 != 0)) &&
         (((param_2 & 0x80) == 0 || (iVar1 = FUN_0051cf00(param_1), iVar1 != 0)))) &&
        (((param_2 & 1) == 0 || (iVar1 = FUN_0051d830(param_1), iVar1 != 0)))) &&
       (((param_2 & 2) == 0 || (iVar1 = FUN_0051d120(param_1), iVar1 != 0)))) &&
      (((((param_2 & 4) == 0 || (iVar1 = FUN_0051cd60(param_1), iVar1 != 0)) &&
        (((param_2 & 0x800) == 0 || (iVar1 = FUN_0051d270(param_1), iVar1 != 0)))) &&
       (((param_2 & 8) == 0 || (iVar1 = FUN_0051d6e0(param_1), iVar1 != 0)))))) &&
     (((param_2 & 0x200) == 0 || (iVar1 = FUN_0051d410(param_1), iVar1 != 0)))) {
    if ((param_2 & 0x400) == 0) {
      return true;
    }
    iVar1 = FUN_0051c610(param_1);
    return iVar1 != 0;
  }
  return false;
}

