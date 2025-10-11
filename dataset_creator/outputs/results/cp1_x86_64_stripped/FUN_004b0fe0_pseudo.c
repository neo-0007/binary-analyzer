
uint FUN_004b0fe0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x74) {
    if (param_1 < 0x47) {
      uVar1 = 1;
      if (param_1 != 4) {
        return (uint)(param_1 == 0xb);
      }
    }
    else {
      uVar1 = (uint)(0x181000000001 >> ((char)param_1 + 0xb9U & 0x3f)) & 1;
    }
  }
  return uVar1;
}

