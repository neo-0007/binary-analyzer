
undefined8
FUN_005960a0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 = FUN_0041c2c0(param_2,"../crypto/ui/ui_lib.c",0xf0), param_2 == 0)
     ) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0xf2,"UI_dup_verify_string");
    FUN_0051f8f0(0x28,0xc0100,0);
    return 0xffffffff;
  }
  uVar1 = FUN_00595c20(param_1,param_2,1,2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

