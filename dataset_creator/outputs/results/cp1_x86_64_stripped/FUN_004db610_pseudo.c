
undefined8 FUN_004db610(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_005cd6a0();
  if (*(code **)(lVar1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004db62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x50))(param_1);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_lib.c",0x14e,"DSO_global_lookup");
  FUN_0051f8f0(0x25,0x6c,0);
  return 0;
}

