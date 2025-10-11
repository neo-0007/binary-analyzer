
undefined8 FUN_00623750(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (param_1 != 0xff) {
    bVar2 = param_1 & 0x70;
    if (bVar2 == 0x30) {
      uVar1 = FUN_006ccef0(param_2);
      return uVar1;
    }
    if (bVar2 < 0x31) {
      if (bVar2 == 0x20) {
        uVar1 = FUN_006ccf00();
        return uVar1;
      }
      if ((0x20 < bVar2) || ((param_1 & 0x60) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
    }
    else {
      if (bVar2 == 0x40) {
        uVar1 = FUN_006cceb0();
        return uVar1;
      }
      if (bVar2 != 0x50) {
        uVar1 = FUN_0040224d();
        return uVar1;
      }
    }
  }
  return 0;
}

