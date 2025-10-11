
undefined8 FUN_0063dd40(long param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x800) {
    uVar1 = FUN_00771a70("digit",*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  if (param_2 < 0x801) {
    if (param_2 == 0x100) {
      uVar1 = FUN_00771a70("upper",*(undefined8 *)(param_1 + 0x10));
      return uVar1;
    }
    if (param_2 < 0x101) {
      if (param_2 == 2) {
        uVar1 = FUN_00771a70("cntrl",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
      if (param_2 == 4) {
        uVar1 = FUN_00771a70("punct",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
      if (param_2 == 1) {
        uVar1 = FUN_00771a70("blank",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
    }
    else {
      if (param_2 == 0x200) {
        uVar1 = FUN_00771a70("lower",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
      if (param_2 == 0x400) {
        uVar1 = FUN_00771a70("alpha",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
    }
  }
  else {
    if (param_2 == 0x1000) {
      uVar1 = FUN_00771a70("xdigit",*(undefined8 *)(param_1 + 0x10));
      return uVar1;
    }
    if (param_2 < 0x1001) {
      if (param_2 == 0xc00) {
        uVar1 = FUN_00771a70("alnum",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
      if (param_2 == 0xc04) {
        uVar1 = FUN_00771a70("graph",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
    }
    else {
      if (param_2 == 0x2000) {
        uVar1 = FUN_00771a70("space",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
      if (param_2 == 0x4000) {
        uVar1 = FUN_00771a70("print",*(undefined8 *)(param_1 + 0x10));
        return uVar1;
      }
    }
  }
  return 0;
}

