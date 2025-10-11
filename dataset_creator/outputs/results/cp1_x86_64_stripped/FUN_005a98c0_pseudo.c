
bool FUN_005a98c0(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != param_2) {
      param_2 = FUN_004a22a0(param_2);
      if (param_2 != 0) {
        FUN_005b7380(*(undefined8 *)(param_1 + 0x18));
        *(long *)(param_1 + 0x18) = param_2;
      }
    }
    return param_2 != 0;
  }
  return false;
}

