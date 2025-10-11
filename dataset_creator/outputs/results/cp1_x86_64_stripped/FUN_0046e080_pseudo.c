
uint FUN_0046e080(long param_1,long param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_0056b040(*(undefined8 *)(param_1 + 8));
    uVar2 = (ulong)iVar1;
    uVar3 = 0;
    if (param_2 == 0) {
      if (uVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kem/rsa_kem.c",0x12f,"rsasve_recover");
        FUN_0051f8f0(0x39,0x9e,0);
      }
      else {
        *param_3 = uVar2;
        uVar3 = 1;
      }
    }
    else if (param_5 == uVar2) {
      iVar1 = FUN_0056b090(param_5 & 0xffffffff,param_4,param_2,*(undefined8 *)(param_1 + 8),3);
      uVar3 = (uint)(0 < iVar1);
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kem/rsa_kem.c",0x138,"rsasve_recover");
      FUN_0051f8f0(0x39,0x8e,0);
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

