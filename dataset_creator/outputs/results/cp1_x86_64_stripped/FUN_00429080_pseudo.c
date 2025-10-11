
undefined8 FUN_00429080(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00428db0();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004290b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x20))(param_1,param_2);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rand/rand_lib.c",0x11d,"RAND_pseudo_bytes");
  FUN_0051f8f0(0x24,0x65,0);
  return 0xffffffff;
}

