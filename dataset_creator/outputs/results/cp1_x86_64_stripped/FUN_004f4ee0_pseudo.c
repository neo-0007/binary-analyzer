
ulong FUN_004f4ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = thunk_FUN_00712780(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_00535770(param_3);
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar2 = FUN_00424460(param_3);
      uVar4 = (ulong)uVar2;
      if (uVar2 == 0) {
        uVar2 = FUN_00424390(param_3);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_pmeth.c",0x193,"pkey_ec_ctrl_str");
          FUN_0051f8f0(0x10,0x8d,0);
          return uVar4;
        }
      }
    }
    uVar4 = FUN_005356a0(param_1,uVar4);
    return uVar4;
  }
  iVar1 = thunk_FUN_00712780(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00712780(param_3,"explicit");
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_00712780(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      iVar1 = 1;
    }
    uVar4 = FUN_005356c0(param_1,iVar1);
    return uVar4;
  }
  uVar2 = thunk_FUN_00712780(param_2,"ecdh_kdf_md");
  if (uVar2 == 0) {
    lVar5 = FUN_0040d800(param_3);
    if (lVar5 != 0) {
      uVar4 = FUN_00534fb0(param_1);
      return uVar4;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_pmeth.c",0x1a3,"pkey_ec_ctrl_str");
    FUN_0051f8f0(0x10,0x97,0);
    return (ulong)uVar2;
  }
  iVar1 = thunk_FUN_00712780(param_2,"ecdh_cofactor_mode");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  uVar3 = FUN_006e94d0(param_3,0,10);
  uVar4 = FUN_00534c10(param_1,uVar3);
  return uVar4;
}

