
long * FUN_00545610(code *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041aec0(0xb0,"../crypto/lhash/lhash.c",0x43);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_0041aec0(0x80,"../crypto/lhash/lhash.c",0x4b);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_0041ad60(0,"../crypto/lhash/lhash.c",0x5b);
      FUN_0041ad60(plVar1,"../crypto/lhash/lhash.c",0x5c);
      plVar1 = (long *)0x0;
    }
    else {
      if (param_2 == 0) {
        plVar1[1] = (long)PTR_FUN_0093b100;
      }
      else {
        plVar1[1] = param_2;
      }
      if (param_1 == (code *)0x0) {
        param_1 = FUN_00545590;
      }
      plVar1[2] = (long)param_1;
      plVar1[3] = 0x1000000008;
      *(undefined4 *)((long)plVar1 + 0x24) = 8;
      plVar1[5] = 0x200;
      plVar1[6] = 0x100;
    }
  }
  return plVar1;
}

