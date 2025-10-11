
ulong FUN_004d9c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = thunk_FUN_00712780(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    uVar3 = FUN_006e94d0(param_3,0,10);
    uVar5 = FUN_005264e0(param_1,uVar3);
    return uVar5;
  }
  iVar1 = thunk_FUN_00712780(param_2,"dsa_paramgen_q_bits");
  if (iVar1 != 0) {
    uVar2 = thunk_FUN_00712780(param_2,"dsa_paramgen_md");
    uVar5 = (ulong)uVar2;
    if (uVar2 == 0) {
      lVar4 = FUN_0040d800(param_3);
      if (lVar4 != 0) {
        uVar5 = FUN_00526790(param_1);
        return uVar5;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_pmeth.c",0xca,"pkey_dsa_ctrl_str");
      FUN_0051f8f0(10,0x6a,0);
    }
    else {
      uVar5 = 0xfffffffe;
    }
    return uVar5;
  }
  uVar3 = FUN_006e94d0(param_3,0,10);
  uVar5 = FUN_005265b0(param_1,uVar3);
  return uVar5;
}

