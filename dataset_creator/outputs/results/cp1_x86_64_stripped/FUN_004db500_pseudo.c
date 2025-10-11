
undefined8 FUN_004db500(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_005cd6a0();
  if (*(code **)(lVar1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004db52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_lib.c",0x131,"DSO_pathbyaddr");
  FUN_0051f8f0(0x25,0x6c,0);
  return 0xffffffff;
}

