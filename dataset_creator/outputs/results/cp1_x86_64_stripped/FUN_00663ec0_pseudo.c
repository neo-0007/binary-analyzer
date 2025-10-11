
long FUN_00663ec0(long param_1,long param_2,long param_3)

{
  char cVar1;
  
  cVar1 = FUN_006c3d30(param_1 + 0x68);
  if (cVar1 == '\0') {
    if (param_2 == 0 && param_3 == 0) {
      *(undefined8 *)(param_1 + 0xa0) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(long *)(param_1 + 0x98) = param_2;
      *(long *)(param_1 + 0xa0) = param_3;
      return param_1;
    }
  }
  return param_1;
}

