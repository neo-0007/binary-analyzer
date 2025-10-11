
undefined4 FUN_00465f90(ulong *param_1,long param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_0043b840();
  if (iVar2 == 0) {
    return 0;
  }
  if (((param_1[1] == 0) || (lVar1 = *(long *)(param_1[1] + 0x50), lVar1 == 0)) || (param_1[2] == 0)
     ) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0x7f,"ecx_derive");
    FUN_0051f8f0(0x39,0x80,0);
    return 0;
  }
  uVar3 = *param_1;
  if ((uVar3 != 0x20) && (uVar3 != 0x38)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0x85,"ecx_derive");
    FUN_0051f8f0(0x39,0x69,0);
    return 0;
  }
  if (param_2 != 0) {
    if (param_4 < uVar3) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",0x8e,"ecx_derive");
      FUN_0051f8f0(0x39,0x6a,0);
      return 0;
    }
    if (uVar3 == 0x20) {
      iVar2 = FUN_004e7000(param_2,lVar1,param_1[2] + 0x11);
      if (iVar2 == 0) {
        FUN_0051f420();
        uVar4 = 0x9f;
        goto LAB_004660d1;
      }
    }
    else {
      iVar2 = FUN_004de450();
      if (iVar2 == 0) {
        FUN_0051f420();
        uVar4 = 0xaf;
LAB_004660d1:
        FUN_0051f540("../providers/implementations/exchange/ecx_exch.c",uVar4,"ecx_derive");
        FUN_0051f8f0(0x39,0xa4,0);
        return 0;
      }
    }
    uVar3 = *param_1;
  }
  *param_3 = uVar3;
  return 1;
}

