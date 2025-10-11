
uint FUN_00596ae0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0x227,"UI_ctrl");
    FUN_0051f8f0(0x28,0xc0102,0);
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 1) {
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar2 = uVar1 | 0x100;
      if (param_3 == 0) {
        uVar2 = uVar1 & 0xfffffeff;
      }
      *(uint *)(param_1 + 0x28) = uVar2;
      return uVar1 >> 8 & 1;
    }
    if (param_2 != 2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ui/ui_lib.c",0x239,"UI_ctrl");
      FUN_0051f8f0(0x28,0x6a,0);
      return 0xffffffff;
    }
    uVar1 = *(uint *)(param_1 + 0x28) & 1;
  }
  return uVar1;
}

