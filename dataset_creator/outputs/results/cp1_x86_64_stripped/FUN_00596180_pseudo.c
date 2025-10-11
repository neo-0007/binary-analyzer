
undefined8
FUN_00596180(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
            undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) ||
     (param_2 = FUN_0041c2c0(param_2,"../crypto/ui/ui_lib.c",0x10f), param_2 != 0)) {
    if ((param_3 == 0) ||
       (param_3 = FUN_0041c2c0(param_3,"../crypto/ui/ui_lib.c",0x117), param_3 != 0)) {
      if ((param_4 == 0) ||
         (param_4 = FUN_0041c2c0(param_4,"../crypto/ui/ui_lib.c",0x11f), param_4 != 0)) {
        if ((param_5 == 0) ||
           (param_5 = FUN_0041c2c0(param_5,"../crypto/ui/ui_lib.c",0x127), param_5 != 0)) {
          uVar1 = FUN_00595a80(param_1,param_2,param_3,param_4,param_5,1,param_6,param_7);
          return uVar1;
        }
        FUN_0051f420();
        uVar1 = 0x129;
      }
      else {
        FUN_0051f420();
        uVar1 = 0x121;
      }
      FUN_0051f540("../crypto/ui/ui_lib.c",uVar1,"UI_dup_input_boolean");
      FUN_0051f8f0(0x28,0xc0100,0);
    }
    else {
      FUN_0051f420();
      param_4 = 0;
      FUN_0051f540("../crypto/ui/ui_lib.c",0x119,"UI_dup_input_boolean");
      FUN_0051f8f0(0x28,0xc0100,0);
    }
  }
  else {
    FUN_0051f420();
    param_4 = 0;
    param_3 = 0;
    FUN_0051f540("../crypto/ui/ui_lib.c",0x111,"UI_dup_input_boolean");
    FUN_0051f8f0(0x28,0xc0100,0);
  }
  FUN_0041ad60(param_2,"../crypto/ui/ui_lib.c",0x132);
  FUN_0041ad60(param_3,"../crypto/ui/ui_lib.c",0x133);
  FUN_0041ad60(param_4,"../crypto/ui/ui_lib.c",0x134);
  FUN_0041ad60(0,"../crypto/ui/ui_lib.c",0x135);
  return 0xffffffff;
}

