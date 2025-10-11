
undefined8 FUN_00596410(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) &&
     (param_2 = FUN_0041c2c0(param_2,"../crypto/ui/ui_lib.c",0x144), param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0x146,"UI_dup_info_string");
    FUN_0051f8f0(0x28,0xc0100,0);
    return 0xffffffff;
  }
  uVar1 = FUN_00595c20(param_1,param_2,1,4,0,0,0,0,0);
  return uVar1;
}

