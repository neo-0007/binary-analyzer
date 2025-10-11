
undefined8 FUN_004d6160(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = thunk_FUN_00712780(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    uVar2 = FUN_006e94d0(param_3,0,10);
    uVar4 = FUN_005255f0(param_1,uVar2);
    return uVar4;
  }
  iVar1 = thunk_FUN_00712780(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x98);
    uVar3 = FUN_006e94d0(param_3,0,10);
    if (uVar3 < 4) {
LAB_004d6258:
      *(uint *)(lVar5 + 0x20) = uVar3;
      return 1;
    }
  }
  else {
    iVar1 = thunk_FUN_00712780(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar5 = *(long *)(param_1 + 0x98);
      uVar3 = FUN_00424460(param_3);
      if (uVar3 != 0) goto LAB_004d6258;
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_pmeth.c",0xf7,"pkey_dh_ctrl_str");
      FUN_0051f8f0(5,0x6e,0);
    }
    else {
      iVar1 = thunk_FUN_00712780(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        uVar2 = FUN_006e94d0(param_3,0,10);
        uVar4 = FUN_00525790(param_1,uVar2);
        return uVar4;
      }
      iVar1 = thunk_FUN_00712780(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        uVar2 = FUN_006e94d0(param_3,0,10);
        uVar4 = FUN_005256c0(param_1,uVar2);
        return uVar4;
      }
      iVar1 = thunk_FUN_00712780(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        uVar2 = FUN_006e94d0(param_3,0,10);
        uVar4 = FUN_005255d0(param_1,uVar2);
        return uVar4;
      }
      iVar1 = thunk_FUN_00712780(param_2,"dh_pad");
      if (iVar1 == 0) {
        uVar2 = FUN_006e94d0(param_3,0,10);
        uVar4 = FUN_005258b0(param_1,uVar2);
        return uVar4;
      }
    }
  }
  return 0xfffffffe;
}

