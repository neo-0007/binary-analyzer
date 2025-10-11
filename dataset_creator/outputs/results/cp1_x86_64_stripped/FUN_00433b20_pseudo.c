
ulong FUN_00433b20(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,
                  long param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x18) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00433b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    goto LAB_00433d27;
  }
  if (param_1 == 0x72) {
    if (param_3 == 0x24) {
      local_50 = 0x24;
      uVar3 = 0x24;
      uVar1 = FUN_0056b040(param_6);
      if (uVar1 < 0x2f) goto LAB_00433c86;
LAB_00433bd2:
      iVar2 = FUN_0056b080(uVar3 & 0xffffffff,param_2,param_4,param_6,1);
      if (iVar2 < 1) {
        uVar4 = 0;
      }
      else {
        *param_5 = iVar2;
        uVar4 = 1;
      }
      goto LAB_00433c00;
    }
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/rsa/rsa_sign.c",0x126,"RSA_sign");
    FUN_0051f8f0(4,0x83,0);
  }
  else {
    uVar1 = FUN_00433990(&local_48,&local_50,param_1,param_2,param_3);
    param_2 = local_48;
    uVar3 = local_50;
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      iVar2 = FUN_0056b040(param_6);
      if (uVar3 + 0xb <= (ulong)(long)iVar2) goto LAB_00433bd2;
LAB_00433c86:
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../crypto/rsa/rsa_sign.c",0x132,"RSA_sign");
      FUN_0051f8f0(4,0x70,0);
    }
LAB_00433c00:
    FUN_0041aef0(local_48,uVar3,"../crypto/rsa/rsa_sign.c",0x13e);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00433d27:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

