
undefined8 FUN_0046c5e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && (iVar1 = FUN_0046bc60(param_1,param_4), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/sskdf.c",0x1a9,"x963kdf_derive");
      FUN_0051f8f0(0x39,0x84,0);
      return 0;
    }
    if (*(long *)(param_1 + 8) == 0) {
      lVar2 = FUN_0043c7e0(param_1 + 0x10);
      if (lVar2 == 0) {
        FUN_0051f420(0);
        FUN_0051f540("../providers/implementations/kdfs/sskdf.c",0x1b5,"x963kdf_derive");
        FUN_0051f8f0(0x39,0x81,0);
        return 0;
      }
      if (((*(ulong *)(param_1 + 0x30) < 0x40000001) && (*(ulong *)(param_1 + 0x40) < 0x40000001))
         && (param_3 - 1U < 0x40000000)) {
        uVar3 = FUN_0046b9f0(lVar2,*(undefined8 *)(param_1 + 0x28),*(ulong *)(param_1 + 0x30),
                             *(undefined8 *)(param_1 + 0x38),*(ulong *)(param_1 + 0x40),1,param_2,
                             param_3);
        return uVar3;
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/sskdf.c",0x1ae,"x963kdf_derive");
      FUN_0051f8f0(0x39,0x88,0);
    }
  }
  return 0;
}

